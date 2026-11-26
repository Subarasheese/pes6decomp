/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u16 func_00B05280(u16 player);
s32 func_00B31AB0(const u16 *left, const u16 *right) {
    u16 leftValue;
    u16 rightValue;
    if (!*left) {
        return 1;
    }
    if (!*right) {
        return -1;
    }
    leftValue = func_00B05280(*left);
    rightValue = func_00B05280(*right);
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
