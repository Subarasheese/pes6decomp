/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002E8CF0();                                /* extern */
M2C_UNK func_002E92B0(M2C_UNK);                     /* extern */
extern s32 D_003E9DF0;
extern s32 D_003E9DF4;
extern s32 D_003E9DF8;
extern s32 D_003E9E18;
extern s8 D_003E9E20;

s32 func_002E8AD0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 1;
    var_s0 = 0;
    if (D_003E9E18 != 1) {
        if (D_003E9DF0 == 0) {
            D_003E9DF8 = 0x33;
            D_003E9E20 = 0;
            func_002E92B0(0);
            D_003E9DF4 = 0;
        }
        D_003E9E18 += 1;
    } else {
        if (D_003E9DF8 == 0) {
            func_002E92B0(0);
        } else {
            var_s1 = func_002E8CF0();
        }
        if (var_s1 != 0) {
            D_003E9E18 = 0;
            var_s0 = 1;
        }
    }
    return var_s0;
}
