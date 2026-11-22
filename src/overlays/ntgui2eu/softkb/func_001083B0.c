/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_0019DBD0(s32, s32, s32, s32, s32, s32, s32, s32);

extern char D_002BA0C0[];
extern char D_005F7710[];

void func_001083B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 *entry;
    short value;
    s8 *entry2;
    func_0019DBD0((s32)((void *)D_005F7710), arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    entry2 = (s8 *)((void *)D_002BA0C0);
    if ((0 + 1) <= (*((s32 *)(entry2 + 0x5C60)))) {
        entry = (s32 *)(((s8 *)((void *)D_002BA0C0)) + 0x5C60);
        *entry = -1;
        value = 0;
        if ((*((s32(**)(s32, s32))(((s8 *)((void *)D_002BA0C0)) + 0x5C68))) != value) {
            (*((s32(**)(s32, s32))(((s8 *)((void *)D_002BA0C0)) - -0x5C68)))(0, 0);
        }
    }
}
