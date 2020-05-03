//
// Created by Oliver Johnstone on 03/05/2020.
//

#ifndef HEADERCOMPRESSION_HEADER_COMPRESSION_H
#define HEADERCOMPRESSION_HEADER_COMPRESSION_H

#include <encoder.h>

namespace HeaderCompression {
    class Encoder::EncoderImpl {
        public:
            size_t compressString(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen);
            size_t decompressString(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen);
    };
}

#endif //HEADERCOMPRESSION_HEADER_COMPRESSION_H
