/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_0032E8D0(s32 a, s32 b, u32 c);
extern s32 func_0032E980(s16 a);
extern void func_0032FBD0(s32 *p, s32 a, s32 b, s32 c, s32 d);
extern void func_00330AB0(s32 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_00330F40(s32 *p, s32 a, s32 b, void *c, s32 d);
extern s32 func_003324B0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 D_003E9F2C;
extern s32 D_003E9F24;
extern s8 D_003E9F20;

s32 func_00331BF0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 spFC, spF8, spF4;
    s32 s0, s1, s5, s6, s2, s7, fp, v, fl, fl2, fl3, cc, spD0, a1;
    u32 a2, k, r1, r2;

    if (D_003E9F2C != 0 && D_003E9F24 == (s32)arg0) return 0;
    if (!((arg1[0] >> 2) & 1)) return 0;
    if (!((arg1[0] >> 3) & 1)) return 0;
    spFC = -1;
    spF4 = -1;
    s1 = 0;
    func_00330AB0(&spFC, arg1[0] & 3, (*(u16 *)arg1 >> 6) & 0xF, (arg1[1] >> 2) & 0x1F,
                  (*(u32 *)arg1 >> 15) & 0x1F, arg2);
    func_00330AB0(&spF4, arg1[0] & 3, (*(u16 *)(arg1 + 2) >> 7) & 0xF, (arg1[3] >> 3) & 0x1F,
                  arg1[4] & 0x1F, arg2);
    v = func_00330F40(&spF8, spFC, spF4, arg1, arg2);
    if (((*(u32 *)(arg1 + 0xC) & 0xFF000000) >> 24) == 0x1C) {
        k = spF8;
        if (k == 0x1C000002) {
            func_0032FBD0(&spFC, arg1[0] & 3, 1, 0x14, arg2);
            v = (spFC == -1) ? 1 : 2;
            if (v == 2) {
                func_0032FBD0(&spF8, arg1[0] & 3, 1, 0x15, arg2);
                v = (spF8 == -1) ? 1 : 2;
            }
            if (v == 2) {
                func_0032FBD0(&spF4, arg1[0] & 3, 1, 0x16, arg2);
                v = (spF4 == -1) ? 1 : 2;
            }
        } else if (k == 0x1C000001) {
            func_0032FBD0(&spFC, arg1[0] & 3, 1, 0x14, arg2);
            v = (spFC == -1) ? 1 : 2;
            if (v == 2) {
                func_0032FBD0(&spF8, arg1[0] & 3, 1, 0x15, arg2);
                v = (spF8 == -1) ? 1 : 2;
            }
        } else if (k == 0x1C000000) {
            func_0032FBD0(&spF8, arg1[0] & 3, 1, 0x14, arg2);
            v = (spF8 == -1) ? 1 : 2;
        }
    }
    if (v == 3) return 1;
    if (v == 1) return 0;

    if (((*(u16 *)(arg0 + 0xA) >> 7) & 3) == 1 &&
        ((((*(u16 *)(arg0 + 8)) >> 5) & 0xF) == 0xA || (((*(u16 *)(arg0 + 8)) >> 5) & 0xF) == 2) &&
        arg0[0xC] != 0) {
        s2 = 0;
    } else {
        s2 = *(s16 *)arg0 + func_0032E980(*(s16 *)(arg0 + 2));
    }
    s7 = *(s16 *)(arg0 + 4) + func_0032E980(*(s16 *)(arg0 + 6));
    a2 = *(u16 *)(arg1 + 4);
    a1 = *(s32 *)(arg1 + 4);
    fp = (a2 >> 5) & 0x7F;
    spD0 = ((u32)a1 >> 12) & 0x7F;
    k = (arg1[0] >> 4) & 3;
    if (k == 3) {
        fp = func_0032E8D0(spD0, a1, a2);
        k = spF8;
        if (k == 0xDEDEDEDE) { spF8 = 0; s0 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spF8 = 0; s0 = 0xD; fl = 1; }
        else if (spF8 == -1) { fl = 0; }
        else { s0 = 0; fl = 1; }
        if (fl) s1 = 0 | func_003324B0(s0, spF8, s2, 0, 0);
        k = spFC;
        if (k == 0xDEDEDEDE) { spFC = 0; s6 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spFC = 0; s6 = 0xD; fl = 1; }
        else if (spFC == -1) { fl = 0; }
        else { s6 = 0; fl = 1; }
        if (fl && fp) s1 |= func_003324B0(s6, spFC, *(s16 *)(arg1 + 8), 0, 0);
        k = spF4;
        if (k == 0xDEDEDEDE) { spF4 = 0; s5 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spF4 = 0; s5 = 0xD; fl = 1; }
        else if (spF4 == -1) { fl = 0; }
        else { s5 = 0; fl = 1; }
        if (fl && fp) s1 |= func_003324B0(s5, spF4, *(s16 *)(arg1 + 0xA), s7, 0);
    } else if (k == 2) {
        fp = func_0032E8D0(fp, a1, a2);
        k = spFC;
        if (k == 0xDEDEDEDE) { spFC = 0; s6 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spFC = 0; s6 = 0xD; fl = 1; }
        else if (spFC == -1) { fl = 0; }
        else { s6 = 0; fl = 1; }
        if (fl && fp) s1 = 0 | func_003324B0(s6, spFC, s2, 0, 0);
        k = spF4;
        if (k == 0xDEDEDEDE) { spF4 = 0; s5 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spF4 = 0; s5 = 0xD; fl = 1; }
        else if (spF4 == -1) { fl = 0; }
        else { s5 = 0; fl = 1; }
        if (fl && fp) s1 |= func_003324B0(s5, spF4, *(s16 *)(arg1 + 8), 0, 0);
        k = spF8;
        if (k == 0xDEDEDEDE) { spF8 = 0; s0 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spF8 = 0; s0 = 0xD; fl = 1; }
        else if (spF8 == -1) { fl = 0; }
        else { s0 = 0; fl = 1; }
        if (fl) s1 |= func_003324B0(s0, spF8, *(s16 *)(arg1 + 0xA), s7, 0);
    } else if (k == 1) {
        k = spFC;
        if (k == 0xDEDEDEDE) { spFC = 0; s6 = 0xE; fl = 1; }
        else if (k == 0xBCBCBCBC) { spFC = 0; s6 = 0xD; fl = 1; }
        else if (spFC == -1) { fl = 0; }
        else { s6 = 0; fl = 1; }
        cc = 0;
        r1 = a1;
        r2 = a2;
        if (fl) {
            cc = func_0032E8D0(fp, a1, a2);
            if (cc) {
                s1 = 0 | func_003324B0(s6, spFC, s2, 0, 0);
                r1 = spFC;
                r2 = s2;
            }
        }
        k = spF4;
        if (k == 0xDEDEDEDE) { spF4 = 0; s5 = 0xE; fl2 = 1; }
        else if (k == 0xBCBCBCBC) { spF4 = 0; s5 = 0xD; fl2 = 1; }
        else if (spF4 == -1) { fl2 = 0; }
        else { s5 = 0; fl2 = 1; }
        k = spF8;
        if (k == 0xDEDEDEDE) { spF8 = 0; s0 = 0xE; fl3 = 1; }
        else if (k == 0xBCBCBCBC) { spF8 = 0; s0 = 0xD; fl3 = 1; }
        else if (spF8 == -1) { fl3 = 0; }
        else { s0 = 0; fl3 = 1; }
        if (fl3) {
            if (fl && cc) s2 = 0;
            if (fl2 == 0) s6 = s7; else s6 = 0;
            if (spFC == -1 && fp != 0x64) {
                if (func_0032E8D0(fp, r1, r2)) {
                    s1 |= func_003324B0(s0, spF8, *(s16 *)(arg1 + 8) + s2, s6, 0);
                    r1 = spF8;
                    r2 = *(s16 *)(arg1 + 8) + s2;
                }
            } else {
                s1 |= func_003324B0(s0, spF8, *(s16 *)(arg1 + 8) + s2, s6, 0);
                r1 = spF8;
                r2 = *(s16 *)(arg1 + 8) + s2;
            }
        }
        if (fl2 && func_0032E8D0(spD0, r1, r2)) {
            s1 |= func_003324B0(s5, spF4, *(s16 *)(arg1 + 0xA), s7, 0);
        }
    }
    if (s1 != 0) {
        D_003E9F20 = arg1[6] >> 4;
        if (D_003E9F2C != 0) D_003E9F24 = (s32)arg0;
    }
    return s1;
}
