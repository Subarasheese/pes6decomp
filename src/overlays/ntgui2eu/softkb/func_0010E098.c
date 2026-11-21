/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_0010DFE0(void *, void *);

s32 func_0010E098(void *arg0) {
    s32 value1;
    value1 = func_0010DFE0(arg0, 0);
    if (value1 == 0) {
        return value1;
    } else {
        if (*(s32 *)(value1) != 0x745865) {
            return 0;
        } else {
            if (((s32 *)(value1))[1] == (((s32 *)(value1))[2] + 0x10)) {
                return 0;
            } else {
                return ((value1 + ((s32 *)(value1))[2]) + 0x10);
            }
        }
    }
}
