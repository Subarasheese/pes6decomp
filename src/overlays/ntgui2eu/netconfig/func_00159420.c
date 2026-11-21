/* compiler: ee-gcc-2.9 */
#include "types.h"

s32 func_00158BD8(void *, void *, s32);
s32 func_0019EE30(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00159420(s32 arg0) {
    char *entry;
    unsigned long long value;
    entry = D_011E3A00;
    func_00158BD8(((void *)D_011E3A00) + 0x230, ((void *)D_011E3A00) - (value = -0x20), arg0);
    func_0019EE30((void *)D_011E3980, 0x12, 1, (void *)D_011E3A00, 0x1000, (void *)entry, 0x1000, 0,
                  0);
}
