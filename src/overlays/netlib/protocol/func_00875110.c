/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern s32 func_00873EE0(s32 *, void *, s32);
extern s32 func_00874040(void *, s16 *);
extern s32 func_00874460(s32 *);
extern void func_00874470(void *);

s32 func_00875110(s32 *arg0, s32 arg1, s32 arg2) {
    if (!((arg0 != 0) && (arg1 != 0) && (arg2 != 0))) {
        return -0x18;
    }
    if (*arg0 != 0x9342) {
        return -0x46;
    }
    func_00874470(arg0);
    func_001C48E8((s32 *)arg1, 0, 0x10);
    func_00873EE0(arg0, (void *)arg1, 0xF);
    func_00874040(arg0, (s16 *)arg2);
    func_00874460(arg0);
    return 0;
}
