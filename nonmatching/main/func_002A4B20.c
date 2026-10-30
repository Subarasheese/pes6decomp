/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E19B0[];

f32 func_002A4B20(void) {
    f32 temp_f0;
    f32 var_f0;
    f32 var_f2;

    var_f2 = (1375.0f * M2C_FIELD(((void *)D_005E19B0), f32 *, 0xC0)) / 256.0f;
    temp_f0 = (1375.0f * M2C_FIELD(((void *)D_005E19B0), f32 *, 0xC4)) / 192.0f;
    if (var_f2 <= temp_f0) {
        var_f2 = temp_f0;
    }
    var_f0 = 1.1f * (var_f2 / 0.75f);
    if (var_f0 <= 1000.0f) {
        var_f0 = 1000.0f;
    }
    return var_f0;
}
