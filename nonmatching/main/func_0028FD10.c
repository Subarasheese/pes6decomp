/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_0028FD10(u32 *arg0, u8 arg1, u8 *arg2, u8 *arg3) {
    s32 count;
    s32 best;
    s32 idx;
    s32 maxv;
    s32 i;
    u32 *q;
    u32 *r;
    s32 val;

    count = arg1;
    if (count != 0) {
        best = 0;
        idx = 0;
        maxv = -1;
        for (i = 0; i < 10; i++) {
            if (arg2[i + 1] == 0xC) {
                val = *arg3;
                if (maxv == val) {
                    best += 1;
                } else if (maxv < val) {
                    maxv = val;
                    best = 1;
                    idx = i;
                }
            }
            arg3 += 2;
        }
        if (best == 1) {
            i = idx + 1;
            q = arg0 + i * 3;
            q[0] &= 0xFFFEFFFF;
            q[0] &= ~0x900;
            q[1] &= 0xFFFEFFFF;
            q[1] &= ~0x900;
            q[2] &= 0xFFFEFFFF;
            q[2] &= ~0x900;
            if (count >= 2) {
                r = arg0;
                for (val = 0; val < 0xB; val++) {
                    if (val != i && arg2[val] == 0xC) {
                        r[0] &= 0xFFFDFFFF;
                        r[1] &= 0xFFFDFFFF;
                        r[2] &= 0xFFFDFFFF;
                    }
                    r += 3;
                }
            }
        }
    }
}
