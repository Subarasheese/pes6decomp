/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_0012F4E0(u8 *arg0, u8 *arg1, f32 x) {
    u32 *tab;
    f32 *p;
    f32 *first;
    f32 f2, f3;
    s32 n, i, h, mask, idx;
    u8 *a2;
    u8 *a1;
    u8 *s0;
    void *(**fn)(void *, void *, void *, void *);

    tab = (u32 *)(arg1 + *(s32 *)(arg1 + 0x10));
    n = *tab;
    p = (f32 *)(tab + 1);
    if ((u32)n >= 2) {
        if ((u32)n < 6) {
            s32 lim = n - 2;
            i = 0;
            if (lim > 0) {
                do {
                    if (!(*p < x)) break;
                    i++;
                    p++;
                } while (i < lim);
            }
        } else {
            i = n - 1;
            if (i > 0) {
                f32 *q;
                while (1) {
                    h = i / 2;
                    q = p + h;
                    if (x == *q) { p = q; goto done; }
                    if (x < *q) {
                        i = h;
                    } else {
                        i -= h + 1;
                        p += h + 1;
                    }
                    if (i <= 0) break;
                }
            }
            if (*p == 0.0f) {
                p = p - 1;
            } else if (*p < x) {
                p = p + 1;
            }
        }
    }
done:
    first = (f32 *)(tab + 1);
    if (p == first) {
        f3 = 0.0f;
    } else {
        f3 = p[-1];
    }
    f2 = p[0];
    a2 = (u8 *)first + *tab * 4;
    *(f32 *)(arg0 + 0x124) = f2 - f3;
    *(f32 *)(arg0 + 0x120) = x - f3;
    idx = p - first;
    if (f2 == 0.0f) {
        mask = *(s32 *)(arg1 + 0x14);
        fn = *(void *(***)(void *, void *, void *, void *))(arg0 + 0x128);
        s0 = a2 + *(u16 *)(arg1 + 0xE) * idx;
        a1 = s0;
        for (i = 0; i < 9; i++, fn++) {
            if (mask & (1 << i)) a1 = (*fn)(arg0 + 0x80, a1, a2, p);
        }
        {
            s32 m2 = *(s32 *)(arg1 + 0x14);
            fn = *(void *(***)(void *, void *, void *, void *))(arg0 + 0x128);
            for (i = 0; i < 9; i++, fn++) {
                if (m2 & (1 << i)) s0 = (*fn)(arg0 + 0xD0, s0, a2, p);
            }
        }
    } else {
        s0 = a2 + *(u16 *)(arg1 + 0xE) * idx;
        mask = *(s32 *)(arg1 + 0x14);
        fn = *(void *(***)(void *, void *, void *, void *))(arg0 + 0x128);
        a1 = s0;
        for (i = 0; i < 9; i++, fn++) {
            if (mask & (1 << i)) a1 = (*fn)(arg0 + 0x80, a1, a2, p);
        }
        {
            s32 m2 = *(s32 *)(arg1 + 0x14);
            a1 = s0 + *(u16 *)(arg1 + 0xE);
            fn = *(void *(***)(void *, void *, void *, void *))(arg0 + 0x128);
            for (i = 0; i < 9; i++, fn++) {
                if (m2 & (1 << i)) a1 = (*fn)(arg0 + 0xD0, a1, a2, p);
            }
        }
    }
}
