/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_0018C4A8(void);
extern s32 func_001901F0(s32, u32);
extern s32 func_00190628(s32);

extern char D_005C5CC0[];
extern char D_005C5CC4[];
extern char D_005C5D40[];

void func_0018C760(s32 arg0, s32 arg1) {
    (*(s32 *)D_005C5D40) = arg0;
    (*(s32 *)D_005C5CC0) = arg1;
    func_001901F0(arg0, (u32) arg1);
    func_00190628((*(s32 *)D_005C5CC4));
    func_0018C4A8();
}
