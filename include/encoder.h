//
// Created by Oliver Johnstone on 03/05/2020.
//

#ifndef HEADERCOMPRESSION_HEADERCOMPRESSION_H
#define HEADERCOMPRESSION_HEADERCOMPRESSION_H

#include <cstddef>

namespace HeaderCompression {
    class Encoder {
        private:
            class EncoderImpl;
            EncoderImpl *impl;

        public:
            explicit Encoder();
            virtual ~Encoder();

            size_t compress(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen);
            size_t decompress(const uint8_t *inBuf, size_t inLen, uint8_t *outBuf, size_t outLen);
    };
}

#endif //HEADERCOMPRESSION_HEADERCOMPRESSION_H
