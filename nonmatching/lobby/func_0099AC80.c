/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int atoi(void *);
s32 func_0099AD10(s32, s32, s32, s32, s32);         /* extern */

s32 func_0099AC80(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    s32 temp_s0;

    if (arg3 != NULL) {
        if (arg4 != NULL) {
            temp_s0 = atoi(arg3);
            return func_0099AD10(arg0, arg1, arg2, temp_s0, atoi(arg4));
        }
        goto block_4;
    }
block_4:
    return 0;
}
