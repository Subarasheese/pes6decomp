/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
s32 func_00BF5F60(const u8 *left, const u8 *right, u32 size) {
    while (size--) {
        if (*left != *right)
            return (u32)*left - (u32)*right;
        ++left;
        ++right;
    }
    return 0;
}
