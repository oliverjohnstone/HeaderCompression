//
// Created by Oliver Johnstone on 03/05/2020.
//

#include <cstdint>
#include <stdexcept>
#include "tree.h"
#include "impl.h"
#include <bit_stream.h>

// Constructors for exposed wrapper class
HeaderCompression::Encoder::Encoder() : impl(new EncoderImpl()) {}

HeaderCompression::Encoder::~Encoder() {
    delete impl;
}

size_t HeaderCompression::Encoder::compress(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen) {
    return impl->compressString(inBuf, inLen, outBuf, outLen);
}

size_t HeaderCompression::Encoder::decompress(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen) {
    return impl->decompressString(inBuf, inLen, outBuf, outLen);
}

size_t HeaderCompression::Encoder::EncoderImpl::compressString(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen) {
    auto inPos = 0;
    size_t maxBits = outLen * 8;
    size_t bitPos = 0;

    for (; inPos < inLen && bitPos < maxBits; inPos++) {
        auto node = STRING_LIT_HUFF_CODING[inBuf[inPos]];
        if (bitPos + node.bits > maxBits) {
            throw std::out_of_range("Output buffer too small");
        }

        BitStream::write(bitPos, node.bits, outBuf, node.encoding);
        bitPos += node.bits;
    }

    return bitPos / 8 + (bitPos % 8 ? 1 : 0);
}

size_t HeaderCompression::Encoder::EncoderImpl::decompressString(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen) {
    return 0;
}
