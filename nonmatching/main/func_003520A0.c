/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0021FC40(u32);
extern void func_00295610(void);
extern s32 func_002371A0(s32);
extern u8 func_00351EB0(s32);
s32 func_00151EA0(M2C_UNK);                         /* extern */
s32 func_0022F470();                                /* extern */
M2C_UNK func_00295650(s8 *, s8 *);                  /* extern */
extern char D_00591BB0[];
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB8[];
extern char D_00591C09[];

void func_003520A0(s8 arg0, s8 arg1, s8 arg2) {
    s8 sp68;
    s8 sp69;
    s8 sp6A;
    s8 sp6B;
    s8 sp6C;
    s8 sp6D;
    s8 sp6E;
    s8 sp6F;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_s1;
    s8 var_s2;
    s8 var_v1;
    u8 temp_s1;

    var_s2 = arg2;
    if ((*(u8 *)D_00591BB6) == 0) {
        var_v0 = 0xD;
    } else {
        var_v0 = 0x15;
    }
    temp_s1 = (*(u8 *)D_00591C09);
    sp6F = 0;
    if (!(var_s2 & 0xFF)) {
        do {
            var_s2 = func_00151EA0(0xFF) & 0xFF;
        } while (var_s2 == 0);
    }
    temp_v1 = temp_s1 & 0xFF;
    if ((temp_v1 == 0) || (temp_v1 == 7)) {
        var_s1 = func_00351EB0((s32) (*(u8 *)D_00591BB4)) & 0xFF;
        if ((*(u8 *)D_00591BB8) != 0) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 8;
        }
        var_v1 = var_v0_2 & 0xFF;
        sp6F = 0;
    } else {
        var_s1 = func_0021FC40(func_002371A0((s32) (*(u16 *)D_00591BB0))) & 0xFF;
        var_v1 = func_0022F470() & 0xFF;
        sp6F = 1;
    }
    sp6B = var_v1;
    sp68 = var_s1;
    sp69 = arg0;
    sp6A = arg1;
    sp6C = var_v0 & 0xFF;
    sp6D = var_s2;
    sp6E = 0;
    func_00295650(&sp68, &sp6F);
    func_00295610();
}
