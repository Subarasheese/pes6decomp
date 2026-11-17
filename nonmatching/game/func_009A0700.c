/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_0093FB00(u8 *, u8 *, s32, s32);
void func_0093FB30(s32, s32, u8);
void func_0093FCB0(s32);
s32 func_00BA9430(s32, u8);
extern char D_00591A90[];
extern char D_00591E00[];
extern char D_00CB63B0[];

void func_009A0700(s32 unused0, s32 unused1, s32 unused2, s32 lim_in) {
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *ent;
    u8 *ap;
    u8 *bp;
    u8 *cp;
    s32 reset;
    s32 p;
    s32 t;
    s32 s0;
    u8 a1;
    u8 a4;
    u8 a5;
    u8 a6;
    u8 id;
    u8 val;
    s32 i;
    s32 lim;

    a = (u8 *)D_00CB63B0;
    b = (u8 *)D_00591E00;
    c = (u8 *)D_00591A90;
    reset = 0;
    lim = lim_in;
    if (a[0] == 0 && a[0xF] == 0) {
        reset = 1;
    }
    p = 0;
    ap = a;
    bp = b;
    cp = c;
    while (reset == 0) {
        a6 = ap[0];
        a5 = bp[0xF6];
        if ((s32)a5 < (s32)a6) {
            reset = 1;
            break;
        }
        a4 = bp[0xF8];
        t = a4;
        lim = a4 + a6;
        ent = cp + a4 * 8;
        while (t < lim) {
            id = ent[0x52];
            if (id == 0xFF) {
                break;
            }
            if (ap[1 + (t - a4) * 2] != id) {
                reset = 1;
                break;
            }
            if (ap[2 + (t - a4) * 2] != ent[0x53]) {
                reset = 1;
                break;
            }
            ent += 8;
            t++;
        }
        if (reset != 0) {
            break;
        }
        if (a5 != a6) {
            s0 = a4 + a6;
            ent = cp + s0 * 8;
            for (;;) {
                a1 = bp[0xF6];
                a4 = bp[0xF8];
                if (!(s0 < a4 + a1)) {
                    break;
                }
                id = ent[0x52];
                if (id == 0xFF) {
                    break;
                }
                val = ent[0x53];
                ap[1 + (s0 - a4) * 2] = id;
                ap[2 + (s0 - a4) * 2] = val;
                if (cp[7] == val) {
                    func_0093FB30(0, p, ent[0x52]);
                } else {
                    func_0093FB30(1, p, id);
                }
                ent += 8;
                s0++;
            }
            ap[0] = a1;
        }
        p++;
        ap += 0xF;
        bp += 1;
        cp += 0x8B;
        if (p >= 2) {
            break;
        }
    }
    if ((reset & 0xFF) != 0) {
        i = 0;
        do {
            ap = a + (i & 0xFF) * 0xF;
            i = (i + 1) & 0xFF;
            ap[0] = 0;
            ap[1] = 0xFF;
            ap[2] = 0xFF;
            ap[3] = 0xFF;
            ap[4] = 0xFF;
            ap[5] = 0xFF;
            ap[6] = 0xFF;
            ap[7] = 0xFF;
            ap[8] = 0xFF;
            ap[9] = 0xFF;
            ap[0xA] = 0xFF;
            ap[0xB] = 0xFF;
            ap[0xC] = 0xFF;
            ap[0xD] = 0xFF;
            ap[0xE] = 0xFF;
        } while (i < 2);
        func_0093FB00(ap, a, i, lim);
        p = 0;
        bp = b;
        cp = c;
        ap = a;
        do {
            s0 = bp[0xF8];
            ent = cp + s0 * 8;
            for (;;) {
                a1 = bp[0xF6];
                a4 = bp[0xF8];
                if (!(s0 < a4 + a1)) {
                    break;
                }
                id = ent[0x52];
                if (id == 0xFF) {
                    break;
                }
                val = ent[0x53];
                ap[1 + (s0 - a4) * 2] = id;
                ap[2 + (s0 - a4) * 2] = val;
                if (cp[7] == val) {
                    func_0093FB30(0, p, ent[0x52]);
                } else {
                    func_0093FB30(1, p, id);
                }
                ent += 8;
                s0++;
            }
            p++;
            ap[0] = a1;
            bp += 1;
            cp += 0x8B;
            ap += 0xF;
        } while (p < 2);
        if ((s32)a[0] > 0 || (s32)a[0xF] > 0) {
            if (a[0] + a[0xF] < 3) {
                func_0093FCB0(func_00BA9430(3, a1));
            }
        }
    }
}
