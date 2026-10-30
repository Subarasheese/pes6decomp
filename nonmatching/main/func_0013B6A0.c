/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_004FD154[];
extern char D_004FD158[];

void func_0013B6A0(f32 fparg0) {
    s32 var_a0;

    if (!(fparg0 <= 0.0f)) {
        if (fparg0 < 128.0f) {
            var_a0 = 4;
            (*(f32 *)D_004FD158) = fparg0;
        } else {
            var_a0 = 2;
            (*(f32 *)D_004FD158) = 128.0f;
        }
        (*(s32 *)D_004FD154) = var_a0;
    } else {
        (*(f32 *)D_004FD158) = 0.0f;
        (*(s32 *)D_004FD154) = 0;
    }
}
