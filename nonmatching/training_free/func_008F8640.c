/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern int func_00308400(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_003AE9D0;

s32 func_008F8640(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (func_00308400() == 0) {
        func_0026E840(0x84028400);
        func_0026B580(D_003AE9D0 + 0x54C, 8, arg3);
        M2C_FIELD(D_003AE9D0, s8 *, 0x549) = -1;
        return 2;
    }
    return 0;
}
