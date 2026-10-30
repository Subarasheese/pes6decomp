/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s16 D_003E9C08;
extern u8 D_003E9C0A;
extern u8 D_003E9C0B;

void func_00260BD0(void *arg0) {
    s16 var_v1;

    D_003E9C0A = M2C_FIELD(arg0, u8 *, 0);
    D_003E9C0B = M2C_FIELD(arg0, u8 *, 1);
    var_v1 = ((M2C_FIELD(arg0, u8 *, 1) - M2C_FIELD(arg0, u8 *, 0)) + 1) & 0xFFFF;
    if (var_v1 >= 0x101) {
        var_v1 = 0x100;
    } else if (var_v1 < 0) {
        var_v1 = 0;
    }
    D_003E9C08 = var_v1;
}
