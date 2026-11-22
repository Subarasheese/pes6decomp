/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_002D9D28(void);
s32 func_002DB028(s32 *, s32 *, s32);
extern char D_005E5F00[];
extern char D_005E5F40[];

void func_002DA8F8(s32 arg0) {
    s32 *entry;
    int value;
    int *entry2;
    int *entry3;
    func_002D9D28();
    entry2 = &value;
    value = arg0;
    entry3 = entry2;
    *(entry = (s32 *)D_005E5F40) = *entry3;
    ;
    func_002DB028((void *)D_005E5F00, (void *)D_005E5F40, 0x65);
}
