/* compiler: ee-gcc-2.9 */
#include "types.h"

extern char D_011FC830[];

s16 func_0018ED90(s32 arg0) {
    char *entry;
    char value;
    if (arg0 == 0xFFFF) {
        value = -1;
        return value;
    }
    entry = D_011FC830;
    return *((s16 *)(((s8 *)((arg0 * 0x28) + ((void *)entry))) + 0x22));
}
