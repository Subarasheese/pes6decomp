/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef struct {
    u8 p0[4];
    s32 f4;
    s32 f8;
    u8 pC[0xC0 - 0xC];
    s32 fC0;
    u8 pC4[0x128 - 0xC4];
    s32 f128;
    u8 p12C[4];
    s32 f130;
    u8 p134[0x184 - 0x134];
    s32 f184;
    u8 p188[0x1CC - 0x188];
    s32 f1CC;
    u8 p1D0[0x1DC - 0x1D0];
    s32 f1DC;
    u8 p1E0[0x1EC - 0x1E0];
    s32 f1EC;
} Ctx;

typedef struct {
    u8 p0[8];
    s32 f8;
    u8 pC[0x40 - 0xC];
    Ctx *c;
} Obj;

extern void func_008FC4A8(Ctx *, s32, s32);
extern void func_008FC768(Ctx *, s32, s32, s32);
extern void func_00900500(Ctx *, char *, s32);
extern char D_009021B8[];

s32 func_008FCB88(Obj *o) {
    Ctx *c = o->c;
    s32 r = 0;
    s32 n;

    if (c->f4 != 0) {
        if (c->f8 != 0) {
            n = c->f128;
            if (c->f130 != 0) {
                func_00900500(c, D_009021B8, n);
            } else if (c->f184 == 3) {
                func_008FC4A8(c, c->f1CC, n - 1);
            } else {
                func_008FC768(c, c->f1DC, c->f1EC, n - 1);
            }
            r = 1;
            c->f130 = 0;
            o->f8 = c->f128 - c->fC0;
            c->f4 = 0;
        }
    }
    return r;
}
