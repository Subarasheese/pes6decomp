/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s32 func_00B25780();                                /* extern */
M2C_UNK func_00B257D0(M2C_UNK);                     /* extern */
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_005927B8[];
extern char D_005927C8[];

void func_00B790E0(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_v1;

    if (func_00B25780() != 0) {
        var_a3 = 0;
        if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
            if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
                temp_a0 = (*(u8 *)D_00591BE4) * 3;
                var_v1 = temp_a0 >> 1;
                if (temp_a0 < 0) {
                    var_v1 = (s32) (temp_a0 + 1) >> 1;
                }
                if ((u32) var_v1 < (u32) (*(u32 *)D_00591E14)) {
                    goto block_6;
                }
            } else {
                goto block_6;
            }
        } else {
            temp_v1 = (*(u8 *)D_00591BE4) * 3;
            var_a0 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_a0 = (s32) (temp_v1 + 1) >> 1;
            }
            if ((u32) (var_a0 - ((u32) ((*(u8 *)D_00591BE4) & 0xFF) >> 1)) < (u32) (*(u32 *)D_00591E14)) {
block_6:
                var_a3 = 1;
            }
        }
        if ((var_a3 != 0) && (func_002DCA30() == 0)) {
            func_00B257D0(0);
        }
    } else if (((*(u8 *)D_005927C8) != 0) || ((*(u8 *)D_005927B8) != 0)) {
        (*(u8 *)D_005927C8) = 0;
        (*(u8 *)D_005927B8) = 0;
    }
}
