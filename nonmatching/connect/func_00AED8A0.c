/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00AFFA18[];
extern char D_00AFFA1C[];

void func_00AED8A0(s32 arg0, void *arg1) {
    if ((arg0 != 0) && (arg1 != NULL)) {
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, s32 *, 4) = 0;
        M2C_FIELD(arg1, f32 *, 8) = (f32) (*(f32 *)D_00AFFA18);
        M2C_FIELD(arg1, f32 *, 0xC) = (f32) (*(f32 *)D_00AFFA1C);
    }
}
