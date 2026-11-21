/* compiler: ee-gcc-2.9 */
#include "types.h"

extern char D_011FC830[];

s16 func_0018ED60(s32 arg0) {
    char *entry;
    s16 value;
    if (arg0 == 0xFFFF) {
        return -1;
    }
    entry = D_011FC830;
    value = *((s16 *)(((s8 *)(((void *)entry) + (arg0 * 0x28))) + 0x20));
    return value;
}
