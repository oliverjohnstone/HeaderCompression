//
// Created by Oliver Johnstone on 03/05/2020.
//

#ifndef HEADERCOMPRESSION_BIT_STREAM_H
#define HEADERCOMPRESSION_BIT_STREAM_H

#include <cstdint>

// https://github.com/sakhnik/cpp-sandbox/blob/737132386dc20009be2f1997cbd62302118a7125/BitStream.cpp

namespace BitStream {
    inline uint32_t read(size_t offset, uint8_t count, const uint8_t *src, uint32_t accum = 0) {
        // Base of recursion
        if (count == 0) {
            return accum;
        }

        // Look at the source, how many bits there left in the current byte
        const uint8_t *cur_src = src + offset / 8;
        unsigned bits_left = 8 - offset % 8;
        const uint8_t cur_data = *cur_src << (8 - bits_left);

        // How many bits we need and can write now
        unsigned bits_to_use = bits_left < count ? bits_left : count;

        // Write the desired bits to the accumulator
        accum <<= bits_to_use;
        uint8_t mask = (1 << bits_to_use) - 1;
        unsigned off = 8 - bits_to_use;
        accum |= (cur_data & (mask << off)) >> off;

        // Tail-recurse into the rest of required bits
        return read(offset + bits_to_use, count - bits_to_use, src, accum);
    }

    // Write given value to the memory starting at 'offset' bit spanning 'count' bits
    inline void write(size_t offset, uint8_t count, uint8_t *dst, uint32_t value) {
        // Recursion base
        if (count == 0) {
            return;
        }

        // How many bits there left in the current target byte
        uint8_t *cur_dst = dst + offset / 8;
        unsigned bits_left = 8 - offset % 8;

        // How many bits are necessary and the mask for that count of bits
        unsigned bits_to_use = bits_left < count ? bits_left : count;
        const uint8_t mask = (1 << bits_to_use) - 1;

        // The desired range of bits from the source value
        unsigned value_off = count - bits_to_use;
        const uint8_t value_bits = (value >> value_off) & mask;

        // Writing the bits to the destination
        uint8_t cur_data = *cur_dst;
        unsigned off = bits_left - bits_to_use;
        cur_data &= ~(mask << off);
        cur_data |= value_bits << off;
        *cur_dst = cur_data;

        // Tail recursion to the rest of data
        return write(offset + bits_to_use, count - bits_to_use, dst, value);
    }
}

#endif //HEADERCOMPRESSION_BIT_STREAM_H
