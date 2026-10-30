/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
extern int func_0029AC20(void);
extern u8 func_00BF6270(void);
M2C_UNK func_009E1CB0(M2C_UNK, u32);                /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
s32 func_00BA91C0();                                /* extern */
M2C_UNK func_00BA92A0(u8);                          /* extern */
extern char D_00591BE4[];
extern char D_00591E14[];

void func_00C20A90(void) {
    s32 var_s0;
    u32 temp_a1;

    func_00AD0A20();
    if ((u32) (*(u32 *)D_00591E14) < (u32) ((*(u8 *)D_00591BE4) * 4)) {
        func_00152130(0, ((0x3C / (s32) (*(u8 *)D_00591BE4)) << 5) & 0xFF);
    }
    if (func_0029AC20() == 0) {
        func_00BA92A0(func_00BF6270());
        if (func_00BA91C0() & 0x1008) {
            (*(u32 *)D_00591E14) = ((*(u8 *)D_00591BE4) * 4) + 1;
        }
        var_s0 = 4;
        if (func_002DCA30() != 0) {
            var_s0 = 3;
        }
        temp_a1 = (*(u32 *)D_00591E14) + 1;
        (*(u32 *)D_00591E14) = temp_a1;
        if ((u32) ((*(u8 *)D_00591BE4) * var_s0) < temp_a1) {
            func_009E1CB0(3, temp_a1);
        }
    }
}
