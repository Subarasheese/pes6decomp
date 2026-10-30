/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(u16);                             /* extern */
extern u16 *D_0051FF7C;
extern char D_00520338[];
extern char D_0052033A[];
extern char D_00520340[];
extern char D_00520342[];

void func_0019FBE0(void) {
    s16 var_a2;
    u16 *temp_s0;

    temp_s0 = D_0051FF7C;
    var_a2 = func_00151EA0(*temp_s0) & 0xFFFF;
    switch ((*(s8 *)D_00520342)) {                           /* irregular */
    case 2:
        (*(s16 *)D_00520340) = 2;
        if (var_a2 & 1) {
            var_a2 -= 1;
        }
block_6:
        (*(s16 *)D_00520338) = var_a2;
        (*(s16 *)D_0052033A) = var_a2;
        return;
    case 0:
        (*(s16 *)D_00520338) = 0;
        (*(s16 *)D_0052033A) = 0;
        (*(s16 *)D_00520340) = (s16) *temp_s0;
        return;
    default:
        (*(s16 *)D_00520340) = 1;
        goto block_6;
    }
}
