/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00321E40(s16 *arg0) {
    u8 *base = (u8 *)arg0;
    u8 *p = base;
    int run = 0;
    int i = 0;
    int next = 1;
    int cur = 0;
    int prev = 0;
    int k;

    if (*arg0 > 0) {
        do {
            if (i != 0) {
                if (*(s16 *)(p - 0xA) != *(s16 *)(p + 6)) {
                    if (run >= 0) {
                        for (k = 0; run >= k; k++) {
                            *(s8 *)(base + (i - 1 - k) * 0x10 + 0x12) = run;
                        }
                    }
                    prev = *(s16 *)(p - 0xA);
                    cur = next;
                    run = 0;
                    next = i + 1;
                    if (cur == 1) {
                        for (k = 0; k < i; k++) {
                            *(s8 *)(base + k * 0x10 + 0x10) = *(s16 *)(base + k * 0x10 + 6) - *(s16 *)(p + 6);
                        }
                    }
                } else {
                    run += 1;
                    if (i == *arg0 - 1) {
                        if (run >= 0) {
                            for (k = 0; run >= k; k++) {
                                *(s8 *)(base + (i - 1 - k) * 0x10 + 0x12) = run;
                            }
                        }
                    }
                }
            }
            *(s8 *)(p + 0x11) = cur;
            *(s16 *)(p + 8) = next;
            i += 1;
            *(s8 *)(p + 0x10) = prev - *(s16 *)(p + 6);
            p += 0x10;
        } while (i < *arg0);
    }
    return 1;
}
