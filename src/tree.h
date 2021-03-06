//
// Created by Oliver Johnstone on 03/05/2020.
//

#ifndef HEADERCOMPRESSION_TREE_H
#define HEADERCOMPRESSION_TREE_H

namespace HeaderCompression {
    typedef struct {
        int16_t parentId;
        uint32_t encoding;
        uint8_t bits;
    } Node;

    const Node STRING_LIT_HUFF_CODING[] = {
        {.encoding=0x1ff8, .bits=13},
        {.encoding=0x7fffd8, .bits=23},
        {.encoding=0xfffffe2, .bits=28},
        {.encoding=0xfffffe3, .bits=28},
        {.encoding=0xfffffe4, .bits=28},
        {.encoding=0xfffffe5, .bits=28},
        {.encoding=0xfffffe6, .bits=28},
        {.encoding=0xfffffe7, .bits=28},
        {.encoding=0xfffffe8, .bits=28},
        {.encoding=0xffffea, .bits=24},
        {.encoding=0x3ffffffc, .bits=30},
        {.encoding=0xfffffe9, .bits=28},
        {.encoding=0xfffffea, .bits=28},
        {.encoding=0x3ffffffd, .bits=30},
        {.encoding=0xfffffeb, .bits=28},
        {.encoding=0xfffffec, .bits=28},
        {.encoding=0xfffffed, .bits=28},
        {.encoding=0xfffffee, .bits=28},
        {.encoding=0xfffffef, .bits=28},
        {.encoding=0xffffff0, .bits=28},
        {.encoding=0xffffff1, .bits=28},
        {.encoding=0xffffff2, .bits=28},
        {.encoding=0x3ffffffe, .bits=30},
        {.encoding=0xffffff3, .bits=28},
        {.encoding=0xffffff4, .bits=28},
        {.encoding=0xffffff5, .bits=28},
        {.encoding=0xffffff6, .bits=28},
        {.encoding=0xffffff7, .bits=28},
        {.encoding=0xffffff8, .bits=28},
        {.encoding=0xffffff9, .bits=28},
        {.encoding=0xffffffa, .bits=28},
        {.encoding=0xffffffb, .bits=28},
        {.encoding=0x14, .bits=6},
        {.encoding=0x3f8, .bits=10},
        {.encoding=0x3f9, .bits=10},
        {.encoding=0xffa, .bits=12},
        {.encoding=0x1ff9, .bits=13},
        {.encoding=0x15, .bits=6},
        {.encoding=0xf8, .bits=8},
        {.encoding=0x7fa, .bits=11},
        {.encoding=0x3fa, .bits=10},
        {.encoding=0x3fb, .bits=10},
        {.encoding=0xf9, .bits=8},
        {.encoding=0x7fb, .bits=11},
        {.encoding=0xfa, .bits=8},
        {.encoding=0x16, .bits=6},
        {.encoding=0x17, .bits=6},
        {.encoding=0x18, .bits=6},
        {.encoding=0x0, .bits=5},
        {.encoding=0x1, .bits=5},
        {.encoding=0x2, .bits=5},
        {.encoding=0x19, .bits=6},
        {.encoding=0x1a, .bits=6},
        {.encoding=0x1b, .bits=6},
        {.encoding=0x1c, .bits=6},
        {.encoding=0x1d, .bits=6},
        {.encoding=0x1e, .bits=6},
        {.encoding=0x1f, .bits=6},
        {.encoding=0x5c, .bits=7},
        {.encoding=0xfb, .bits=8},
        {.encoding=0x7ffc, .bits=15},
        {.encoding=0x20, .bits=6},
        {.encoding=0xffb, .bits=12},
        {.encoding=0x3fc, .bits=10},
        {.encoding=0x1ffa, .bits=13},
        {.encoding=0x21, .bits=6},
        {.encoding=0x5d, .bits=7},
        {.encoding=0x5e, .bits=7},
        {.encoding=0x5f, .bits=7},
        {.encoding=0x60, .bits=7},
        {.encoding=0x61, .bits=7},
        {.encoding=0x62, .bits=7},
        {.encoding=0x63, .bits=7},
        {.encoding=0x64, .bits=7},
        {.encoding=0x65, .bits=7},
        {.encoding=0x66, .bits=7},
        {.encoding=0x67, .bits=7},
        {.encoding=0x68, .bits=7},
        {.encoding=0x69, .bits=7},
        {.encoding=0x6a, .bits=7},
        {.encoding=0x6b, .bits=7},
        {.encoding=0x6c, .bits=7},
        {.encoding=0x6d, .bits=7},
        {.encoding=0x6e, .bits=7},
        {.encoding=0x6f, .bits=7},
        {.encoding=0x70, .bits=7},
        {.encoding=0x71, .bits=7},
        {.encoding=0x72, .bits=7},
        {.encoding=0xfc, .bits=8},
        {.encoding=0x73, .bits=7},
        {.encoding=0xfd, .bits=8},
        {.encoding=0x1ffb, .bits=13},
        {.encoding=0x7fff0, .bits=19},
        {.encoding=0x1ffc, .bits=13},
        {.encoding=0x3ffc, .bits=14},
        {.encoding=0x22, .bits=6},
        {.encoding=0x7ffd, .bits=15},
        {.encoding=0x3, .bits=5},
        {.encoding=0x23, .bits=6},
        {.encoding=0x4, .bits=5},
        {.encoding=0x24, .bits=6},
        {.encoding=0x5, .bits=5},
        {.encoding=0x25, .bits=6},
        {.encoding=0x26, .bits=6},
        {.encoding=0x27, .bits=6},
        {.encoding=0x6, .bits=5},
        {.encoding=0x74, .bits=7},
        {.encoding=0x75, .bits=7},
        {.encoding=0x28, .bits=6},
        {.encoding=0x29, .bits=6},
        {.encoding=0x2a, .bits=6},
        {.encoding=0x7, .bits=5},
        {.encoding=0x2b, .bits=6},
        {.encoding=0x76, .bits=7},
        {.encoding=0x2c, .bits=6},
        {.encoding=0x8, .bits=5},
        {.encoding=0x9, .bits=5},
        {.encoding=0x2d, .bits=6},
        {.encoding=0x77, .bits=7},
        {.encoding=0x78, .bits=7},
        {.encoding=0x79, .bits=7},
        {.encoding=0x7a, .bits=7},
        {.encoding=0x7b, .bits=7},
        {.encoding=0x7ffe, .bits=15},
        {.encoding=0x7fc, .bits=11},
        {.encoding=0x3ffd, .bits=14},
        {.encoding=0x1ffd, .bits=13},
        {.encoding=0xffffffc, .bits=28},
        {.encoding=0xfffe6, .bits=20},
        {.encoding=0x3fffd2, .bits=22},
        {.encoding=0xfffe7, .bits=20},
        {.encoding=0xfffe8, .bits=20},
        {.encoding=0x3fffd3, .bits=22},
        {.encoding=0x3fffd4, .bits=22},
        {.encoding=0x3fffd5, .bits=22},
        {.encoding=0x7fffd9, .bits=23},
        {.encoding=0x3fffd6, .bits=22},
        {.encoding=0x7fffda, .bits=23},
        {.encoding=0x7fffdb, .bits=23},
        {.encoding=0x7fffdc, .bits=23},
        {.encoding=0x7fffdd, .bits=23},
        {.encoding=0x7fffde, .bits=23},
        {.encoding=0xffffeb, .bits=24},
        {.encoding=0x7fffdf, .bits=23},
        {.encoding=0xffffec, .bits=24},
        {.encoding=0xffffed, .bits=24},
        {.encoding=0x3fffd7, .bits=22},
        {.encoding=0x7fffe0, .bits=23},
        {.encoding=0xffffee, .bits=24},
        {.encoding=0x7fffe1, .bits=23},
        {.encoding=0x7fffe2, .bits=23},
        {.encoding=0x7fffe3, .bits=23},
        {.encoding=0x7fffe4, .bits=23},
        {.encoding=0x1fffdc, .bits=21},
        {.encoding=0x3fffd8, .bits=22},
        {.encoding=0x7fffe5, .bits=23},
        {.encoding=0x3fffd9, .bits=22},
        {.encoding=0x7fffe6, .bits=23},
        {.encoding=0x7fffe7, .bits=23},
        {.encoding=0xffffef, .bits=24},
        {.encoding=0x3fffda, .bits=22},
        {.encoding=0x1fffdd, .bits=21},
        {.encoding=0xfffe9, .bits=20},
        {.encoding=0x3fffdb, .bits=22},
        {.encoding=0x3fffdc, .bits=22},
        {.encoding=0x7fffe8, .bits=23},
        {.encoding=0x7fffe9, .bits=23},
        {.encoding=0x1fffde, .bits=21},
        {.encoding=0x7fffea, .bits=23},
        {.encoding=0x3fffdd, .bits=22},
        {.encoding=0x3fffde, .bits=22},
        {.encoding=0xfffff0, .bits=24},
        {.encoding=0x1fffdf, .bits=21},
        {.encoding=0x3fffdf, .bits=22},
        {.encoding=0x7fffeb, .bits=23},
        {.encoding=0x7fffec, .bits=23},
        {.encoding=0x1fffe0, .bits=21},
        {.encoding=0x1fffe1, .bits=21},
        {.encoding=0x3fffe0, .bits=22},
        {.encoding=0x1fffe2, .bits=21},
        {.encoding=0x7fffed, .bits=23},
        {.encoding=0x3fffe1, .bits=22},
        {.encoding=0x7fffee, .bits=23},
        {.encoding=0x7fffef, .bits=23},
        {.encoding=0xfffea, .bits=20},
        {.encoding=0x3fffe2, .bits=22},
        {.encoding=0x3fffe3, .bits=22},
        {.encoding=0x3fffe4, .bits=22},
        {.encoding=0x7ffff0, .bits=23},
        {.encoding=0x3fffe5, .bits=22},
        {.encoding=0x3fffe6, .bits=22},
        {.encoding=0x7ffff1, .bits=23},
        {.encoding=0x3ffffe0, .bits=26},
        {.encoding=0x3ffffe1, .bits=26},
        {.encoding=0xfffeb, .bits=20},
        {.encoding=0x7fff1, .bits=19},
        {.encoding=0x3fffe7, .bits=22},
        {.encoding=0x7ffff2, .bits=23},
        {.encoding=0x3fffe8, .bits=22},
        {.encoding=0x1ffffec, .bits=25},
        {.encoding=0x3ffffe2, .bits=26},
        {.encoding=0x3ffffe3, .bits=26},
        {.encoding=0x3ffffe4, .bits=26},
        {.encoding=0x7ffffde, .bits=27},
        {.encoding=0x7ffffdf, .bits=27},
        {.encoding=0x3ffffe5, .bits=26},
        {.encoding=0xfffff1, .bits=24},
        {.encoding=0x1ffffed, .bits=25},
        {.encoding=0x7fff2, .bits=19},
        {.encoding=0x1fffe3, .bits=21},
        {.encoding=0x3ffffe6, .bits=26},
        {.encoding=0x7ffffe0, .bits=27},
        {.encoding=0x7ffffe1, .bits=27},
        {.encoding=0x3ffffe7, .bits=26},
        {.encoding=0x7ffffe2, .bits=27},
        {.encoding=0xfffff2, .bits=24},
        {.encoding=0x1fffe4, .bits=21},
        {.encoding=0x1fffe5, .bits=21},
        {.encoding=0x3ffffe8, .bits=26},
        {.encoding=0x3ffffe9, .bits=26},
        {.encoding=0xffffffd, .bits=28},
        {.encoding=0x7ffffe3, .bits=27},
        {.encoding=0x7ffffe4, .bits=27},
        {.encoding=0x7ffffe5, .bits=27},
        {.encoding=0xfffec, .bits=20},
        {.encoding=0xfffff3, .bits=24},
        {.encoding=0xfffed, .bits=20},
        {.encoding=0x1fffe6, .bits=21},
        {.encoding=0x3fffe9, .bits=22},
        {.encoding=0x1fffe7, .bits=21},
        {.encoding=0x1fffe8, .bits=21},
        {.encoding=0x7ffff3, .bits=23},
        {.encoding=0x3fffea, .bits=22},
        {.encoding=0x3fffeb, .bits=22},
        {.encoding=0x1ffffee, .bits=25},
        {.encoding=0x1ffffef, .bits=25},
        {.encoding=0xfffff4, .bits=24},
        {.encoding=0xfffff5, .bits=24},
        {.encoding=0x3ffffea, .bits=26},
        {.encoding=0x7ffff4, .bits=23},
        {.encoding=0x3ffffeb, .bits=26},
        {.encoding=0x7ffffe6, .bits=27},
        {.encoding=0x3ffffec, .bits=26},
        {.encoding=0x3ffffed, .bits=26},
        {.encoding=0x7ffffe7, .bits=27},
        {.encoding=0x7ffffe8, .bits=27},
        {.encoding=0x7ffffe9, .bits=27},
        {.encoding=0x7ffffea, .bits=27},
        {.encoding=0x7ffffeb, .bits=27},
        {.encoding=0xffffffe, .bits=28},
        {.encoding=0x7ffffec, .bits=27},
        {.encoding=0x7ffffed, .bits=27},
        {.encoding=0x7ffffee, .bits=27},
        {.encoding=0x7ffffef, .bits=27},
        {.encoding=0x7fffff0, .bits=27},
        {.encoding=0x3ffffee, .bits=26},
        {.encoding=0x3fffffff, .bits=30}
    };
};

#endif //HEADERCOMPRESSION_TREE_H
