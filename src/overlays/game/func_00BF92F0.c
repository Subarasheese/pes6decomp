/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_002973F0(M2C_UNK *, M2C_UNK *);            /* extern */
extern char D_00C9EE20[];
extern char D_00CBD7C0[];

s32 func_00BF92F0(void) {
    return func_002973F0(((u8 *)D_00CBD7C0), ((u8 *)D_00C9EE20)) != 0;
}
