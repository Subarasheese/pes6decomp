/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern void func_001190E8(s32, s32);
extern void func_001191E0(s32, s32, s32, s32);
extern s32 func_00119370(s32, s32, s32);

extern char D_002B9F00[];
extern char D_002BA0C0[];

void func_00107EA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *entry;
    entry = (void *)D_002BA0C0;
    func_001191E0((s32)(*((u8 *)(((s8 *)entry) + 0x420))), (s32)(*((u8 *)(((s8 *)entry) + 0x421))),
                  (s32)(*((u8 *)(((s8 *)((void *)D_002BA0C0)) + 0x422))),
                  (s32)(*((u8 *)(((s8 *)entry) + 0x423))));
    func_001190E8(arg2, arg3 - (*((s32 *)D_002B9F00)));
    func_00119370(arg1, arg0, 0xC0000);
}
