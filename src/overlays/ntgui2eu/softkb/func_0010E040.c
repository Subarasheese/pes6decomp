/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_0010DFE0(void *, void *);

s32 *func_0010E040(void *arg0, s8 *arg1) {
    s32 value1;
    value1 = func_0010DFE0(arg0, arg1);
    if (value1 == 0) {
        return value1;
    } else {
        if (*(s32 *)(value1) != 0x745865) {
            return value1;
        } else {
            if (arg1 != 0) {
                *(s32 *)(arg1) = ((s32 *)(value1))[2];
            }
            return ((value1) + 0x10);
        }
    }
}
