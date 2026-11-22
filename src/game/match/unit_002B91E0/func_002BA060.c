/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_002ABE90(u8 *, s32);

extern char D_005E2FD4[];

s32 func_002BA060(s32 *slots) {
    s32 handle;
    s32 index;
    s32 *slot;

    index = 0;
    slot = slots;
    do {
        handle = slot[1];
        if (handle != 0) {
            func_002ABE90(((void *)D_005E2FD4), handle);
        }
        index += 1;
        ++slot;
    } while (index < 2);
    return 0;
}
