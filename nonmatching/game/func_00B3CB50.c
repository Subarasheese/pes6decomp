/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern s32 func_00BF6270(void);
extern s32 func_00B363E0(s32);
extern void func_00B36400(s32, s32);
extern s32 func_00A09EC0(u8 *);
extern s32 func_00BF7550(u8 *);
extern void func_00ACBF70(u8 *);
extern void func_00AD0A20(void);
extern void func_00B36000(void);
extern s32 func_00C01090(s32);
extern void func_00256250(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00B3D220(u8 *);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BBE2C0(void);
extern void func_009832C0(u8 *, s32);
extern void func_00286A60(s32);
extern char D_00CBCAD1[];
extern char D_00CBCB14[];
extern char D_00591BE4[];
extern char D_005926E6[];
extern char D_0058E5B0[];
extern u8 *D_003E7574;

void func_00B3CB50(void) {
    s32 i;
    s32 a;
    u8 *s0;
    u8 *s2;
    u8 *p;
    u8 *a1;
    s32 t;
    f32 x, y, z;

    if (func_00BF6270() != 0xFF) func_00BF6270();
    if (func_00B363E0(2) != 0) goto L_E8;
    if (*(u8 *)D_00CBCAD1 == 0x43) goto L_E8;
    if (!(*(u32 *)D_00CBCB14 < *(u8 *)D_00591BE4)) goto L_E8;
    p = D_003E7574 + *(u8 *)D_005926E6 * 4;
    x = *(f32 *)(p + 0xB7C);
    if (!(((*(u32 *)&x & 0x7FFFFFFF) < 0x442AC000))) goto L_E8;
    y = *(f32 *)(D_003E7574 + 0x10);
    z = *(f32 *)(p + 0x47C);
    if ((y < 0 ? -y : y) < (z < 0 ? -z : z)) {
        if (*(s32 *)(D_003E7574 + 0x50) >= 0x4001) goto L_54;
    }
    if ((y < 0 ? -y : y) < (z < 0 ? -z : z)) goto L_E8;
    if (!(((*(u32 *)&z & 0x7FFFFFFF) < 0x46586400))) goto L_E8;
L_54:
    for (i = 1; i < 0x17; i++) {
        s32 r;
        a = (i == 0xFF) ? 1 : i % 23;
        s2 = (u8 *)D_0058E5B0 + a * 0x240;
        t = s2[0];
        if (t != func_00BF6270()) {
            f32 w = *(f32 *)(s2 + 0xE8);
            if (((*(u32 *)&w & 0x7FFFFFFF) < 0x446AC000)) {
                if (func_00A09EC0(s2) != 0) func_00B36400(2, 1);
            }
        }
    }
L_E8:
    i = 1;
L_loop:
    a = (i == 0xFF) ? 1 : i % 23;
    s0 = (u8 *)D_0058E5B0 + a * 0x240;
    if (s0[0] == 1 || s0[0] == 12) goto L_68;
L_38:
    if (*(u8 *)(*(u8 **)(s0 + 4) + 0x2C) != 0 && s0[0x16] != 0x33) {
        if (func_00BF7550(s0) != 0) goto L_EE8;
        if (s0[0] == 1 || s0[0] == 12) goto L_F00;
    }
L_84:
    func_00ACBF70(s0);
    i++;
    if (i < 0x17) goto L_loop;
    func_00AD0A20();
    func_00B36000();
    if (func_00C01090(1) == 0) {
        s32 cb;
        if (func_00BF6270() == 0xFF) a = 1;
        else a = func_00BF6270() % 23;
        a1 = (u8 *)D_0058E5B0 + a * 0x240;
        cb = *(s32 *)D_00CBCB14;
        if (cb == 0x60 || cb == 0x42 || cb == 0x24 || cb == 0x12 || cb == 0) {
            func_00256250(a1[0x12], 1);
        }
    }
    t = D_003E7574[0x62];
    if (t != 3) func_00286A60(t);
    return;
L_68:
    if ((func_009B30B0(*(u16 *)(s0 + 0x26), *(u16 *)(s0 + 0x2A)) & 0xFFFF) >= 0x41) goto L_38;
    if ((u32)(*(u8 *)D_00591BE4 >> 1) < *(u32 *)D_00CBCB14) goto L_38;
    if (func_00B3D220(s0) == 0) goto L_84;
    if (func_00BBB8C0(10) >= 5) goto L_84;
    if (s0[0x16] == 0x33) goto L_84;
    s0[0x16] = 0x33;
    *(s16 *)(s0 + 0x18) = 0x68;
    goto L_84;
L_EE8:
    func_009832C0(s0, 0x37);
    s0[0x16] = 0x33;
    *(s16 *)(s0 + 0x18) = 0;
    goto L_84;
L_F00:
    if (func_00B3D220(s0) != 0) {
        s0[0x16] = 0x33;
        *(s16 *)(s0 + 0x18) = 0x68;
        goto L_84;
    }
    if (func_00BBE2C0() == 0) goto L_84;
    func_009832C0(s0, 0x37);
    s0[0x16] = 0x33;
    *(s16 *)(s0 + 0x18) = 0;
    goto L_84;
}
