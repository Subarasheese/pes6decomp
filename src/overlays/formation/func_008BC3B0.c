/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008B9660(void);

s32 func_008BC3B0(void) {
    s64 value;

    value = (s16)(func_008B9660());
    if ((value != 5) && (value != 4)) {
        return 0;
    }
    return 1;
}
