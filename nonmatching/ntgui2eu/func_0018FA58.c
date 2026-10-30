/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00192C88(void *);
extern char D_011FC830[];

void func_0018FA58(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0 * 0x28;
    if (M2C_FIELD((temp_a1 + ((void *)D_011FC830)), s16 *, 0x26) == 1) {
        func_00192C88(M2C_FIELD((((void *)D_011FC830) + temp_a1), void **, 4));
    }
}
