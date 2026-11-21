/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Sprite_SetPositionZ(void *, float);
extern void func_001D7C20(void *, s32);
extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern s32 func_001D7E40(s32, s32);
extern s32 func_001D7F90(s32);

void *func_00973CD0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 == 0) {
        return NULL;
    }
    temp_v0 = func_001D7F90(arg0);
    func_001D7E40(temp_v0, arg1);
    func_001D7D80((void *)temp_v0, 0);
    func_001D7C20((void *)temp_v0, 0);
    Pes6Sprite_SetPositionZ((void *)temp_v0, 0.0f);
    func_001D7D60((void *)temp_v0, 1);
    return (void *)temp_v0;
}
