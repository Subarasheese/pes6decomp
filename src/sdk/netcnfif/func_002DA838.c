/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s8 *func_001C7F58(s8 *, s8 *);
extern s32 func_002D9D28(void);
extern s32 func_002DB028(void *, void *, s32);

extern char D_003B31F8[];
extern char D_005E5F00[];
extern char D_005E5F40[];

s32 func_002DA838(s32 arg0, s32 arg1, s32 arg2) {
    char *entry;
    func_002D9D28();
    entry = D_005E5F40;
    func_001C7F58(((void *)entry) + 0x10, (s8 *)arg0);
    *((s32 *)(((s8 *)((void *)entry)) + 8)) = arg1;
    func_001C7F58(((void *)entry) + 0x110, (s8 *)arg2);
    *((s32 *)(((s8 *)((void *)D_005E5F40)) + 4)) = (s32)(*((s32 *)D_003B31F8));
    return func_002DB028((void *)D_005E5F00, (void *)D_005E5F40, 0xA);
}
