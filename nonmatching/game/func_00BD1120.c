/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0029A0A0(void);
extern u8 D_003EA750;
extern char D_0058E814[];
extern char D_005900D4[];
extern char D_00591BE4[];
extern char D_00591C09[];
extern char D_0059295B[];
extern char D_0059295C[];

s32 func_00BD1120(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;

    if ((*(u8 *)D_00591C09) == 0xA) {
        temp_v1 = (*(u8 *)D_00591BE4) * 8;
        var_v0 = temp_v1 >> 1;
        if ((*(u8 *)D_00591BE4) & 0x10000000) {
            var_v0 = (s32) (temp_v1 + 1) >> 1;
        }
        D_003EA750 = (u8) var_v0;
    }
    if (func_0029A0A0() != 4) {
        if (((*(u8 *)D_0059295B) == 0xFF) && ((*(u8 *)D_0059295C) == 0xFF)) {
            if ((*(u8 *)D_0058E814) == 1) {
                if ((*(u8 *)D_005900D4) != 1) {
                    goto block_10;
                }
            } else {
block_10:
                temp_v1_2 = (*(u8 *)D_00591BE4) * 8;
                var_v0_2 = temp_v1_2 >> 1;
                if ((*(u8 *)D_00591BE4) & 0x10000000) {
                    var_v0_2 = (s32) (temp_v1_2 + 1) >> 1;
                }
                goto block_15;
            }
        } else {
            temp_v1_3 = (*(u8 *)D_00591BE4) * 8;
            var_v0_2 = temp_v1_3 >> 1;
            if ((*(u8 *)D_00591BE4) & 0x10000000) {
                var_v0_2 = (s32) (temp_v1_3 + 1) >> 1;
            }
block_15:
            D_003EA750 = (u8) var_v0_2;
        }
    }
    return D_003EA750 == 0;
}
