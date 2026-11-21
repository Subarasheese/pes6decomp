/* compiler: ee-gcc-2.9 */
#include "types.h"

s32 func_00158BD8(void *, void *, s32);
s32 func_0019EE30(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
extern char D_011E3980[];
extern char D_011E3A00[];

void func_001592F0(s32 arg0) {
    int value;
    void *entry;
    s32 *entry2;
    char *entry3;
    void *entry4;
    entry2 = &arg0;
    entry3 = D_011E3A00;
    value = 0x20;
    entry = ((void *)entry3) - -0x230;
    entry4 = ((void *)D_011E3A00) + value;
    func_00158BD8(entry, entry4, *entry2);
    func_0019EE30((void *)D_011E3980, 0xF, 1, (void *)entry3, 0x1000, (void *)entry3, 0x1000, 0, 0);
}
