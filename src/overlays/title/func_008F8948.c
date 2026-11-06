/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef struct {
    u8 p0[0x160];
    s32 f160;
    u8 p164[0x184 - 0x164];
    s32 f184;
    u8 p188[0x1C0 - 0x188];
    s32 f1C0;
    u8 p1C4b[0x820 - 0x1C4];
    s32 f820;
} Ctx;

extern s32 func_00900500(void *, char *);
extern char D_00901D60[];

s32 func_008F8948(Ctx *c, s32 *a1, s32 *a2, s32 *a3, s32 *a4) {
    s32 r = 1;
    s32 off = c->f820 * 0x140;
    s32 v;

    *(s32 *)((char *)c + off + 0x6DC) = 1;
    c->f1C0 = 1;
    if (c->f160 == 2) {
        a1[5] = 0;
        a1[4] = 0;
        a1[1] = 0;
        a1[0] = 0;
    }
    if (c->f184 == 3) {
        *a2 = 2;
    } else {
        *a2 = 1;
        v = c->f184 == 2;
        a3[1] = v;
        a3[0] = v;
    }
    if (c->f160 == 1) {
        func_00900500(c, D_00901D60);
        r = 0;
    }
    *a4 &= -2;
    return r;
}
