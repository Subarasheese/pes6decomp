/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921D30[];
extern char D_00921D34[];

void func_008FCBF0(void *arg0) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x18) == 2;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x1C) != 1;
    }
    (*(s32 *)D_00921D30) = 0;
    (*(s32 *)D_00921D34) = 0;
    if (var_v0 != 0) {
        var_a2 = 1;
        if (!(M2C_FIELD(arg0, f32 *, 8) < -2909.6667f)) {
            var_a2 = 0;
        }
        (*(s32 *)D_00921D30) = var_a2;
        var_a0 = 1;
        if (M2C_FIELD(arg0, f32 *, 8) <= 2909.6667f) {
            var_a0 = 0;
        }
        (*(s32 *)D_00921D34) = var_a0;
    }
}
