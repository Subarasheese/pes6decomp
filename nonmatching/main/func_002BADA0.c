/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_005E30E4[];

s32 func_002BADA0(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    (*(f32 *)D_005E30E4) = 0.001f * ((f32) temp_s0 + ((f32) ((M2C_FIELD(arg0, s32 *, 8) - temp_s0) * func_00BBB8C0(0x3E8)) / 1000.0f));
    return 0;
}
