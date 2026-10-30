/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(u16 *, M2C_UNK, M2C_UNK);     /* extern */
u16 func_0021F0C0(s32);                             /* extern */
void *func_0021F170(s32);                           /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00B9F890(M2C_UNK);                     /* extern */
s32 func_00B9F910(M2C_UNK, M2C_UNK, u32);           /* extern */
M2C_UNK func_00BC3F80();                            /* extern */
s32 func_00BFE4A0();                                /* extern */
s32 func_00C02B90(u16 *);                           /* extern */
M2C_UNK func_00C03C90(M2C_UNK);                     /* extern */
extern s32 D_003EB130;
extern char D_00CBF040[];
extern char D_00CEEC50[];
extern char D_00CEEC54[];
extern char D_00CEEC58[];
extern char D_00CEEC5C[];
extern char D_00CEEC60[];

s32 func_00C02710(s32 arg0, M2C_UNK arg1, u32 arg2) {
    u16 *var_a0;
    u32 temp_a0;
    u32 var_a2;

    var_a2 = arg2;
    switch (D_003EB130) {                           /* irregular */
    case 0:
        func_001C48E8(((void *)D_00CEEC50), 0, 0x14);
        (*(u16 *)D_00CEEC50) = func_0021F0C0(arg0);
        var_a2 = 0;
        var_a0 = ((void *)D_00CBF040);
loop_6:
        if ((*(u16 *)D_00CEEC50) != *var_a0) {
            var_a2 += 1;
            var_a0 += 2;
            if (var_a2 >= 0x21U) {
                var_a2 = 0;
            } else {
                goto loop_6;
            }
        }
        (*(u32 *)D_00CEEC54) = var_a2;
        temp_a0 = var_a2 >> 0x1F;
        (*(s32 *)D_00CEEC60) = (var_a2 / 10) + temp_a0;
        (*(s32 *)D_00CEEC58) = (s32) ((var_a2 / 5) + temp_a0) % 2;
        D_003EB130 = 1;
        (*(s32 *)D_00CEEC5C) = (s32) (*(u32 *)D_00CEEC54) % 5;
        /* fallthrough */
    case 1:
        if (func_00B9F910(0x1A, 0, var_a2) != 0) {
            func_00C03C90(1);
            func_00B91490(0x37);
            D_003EB130 = 2;
        case 2:
            if (func_00C02B90(((void *)D_00CEEC50)) != 0) {
                func_00C03C90(0);
                func_00B91440(0x37);
                func_00BC3F80();
                D_003EB130 = 3;
            }
        }
block_19:
    default:
        return 0;
    case 3:
        if (func_00BFE4A0() == 0) {
            M2C_FIELD(func_0021F170(arg0), u16 *, 0x36) = (u16) (*(u16 *)D_00CEEC50);
            func_00B9F890(0x1A);
            D_003EB130 = 0;
            return 1;
        }
        goto block_19;
    }
}
