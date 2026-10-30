/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s32 func_008481D0();                                /* extern */
u32 func_009A01D0(u8);                              /* extern */
M2C_UNK func_00B259F0(s32);                         /* extern */
s32 func_00BBB8C0(u32, u32 *);                      /* extern */
M2C_UNK func_00BC4300();                            /* extern */
extern char D_00591DCD[];
extern char D_00591E0C[];
extern char D_00591E10[];
extern char D_00591F12[];
extern char D_00591F13[];
extern char D_0059237B[];
extern char D_008B14F8[];

void func_00270C50(void) {
    u32 temp_a0;
    u32 var_s0;

    if (func_002DCA30() == 0) {
        goto block_1;
    }
    if (func_008481D0() != 0) {
        if ((u32) (*(u32 *)D_008B14F8) < (u32) (*(u32 *)D_00591E0C)) {
            (*(u32 *)D_00591E0C) -= 1;
        }
        return;
    }
block_1:
    if ((*(u32 *)D_00591E0C) == 0) {
        (*(s16 *)D_00591E10) -= 1;
        if ((*(s16 *)D_00591E10) <= 0) {
            (*(s16 *)D_00591E10) = 0;
            (*(s8 *)D_00591F12) = 0;
        }
    } else {
        var_s0 = func_009A01D0((*(u8 *)D_00591DCD));
        if (var_s0 == 0) {
            var_s0 = 1;
        }
        temp_a0 = (*(u32 *)D_00591E0C) - 1;
        (*(u32 *)D_00591E0C) = temp_a0;
        if (((*(u8 *)D_0059237B) == 0) && (temp_a0 < var_s0) && (func_00BBB8C0(temp_a0, ((void *)D_00591E0C)) == 0)) {
            func_00BC4300();
            if (((s16) (*(s16 *)D_00591E10) / (s32) var_s0) >= 0xA) {
                (*(s16 *)D_00591E10) = var_s0 * 9;
            }
            func_00B259F0((s16) (*(s16 *)D_00591E10) / (s32) var_s0);
            (*(u8 *)D_0059237B) = 1;
        }
        if ((*(u32 *)D_00591E0C) == 0) {
            (*(s8 *)D_00591F13) = 1;
        }
    }
}
