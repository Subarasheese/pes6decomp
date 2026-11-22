/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00814A00(s32, s32, s32);

extern char D_00CBD2A0[];

void func_00814040(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) (*(u16 *)D_00CBD2A0) > 0) {
        (*(u16 *)D_00CBD2A0) = 0;
    }
    func_00814A00(arg0, arg1, arg2);
}
