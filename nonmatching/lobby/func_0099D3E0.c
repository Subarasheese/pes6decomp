/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
extern void Pes6Sprite_SetPositionZ(void *, float);
void func_0099D3E0(void *arg0, void *arg1, u16 arg2) {
    f32 temp_f0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_f0 = func_001D79A0(arg1, arg2);
        if (arg0 != NULL) {
            Pes6Sprite_SetPositionZ(arg0, temp_f0);
        }
    }
}
