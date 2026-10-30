/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_00832D50(void);
s64 func_00832D60();                                /* extern */
s32 func_00880560();                                /* extern */
s32 func_008808D0();                                /* extern */
extern s32 D_003EA38C;
extern s32 D_003EA390;
extern char D_00591BE4[];
extern char D_008B2458[];

s32 func_008809E0(void) {
    s32 var_v1;

    switch (D_003EA38C) {                           /* irregular */
    case 0:
        if ((((s64) (func_00832D60() << 0x38) >> 0x38) == 1) && (((s64) (func_00832D50() << 0x38) >> 0x38) == 0)) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 1) {
            if (func_008808D0() == 0) {
                D_003EA390 = 0;
            } else if ((s32) ((u8) (*(u8 *)D_00591BE4) >> 1) >= D_003EA390) {
                D_003EA390 += 1;
            } else {
                D_003EA390 = 0;
                D_003EA38C += 1;
            }
        }
        if ((*(u8 *)D_008B2458) != 0) {
            D_003EA38C = 0;
            D_003EA390 = 0;
            return 1;
        }
block_19:
        return 0;
    case 1:
        if (func_00880560() == 1) {
        default:
            D_003EA38C = 0;
        }
        goto block_19;
    }
}
