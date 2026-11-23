/* compiler: mwcc-3.0.1b198-O3 */
#include "types.h"
extern void func_00D1A180(s32, s32, s32);
extern s32 D_00D39AA8[];
s32 func_00D15360(u32 mask) {
    s32 index = 0;
    D_00D39AA8[0] = mask;
    do {
        if (mask & (1u << index)) {
            func_00D1A180(0, index, 4);
        } else {
            func_00D1A180(0, index, 2);
        }
        index++;
    } while (index < 5);
    return 0;
}
