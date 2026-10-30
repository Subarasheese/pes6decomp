/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00270C50();                            /* extern */
M2C_UNK func_00271080();                            /* extern */
M2C_UNK func_002712A0();                            /* extern */
M2C_UNK func_00271480();                            /* extern */
M2C_UNK func_00271720();                            /* extern */
M2C_UNK func_002719F0();                            /* extern */
M2C_UNK func_008502B0();                            /* extern */
M2C_UNK func_0099EDE0();                            /* extern */
M2C_UNK func_009A3020();                            /* extern */
M2C_UNK func_009A3110();                            /* extern */
M2C_UNK func_009A3210();                            /* extern */
s32 func_009B3F60();                                /* extern */
s32 func_009B45F0();                                /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BC8CF0();                                /* extern */
s32 func_00BC8D30();                                /* extern */
extern char D_00591DB5[];
extern char D_00591DC4[];
extern char D_00591DD9[];
extern char D_00591F12[];

void func_00271BA0(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_a0 = func_009E1C90(0) & 0xFF;
    if ((temp_a0 != 3) && (temp_a0 != 2) && (temp_a0 != 1) && (temp_a0 != 0)) {
        goto block_6;
    }
    if ((s32) (*(u8 *)D_00591DD9) <= 0) {
block_6:
        if (func_002DCA30() == 0) {
            (*(s32 *)D_00591DC4) += 1;
        } else {
            func_008502B0();
        }
        if (((*(u8 *)D_00591F12) == 1) && ((*(s8 *)D_00591DB5) == 0) && !(func_009B45F0() & 0xFF) && (func_00BC8D30() == 0)) {
            func_00270C50();
        }
        if (!(func_009B45F0() & 0xFF)) {
            func_009A3210();
            var_s0 = 1;
        }
        func_0099EDE0();
        if (func_009B3F60() == 0) {
            if (func_00BC8CF0() == 0) {
                temp_v1 = func_009E1C90(0) & 0xFF;
                switch (temp_v1) {                  /* irregular */
                case 0:
                    func_002719F0();
                    break;
                case 1:
                    func_00271720();
                    break;
                case 2:
                    func_00271480();
                    break;
                case 3:
                    func_002712A0();
                    break;
                case 4:
                    func_00271080();
                    break;
                }
            }
        }
        if (var_s0 != 0) {
            func_009A3110();
        }
        func_009A3020();
        (*(u8 *)D_00591DD9) += 1;
    }
}
