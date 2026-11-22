/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/multiprecision.h"
s32 func_00BF1880(const HttpsMagnitude *left, const HttpsMagnitude *right, s32 *sign,
                  HttpsMagnitude *result) {
    if (func_00BED6C8(left, right) >= 0) {
        *sign = 1;
        return func_00BED9D0(left, right, result);
    }
    *sign = -1;
    return func_00BED9D0(right, left, result);
}
