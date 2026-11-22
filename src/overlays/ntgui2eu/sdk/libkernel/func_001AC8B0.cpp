/* compiler: ee-gcc-2.96-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_0023f938.cpp. See THIRD_PARTY.md. */
#include "types.h"
extern "C" {
extern const char D_006011F0[];
extern const char D_006011F8[];
s32 func_001B016C(s32, const char *);
u8 *func_001ABB58(u8 *, s32 *);
u8 *func_001ABBA0(u8 *, s32 *);
u32 func_001B0444(const char *);
}

struct UnalignedWord {
    s32 value __attribute__((packed));
};

extern "C" s32 func_001AC8B0(u8 *arg0, s32 *arg1) {
    s32 nestedLength;
    s32 result;
    u8 *end;
    u8 *cursor;
    arg1[0] = (s32)arg0 - *(s32 *)(arg0 + 4) + 13;
    if (func_001B016C(arg1[0], D_006011F0) != 0 && func_001B016C(arg1[0], D_006011F8) != 0 && *(s8 *)arg1[0] != 0x7A) {
        result = 0;
    } else {
        end = (u8 *)arg1[0] + func_001B0444((const char *)arg1[0]);
        cursor = end + 1;
        if (func_001B016C(arg1[0], D_006011F8) == 0) {
            arg1[1] = ((UnalignedWord *)cursor)->value;
            cursor = end + 5;
        } else {
            arg1[1] = 0;
        }
        cursor = func_001ABBA0(func_001ABB58(cursor, &arg1[2]), &arg1[3]);
        arg1[4] = *cursor;
        cursor++;
        if (*(s8 *)arg1[0] == 0x7A) {
            cursor = func_001ABB58(cursor, &nestedLength) + nestedLength;
        }
        result = (s32)cursor;
    }
    return result;
}
