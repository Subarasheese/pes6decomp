/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/001415E8.c.
 * See THIRD_PARTY.md for provenance and terms. */
#include "types.h"

typedef struct {
    u8 pad0[0x68];
} Fb_1350A8;
typedef struct {
    Fb_1350A8 *a;
    Fb_1350A8 *b;
    s32 pad;
    Fb_1350A8 *c;
} G_1350A8;
typedef struct {
    u8 pad0[0xC];
    s32 fC;
    u8 pad10[0x18 - 0x10];
    s32 f18;
    u8 pad1C[0x24 - 0x1C];
    s32 (*f24)();
    u8 pad28[0x30 - 0x28];
    s32 (*f30)();
    u8 pad34[0x3C - 0x34];
    s32 f3C;
    u8 pad40[0x48 - 0x40];
    s32 f48;
    u8 pad4C[0x54 - 0x4C];
    s32 f54;
    u8 pad58[0x60 - 0x58];
    s32 f60;
    s32 f64;
    u8 pad68[0x8C - 0x68];
    s32 f8C;
    long f90;
    s32 f98;
    s32 f9C;
    long fA0;
    s32 fA8;
    s32 fAC;
    s32 fB0;
    u8 padB4[0xC0 - 0xB4];
    s32 fC0;
    s32 fC4;
    s32 fC8[14];
    long f100;
    s32 f108;
    s32 f10C;
    s32 f110;
    s32 f114;
    s32 f118[4];
    u8 pad128[0x1C8 - 0x128];
    G_1350A8 g[3];
    Fb_1350A8 fb[9];
    u8 pad5A0[0x85C - 0x5A0];
    s32 f85C;
    s32 f860;
    s32 f864;
    void *f868;
} D_1350A8;
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    u8 padC[0x10 - 0xC];
    long f10;
    long f18;
    long f20;
    long f28;
    long f30;
    long f38;
    D_1350A8 *f40;
} M_1350A8;
extern char D_00902048[];
extern char D_00901FF8[];
extern char D_00902020[];
extern s32 memset(s32, s32, s32);
extern s32 func_00900500();
extern s32 func_00900558(void *, char *, ...);
extern void func_008FC108();
extern u32 func_008FC140();
extern void func_008FAE48();
extern s32 func_008FBC58();
extern s32 func_008FBEE8();
extern s32 func_008FC120();
extern s32 func_008FC1C8();
extern s32 func_008FC1F0();

/* from rac3-decomp's func_001350A8 */
s32 func_008FAF18(M_1350A8 *mp, u8 *work, s32 size) {
    D_1350A8 *d;
    s32 off;
    s32 rest;
    u32 t;
    memset((s32)work, 0, size);
    d = (D_1350A8 *)((((u32)work + 3) >> 2) << 2);
    off = (u8 *)d - work;
    rest = size - off;
    if (rest < 0x19A0) {
        func_00900500(d, D_00902048);
        return 0;
    }
    mp->f40 = d;
    func_008FC108(d->f118, (u8 *)d + 0x19A0, rest - 0x19A0);
    mp->f0 = 0;
    mp->f4 = 0;
    mp->f8 = 0;
    mp->f10 = -1;
    mp->f18 = -1;
    mp->f20 = 0;
    mp->f28 = -1;
    mp->f30 = -1;
    mp->f38 = 0;
    d->fC8[0] = 0;
    d->fC8[1] = 0;
    d->fC8[2] = 0;
    d->fC8[3] = 0;
    d->fC8[4] = 0;
    d->fC8[5] = 0;
    d->fC8[6] = 0;
    d->fC8[7] = 0;
    d->fC8[8] = 0;
    d->fC8[9] = 0;
    d->fC8[10] = 0;
    d->fC8[11] = 0;
    d->fC8[12] = 0;
    d->fC8[13] = 0;
    d->f108 = 0;
    d->fC = 0;
    d->f18 = 0;
    d->f3C = 0;
    d->f48 = 0;
    d->f54 = 0;
    d->f100 = -1;
    d->f24 = func_008FC1C8;
    d->f30 = func_008FC1F0;
    d->f60 = func_008FC140(d, d->f118, 0x800, 8);
    d->f64 = 0;
    d->f10C = 0;
    d->f110 = 0;
    d->f114 = 0;
    d->f8C = 0;
    d->f90 = 0;
    d->f98 = -1;
    d->fA0 = 0;
    d->f9C = 0;
    d->fC0 = 0;
    d->fA8 = -1;
    d->fAC = -1;
    d->fB0 = -1;
    d->f868 = mp;
    d->fC4 = 1;
    func_008FAE48(d);
    func_008FBC58(mp);
    func_008FBEE8(mp);
    d->g[0].a = &d->fb[0];
    d->g[0].b = &d->fb[1];
    d->g[0].c = &d->fb[2];
    d->g[1].a = &d->fb[3];
    d->g[1].b = &d->fb[4];
    d->g[1].c = &d->fb[5];
    d->g[2].a = &d->fb[6];
    d->g[2].b = &d->fb[7];
    d->g[2].c = &d->fb[8];
    func_008FC120(d->f118);
    d->f860 = -1;
    d->f85C = 0;
    d->f864 = 0;
    t = ((u32)d + 0x40) & 0x3F;
    if (t) {
        func_00900558(d, D_00901FF8, t);
        return 0;
    }
    t = ((u32)d + 0x80) & 0x3F;
    if (t) {
        func_00900558(d, D_00902020, t);
        return 0;
    }
    return 1;
}
