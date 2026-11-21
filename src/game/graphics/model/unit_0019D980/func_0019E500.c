/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void Pes6TextureCache_Invalidate(s32);
extern s32 Pes6Texture_GetClut(s32);
extern s32 func_001454C0(s32);
extern void func_0014E2F0(void *, s32, s32, s32, s32);
extern s32 func_00150110(s32);
extern void func_00188820(s16 *, s16 *, s16 *);

void func_0019E500(void) {
    s16 localValue1;
    s16 localValue2;
    s16 localValue3;
    s32 value;
    s32 value2;

    value2 = func_001454C0(0x2710);
    if (value2 == 0) {
        return;
    }
    func_00188820(&localValue1, &localValue2, &localValue3);
    value = Pes6Texture_GetClut(value2);
    func_0014E2F0((void *)value, func_00150110(value2), (s32)localValue1, (s32)localValue2,
                  (s32)localValue3);
    Pes6TextureCache_Invalidate(0x2710);
}
