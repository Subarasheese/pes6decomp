/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 *func_001F4380(s32 a, s32 b);
extern char D_0052AE14[];
extern char D_0052AE18[];

s32 *func_001DCFE0(s32 *arg0, u32 arg1) {
    s32 b, idx, i, lo, hi, mid;
    s32 *p;
    s32 *e;
    s32 *found;
    s32 *s1;
    s32 tbl;
    u8 *n;
    u8 *obj;
    s32 *s0;

    idx = arg0[1];
    p = func_001F4380(idx, arg1);
    if (p) idx = *p;
    tbl = *(s32 *)D_0052AE18;
    e = (s32 *)(tbl + idx * 16);
    found = 0;
    if (e && *e) {
        obj = *(u8 **)arg0;
        n = *(u8 **)(obj + 4);
        for (i = 0x36; i != 0; i--, n += 8) {
            u32 cnt = *(u16 *)n;
            if (cnt) {
                u8 *arr = *(u8 **)(n + 4);
                lo = 0;
                hi = (s32)cnt - 1;
                if (hi > 0) {
                    do {
                        mid = (lo + hi) / 2;
                        if (*(u32 *)(arr + mid * 16) < arg1) lo = mid + 1;
                        else hi = mid;
                    } while (lo < hi);
                }
                found = (s32 *)(arr + lo * 16);
                if (arg1 != *found) found = 0;
                if (found) break;
            }
        }
    }
    if (!found) {
        s1 = *(s32 **)((u8 *)*(s32 *)D_0052AE14 + arg0[1] * 12 + 4);
        b = arg0[1] * 12;
        if (s1) {
            do {
                s0 = (s32 *)(tbl + *s1 * 16);
                idx = s0[1];
                p = func_001F4380(idx, b);
                if (p) idx = *p;
                tbl = *(s32 *)D_0052AE18;
                e = (s32 *)(tbl + idx * 16);
                found = 0;
                if (e && *e) {
                    obj = *(u8 **)s0;
                    n = *(u8 **)(obj + 4);
                    for (i = 0x36; i != 0; i--, n += 8) {
                        u32 cnt = *(u16 *)n;
                        if (cnt) {
                            u8 *arr = *(u8 **)(n + 4);
                            lo = 0;
                            hi = (s32)cnt - 1;
                            if (hi > 0) {
                                do {
                                    mid = (lo + hi) / 2;
                                    if (*(u32 *)(arr + mid * 16) < arg1) lo = mid + 1;
                                    else hi = mid;
                                } while (lo < hi);
                            }
                            found = (s32 *)(arr + lo * 16);
                            if (arg1 != *found) found = 0;
                            if (found) break;
                        }
                    }
                }
                if (found) break;
                s1++;
                b = *s1;
            } while (b != -1);
        }
    }
    if (found) return found;
    n = *(u8 **)(*(u8 **)arg0 + 4);
    for (i = 0x36; i != 0; i--, n += 8) {
        if (*(u16 *)n) return *(s32 **)(n + 4);
    }
    return 0;
}
