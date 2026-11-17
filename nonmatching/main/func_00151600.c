/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001540C0();
extern void *func_00153FD0(s32 a, s32 b, s32 c);
extern s32 func_00151BE0(s32 a, s32 b, s32 c);
extern char D_003768F0[];

void *func_00151600(u8 *p, s32 value, s32 mode, s32 w, s32 h, s32 lv, s32 flag) {
    s32 s6;
    s32 s7;
    s32 i;
    s32 n;
    u8 *q;

    if (p == 0) {
        s32 r = func_001540C0();
        s32 cnt = lv;
        s32 sz = 0x40;
        s32 w2 = w;
        s32 h2 = h;
        if (lv >= 0) {
            s32 ent = ((s32 *)D_003768F0)[mode];
            do {
                sz += (ent * (w2 * h2)) / 2;
                cnt--;
                w2 = w2 / 2;
                h2 = h2 / 2;
            } while (cnt >= 0);
        }
        if (flag != 0) {
            if (mode == 1) {
                sz += 0x40;
            } else if (mode == 2) {
                sz += 0x400;
            }
        }
        p = func_00153FD0(r, sz, 1);
    }
    if (mode == 1) {
        s6 = (w * h) / 2;
        s7 = 0x40;
        p[0x18] = ((w + 0x7F) / 128) * 2;
        p[0x19] = 0x14;
        p[0x1C] = 1;
        p[0x1D] = 0;
        p[0x1E] = 8;
        p[0x1F] = 2;
    } else if (mode == 2) {
        s6 = w * h;
        s7 = 0x400;
        p[0x18] = ((w + 0x7F) / 128) * 2;
        p[0x19] = 0x13;
        p[0x1C] = 1;
        p[0x1D] = 0;
        p[0x1E] = 0x10;
        p[0x1F] = 0x10;
    } else if (mode == 3) {
        s6 = (w * h) * 2;
        s7 = 0;
        p[0x18] = (w + 0x3F) / 64;
        p[0x19] = 2;
        p[0x1C] = 0;
    } else if (mode == 4) {
        s6 = (w * h) * 4;
        s7 = 0;
        p[0x18] = (w + 0x3F) / 64;
        p[0x19] = 0;
        p[0x1C] = 0;
    }
    if (flag == 0) {
        *(s16 *)(p + 0x12) = 0;
        s7 = 0;
    } else {
        *(s16 *)(p + 0x12) = 0x40;
    }
    *(s16 *)(p + 0x10) = s7 + 0x40;
    *(s32 *)(p + 8) = (s7 + 0x40) + s6;
    *(s32 *)p = 0x29857294;
    *(s32 *)(p + 4) = 1;
    *(s32 *)(p + 0xC) = value;
    *(s16 *)(p + 0x14) = w;
    *(s16 *)(p + 0x16) = h;
    if (w == 0) {
        p[0x1A] = 0;
    } else {
        n = 1;
        while (((w - 1) >> n) != 0) {
            n++;
            if (n >= 0x20) break;
        }
        p[0x1A] = n;
    }
    if (h == 0) {
        p[0x1B] = 0;
    } else {
        n = 1;
        while (((h - 1) >> n) != 0) {
            n++;
            if (n >= 0x20) break;
        }
        p[0x1B] = n;
    }
    *(s32 *)(p + 0x20) = s6 / 16;
    *(s32 *)(p + 0x24) = s7 / 16;
    *(s16 *)(p + 0x28) = w;
    *(s16 *)(p + 0x2A) = h;
    p[0x2C] = p[0x18];
    if ((w % 64) != 0) {
        p[0x2C] = p[0x2C] + 1;
    }
    p[0x2D] = p[0x19];
    *(u16 *)(p + 0x2E) = 0;
    i = 0;
    if (lv >= 0) {
        q = p;
        do {
            s32 v = func_00151BE0(p[0x19], w, h);
            if (i > 0) {
                *(u16 *)(q + 0x2E) = *(u16 *)(p + 0x2E);
            }
            *(u16 *)(p + 0x2E) = *(u16 *)(p + 0x2E) + (v & 0xFFFF);
            w = (w + 1) / 2;
            h = (h + 1) / 2;
            i++;
            q += 2;
        } while (i <= lv);
    }
    *(u16 *)(p + 0x2E) = (*(u16 *)(p + 0x2E) + 0x1F) / 32;
    *(u16 *)(p + 0x2E) = *(u16 *)(p + 0x2E) | ((lv << 12) & 0xFFFF);
    return p;
}
