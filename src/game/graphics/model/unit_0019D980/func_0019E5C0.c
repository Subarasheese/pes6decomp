/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 Pes6Texture_GetClut(s32);
extern s32 func_001454C0(s32);
extern s32 func_00153FE0(s32, s32);
extern void func_001887A0(u8 *, u8 *);
extern void *func_001C4730(void *, void *, u32);

extern char D_0051FFB2[];
extern char D_005202E8[];
extern char D_005202EC[];
extern char D_005202F0[];
extern char D_005202F1[];

void func_0019E5C0(void) {
    u8 localValue1;
    u8 localValue2;
    s32 value;
    s32 value2;

    (*(s32 *)D_005202E8) = 0;
    (*(s32 *)D_005202EC) = 0;
    (*(u8 *)D_005202F0) = 0;
    (*(s8 *)D_005202F1) = 0;
    value = func_001454C0(0x2724);
    if ((0 == value)) {
        return;
    }
    (*(s32 *)D_005202E8) = Pes6Texture_GetClut(value);
    value2 = func_00153FE0((s32)(*(s16 *)D_0051FFB2), 0x40);
    (*(s32 *)D_005202EC) = value2;
    func_001C4730((void *)value2, (void *)(*(s32 *)D_005202E8), 0x40U);
    func_001887A0(&localValue1, &localValue2);
    (*(u8 *)D_005202F0) = localValue2;
    (*(s8 *)D_005202F1) = localValue1 - localValue2;
}
