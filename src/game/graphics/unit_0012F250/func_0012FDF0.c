/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

char *func_0012FDF0(char *arg0, char *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (0.00003051851f * (f32) M2C_FIELD(arg1, s16 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (0.00003051851f * (f32) M2C_FIELD(arg1, s16 *, 2));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (0.00003051851f * (f32) M2C_FIELD(arg1, s16 *, 4));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (0.00003051851f * (f32) M2C_FIELD(arg1, s16 *, 6));
    return arg1 + 8;
}
