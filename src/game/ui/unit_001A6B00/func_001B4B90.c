/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001E59F0(s32, u8);

void func_001B4B90(s32 *items, s32 value) {
    u32 i;

    if (items == NULL) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_001E59F0(items[i], value);
    }
}
