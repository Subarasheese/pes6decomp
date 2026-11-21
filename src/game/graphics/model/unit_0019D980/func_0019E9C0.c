/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 Pes6Texture_GetClut(s32);
extern s32 func_001454C0(s32);
extern s32 func_00150110(s32);
extern s32 func_00150150(s32);
extern s32 func_00153FE0(s32, s32);
extern void *func_001C4730(void *, void *, u32);

extern s16 D_0051FFB2[];
extern s32 D_005202F8[];
extern s32 D_005202FC[];
extern s16 D_00520300[];
extern u16 D_00520302[];

void func_0019E9C0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    D_005202F8[0] = 0;
    D_005202FC[0] = 0;
    D_00520300[0] = 0;
    D_00520302[0] = 0;
    temp_v0 = func_001454C0(0x2752);
    if (temp_v0 == 0) {
        return;
    }
    D_005202F8[0] = Pes6Texture_GetClut(temp_v0);
    D_00520300[0] = func_00150110(temp_v0);
    D_00520302[0] = func_00150150(temp_v0);
    temp_v0_2 = func_00153FE0((s32)D_0051FFB2[0], (s32)D_00520302[0]);
    D_005202FC[0] = temp_v0_2;
    func_001C4730((void *)temp_v0_2, (void *)D_005202F8[0], (u32)D_00520302[0]);
}
