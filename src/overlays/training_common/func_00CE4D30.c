/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern const s16 D_00CFF3A0[];
s32 func_00CE4D30(s32 id) {
    u32 i = 0;
    const s16 *entry = D_00CFF3A0;
    do {
        if (id == *entry)
            return i;
        ++i;
        ++entry;
    } while (i < 37);
    return i;
}
