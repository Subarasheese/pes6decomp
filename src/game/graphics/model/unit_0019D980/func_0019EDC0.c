/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 Pes6Texture_GetClut(s32);
extern s32 func_001454C0(s32);
extern s32 func_00150110(s32);
extern s32 func_00150150(s32);
extern s32 func_00153FE0(s32, s32);
extern void *func_001C4730(void *, void *, u32);

extern s16 D_0051FFB2[];
extern s32 D_00520310[];
extern s32 D_00520314[];
extern s32 D_00520318[];
extern s16 D_0052031C[];
extern u16 D_0052031E[];

void func_0019EDC0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    D_00520310[0] = 0;
    D_00520314[0] = 0;
    D_00520318[0] = 0;
    D_0052031C[0] = 0;
    D_0052031E[0] = 0;
    temp_v0 = func_001454C0(0x2751);
    if (temp_v0 == 0) {
        return;
    }
    D_00520310[0] = temp_v0;
    D_00520314[0] = Pes6Texture_GetClut(temp_v0);
    D_0052031C[0] = func_00150110(temp_v0);
    D_0052031E[0] = func_00150150(temp_v0);
    temp_v0_2 = func_00153FE0((s32)D_0051FFB2[0], (s32)D_0052031E[0]);
    D_00520318[0] = temp_v0_2;
    func_001C4730((void *)temp_v0_2, (void *)D_00520314[0], (u32)D_0052031E[0]);
}
