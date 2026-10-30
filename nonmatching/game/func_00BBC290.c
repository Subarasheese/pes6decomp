/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A9200(float);
extern void func_002A94D0(int);
extern void func_002A91F0(float);
extern void func_002A9470(u8);
extern void Pes6MatchObj28_SetPosition(float, float, float);
extern void func_002A96D0(void);
extern void func_002A7F30(s32, s32, s32, s8, s32);
extern void func_002A8830(s32);
extern void func_002ABF20(s8, s8);
extern void func_00297390(void);
extern void func_002A9210(float);
extern float func_002A95A0(void);
M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_002A8C00(M2C_UNK);                     /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_00591BE4[];
extern char D_005E24B0[];
extern char D_005E24B1[];
extern char D_005E24B2[];
extern char D_005E24B3[];
extern char D_005E24B8[];
extern char D_005E24BC[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_00BBC290(u8 arg0, s32 arg1, s32 arg2, s8 arg3, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f1;
    s32 temp_s0;
    s32 var_a4;
    s32 var_s2;
    u8 var_v1;

    var_s2 = arg2;
    switch ((*(u8 *)D_005E24B0)) {                           /* irregular */
    case 4:
    case 3:
    case 2:
    case 1:
        break;
    case 5:
        func_00297390();
        break;
    }
    func_001C48E8(((void *)D_005E24B0), 0, 0x6C);
    (*(s32 *)D_005E24BC) = 0;
    temp_s0 = var_s2 & 0xFF;
    (*(s8 *)D_005E24B2) = 0x17;
    (*(u8 *)D_005E24B1) = 0x17;
    (*(s8 *)D_005E24B3) = 0x2B;
    if (!(temp_s0 & 2)) {
        var_v1 = 3;
    } else {
        var_v1 = 4;
    }
    (*(u8 *)D_005E24B0) = var_v1;
    (*(u8 *)D_005E24B1) = arg0;
    func_002A96D0();
    func_002A9470(arg0);
    if (temp_s0 == 1) {
        func_002A94D0(0x1C);
        Pes6MatchObj28_SetPosition(0.0f, (f32) (func_00BBB8C0(0x100) - 0x40), 0.0f);
        var_s2 = (var_s2 | 2) & 0xFF;
    }
    temp_f1 = 60.0f * fparg0;
    if (temp_f1 >= 2.1474836e9f) {
        var_a4 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a4 = (s32) temp_f1;
    }
    func_002A7F30(var_s2, 3, arg1, arg3, var_a4 & 0xFFFF);
    if (var_s2 & 0xFF & 1) {
        func_002A8830(1);
        func_002A8C00(0x3F19999A);
        func_002A9210(0.0f);
        func_002A9200(0.2f);
        func_002A91F0(-0.4f);
        func_002ABF20((s8) arg0, 0x1D);
    }
    temp_f0 = func_002A95A0();
    if ((s32) (*(u8 *)D_00591BE4) < 0) {
        var_f1 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
    } else {
        var_f1 = (f32) (*(u8 *)D_00591BE4);
    }
    (*(f32 *)D_005E24B8) = (var_f1 * temp_f0) / 60.0f;
}
