/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/multiprecision.h"
s32 func_00BF1BF8(const HttpsMagnitude *left, s32 leftSign, const HttpsMagnitude *right,
                  s32 rightSign, HttpsMagnitude *result, s32 *resultSign) {
    if (func_00BED6C8(left, right) >= 0) {
        *resultSign = leftSign;
        if (leftSign == rightSign)
            return func_00BED9D0(left, right, result);
        return func_00BED758(left, right, result);
    }
    *resultSign = -rightSign;
    if (leftSign == rightSign)
        return func_00BED9D0(right, left, result);
    return func_00BED758(left, right, result);
}
