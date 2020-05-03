//
// Created by Oliver Johnstone on 03/05/2020.
//

#include <gtest/gtest.h>
#include <encoder.h>

using namespace HeaderCompression;
using namespace std;

namespace {
    TEST(HeaderCompression, Encodes) {
        Encoder encoder;
        auto str = "0000000000000000000000000000000000";
        uint8_t outBuf[100];

        ASSERT_EQ(encoder.compress((uint8_t*)str, strlen(str), outBuf, 100), 0);
    }

    TEST(HeaderCompression, Decodes) {
        Encoder encoder;
        uint8_t buf[] = {0, 2, 3, 4, 5};
        uint8_t outBuf[100];

        ASSERT_EQ(encoder.decompress(buf, 5, outBuf, 100), 0);
    }
}