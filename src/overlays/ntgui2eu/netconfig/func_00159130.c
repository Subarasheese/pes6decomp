/* compiler: ee-gcc-2.9 */
#include "types.h"

s32 func_00158BD8(void *, void *, s32);
s32 func_0019EE30(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00159130(s32 arg0) {
    s32 value;
    int value2;
    value = arg0;
    value2 = 0x230;
    func_00158BD8(((void *)D_011E3A00) + value2, ((void *)D_011E3A00) + 0x20, value);
    func_0019EE30((void *)D_011E3980, 0xA, 1, (void *)D_011E3A00, 0x1000, (void *)D_011E3A00,
                  0x1000, 0, 0);
}
