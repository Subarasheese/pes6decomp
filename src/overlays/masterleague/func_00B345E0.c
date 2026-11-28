/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 func_00B02A20(u16 player);
s32 func_00B345E0(const u16 *left, const u16 *right) {
    u8 leftValue;
    u8 rightValue;
    if (!*left) {
        return 1;
    }
    if (!*right) {
        return -1;
    }
    leftValue = func_00B02A20(*left);
    rightValue = func_00B02A20(*right);
    if (leftValue < rightValue) {
        return 1;
    }
    if (leftValue == rightValue) {
        if (*left < *right) {
            return 1;
        }
        return -(*right < *left);
    }
    return -1;
}
