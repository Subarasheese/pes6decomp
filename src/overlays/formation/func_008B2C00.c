/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void *func_001F4380(s32);

extern char D_008EC780[];

s32 *func_008B2C00(s32 arg0) {
    s8 *entry;

    entry = func_001F4380(arg0);
    if (entry != 0) {
        return (s32 *)(entry + 8);
    }
    return ((void *)D_008EC780);
}
