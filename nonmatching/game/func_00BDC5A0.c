/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
extern s32 func_00152130(s32, s8);
extern u8 func_00BF6270(void);
M2C_UNK func_009E1CB0(M2C_UNK, u32, u8);            /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00B252E0(u32, u32, u8);                /* extern */
s32 func_00BA91C0();                                /* extern */
M2C_UNK func_00BA92A0(u8);                          /* extern */
extern u8 D_003EA7A9;
extern char D_00591BE4[];
extern char D_00591E14[];

void func_00BDC5A0(void) {
    u32 temp_a0;
    u32 var_a0;
    u32 var_a1;

    func_00AD0A20();
    Pes6Ball_Update();
    if (func_00152130(0, ((0x3C / (s32) (*(u8 *)D_00591BE4)) << 5) & 0xFF) != 0) {
        func_00BA92A0(func_00BF6270());
        if (func_00BA91C0() & 0x1008) {
            if ((u8) D_003EA7A9 < 2U) {
                var_a0 = (*(u8 *)D_00591BE4) * 5;
            } else {
                var_a0 = (*(u8 *)D_00591BE4) * 6;
            }
            (*(u32 *)D_00591E14) = var_a0;
        }
        if ((u8) D_003EA7A9 < 2U) {
            var_a1 = (*(u8 *)D_00591BE4) * 5;
        } else {
            var_a1 = (*(u8 *)D_00591BE4) * 6;
        }
        temp_a0 = (*(u32 *)D_00591E14) + 1;
        (*(u32 *)D_00591E14) = temp_a0;
        if (temp_a0 < var_a1) {
            if ((temp_a0 >= 3U) && (D_003EA7A9 != 0)) {
                func_00B252E0(temp_a0, var_a1, D_003EA7A9);
            }
        } else {
            func_009E1CB0(3, var_a1, D_003EA7A9);
        }
    }
}
