/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_00250e98.cpp. See THIRD_PARTY.md. */
// SPDX-License-Identifier: GPL-3.0-or-later
#include "pes6/mpeg_decoder.h"
extern "C" {
struct MacroblockCounters_250E98 {
    int count;
    int remaining;
    int first;
    int second;
};
struct MacroblockScratch_250E98 {
    char head[0x20];
    char first[0x10];
    char second[0x10];
};
void func_008FBE28(int);
void func_00900398(void);
void func_00900438(MPEGDEC *, int);
void func_00900500(MPEGDEC *, const char *);
int func_008F6910(MPEGDEC *, int, int, int, int, MacroblockScratch_250E98 *, char *, char *);
void func_008F6FE8(MPEGDEC *, int);
int func_008F7D40(MPEGDEC *, int *, int *, char *, MacroblockScratch_250E98 *, char *, char *);
int func_008F8298(MPEGDEC *);
int func_008F87E0(MPEGDEC *, int);
void func_008F8908(MPEGDEC *);
int func_008F8948(MPEGDEC *, MacroblockScratch_250E98 *, int *, char *, int *);
int func_008F9AC8(MPEGDEC *, int, int *, int *, MacroblockScratch_250E98 *);

int func_008F7448(MPEGDEC *decoder, int limit)
{
    MacroblockScratch_250E98 scratch;
    MacroblockCounters_250E98 state;
    char tail[0x10];
    int ok;
    int result;
    int value;
    long wide;
    int status;
    state.count = 0;
    state.remaining = 0;
    status = func_008F9AC8(decoder, limit, &state.count, &state.remaining, &scratch);
    if (status != 0) {
        return status;
    }
    decoder->field_0x12C = 0;
    for (;;) {
        if (state.count >= limit) {
            return 0;
        }
        ok = 1;
        decoder->buffers[decoder->bufferIndex].noCoefficients = 0;
        func_008F8908(decoder);
        if (*(volatile int *)0x1000B020 != 0 && (*(volatile int *)0x10002010 & 0x4000) == 0) {
            for (;;) {
                if (*(volatile int *)0x1000B420 == 0 && (*(volatile int *)0x1000B400 & 0x100) == 0) {
                    func_008FBE28(decoder->field_0x868);
                }
                if (decoder->field_0x878 != 0) {
                    func_00900398();
                    result = 0;
                    goto check;
                }
                if (*(volatile int *)0x1000B020 == 0) {
                    break;
                }
                if (*(volatile int *)0x10002010 & 0x4000) {
                    break;
                }
            }
        }
        value = *(volatile int *)0x10002020;
        wide = *(volatile long *)0x10002030;
        decoder->topBits = (int)wide;
        if (wide < 0) {
            int low = value & 0x1F;
            decoder->bitsAvailable = low != 0 ? 0x20 - low : 0;
        } else {
            decoder->bitsAvailable = 0x20;
        }
        if (*(volatile int *)0x10002010 & 0x4000) {
            func_00900438(decoder, value);
            ok = 0;
        }
        result = ok;
    check:
        if (result == 0) {
            return decoder->field_0x878 == 0 ? 2 : 4;
        }
        if (state.remaining == 0) {
            if (func_008F87E0(decoder, 0x17) == 0 || decoder->field_0x12C != 0) {
                decoder->field_0x12C = 0;
                return 3;
            }
            state.remaining = func_008F8298(decoder);
            if (decoder->field_0x12C != 0) {
                decoder->field_0x12C = 0;
                return 1;
            }
        }
        if (state.count >= limit) {
            func_00900500(decoder, "Too many macroblocks in picture");
            return 2;
        }
        if (state.remaining == 1) {
            if (func_008F7D40(decoder, &state.first, &state.second, tail, &scratch, scratch.first, scratch.second) == 0) {
                decoder->field_0x12C = 0;
                return 1;
            }
        } else if (func_008F8948(decoder, &scratch, &state.second, scratch.first, &state.first) == 0) {
            decoder->field_0x12C = 0;
            return 2;
        }
        if (func_008F6910(decoder, state.count, state.remaining, state.first, state.second, &scratch, scratch.first, scratch.second) == 0) {
            decoder->field_0x12C = 0;
            return 2;
        }
        if (state.count != 0) {
            func_008F6FE8(decoder, decoder->bufferIndex ^ 1);
        }
        state.count += 1;
        decoder->bufferIndex ^= 1;
        state.remaining -= 1;
        continue;
    }
}
}
