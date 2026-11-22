/* compiler: ee-gcc-2.9 */
#include "types.h"

s32 func_00158BD8(void *, void *, s32);
s32 func_0019EE30(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00158D20(s32 arg0, s32 arg1) {
    s8 *entry;
    entry = (s8 *)((void *)D_011E3A00);
    *((s32 *)(entry + 0x10)) = arg0;
    func_00158BD8(((void *)D_011E3A00) + 0x230, ((void *)D_011E3A00) + 0x20, arg1);
    func_0019EE30((void *)D_011E3980, 0, 1, (void *)D_011E3A00, 0x1000, (void *)D_011E3A00, 0x1000,
                  0, 0);
}
