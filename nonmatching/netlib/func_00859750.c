/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
extern char D_008B21C0[];
extern char D_008B22C0[];

s32 func_00859750(void *arg0) {
    void *temp_a0;

    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), M2C_FIELD(arg0, s16 *, 2))) == 1) {
        temp_a0 = ((void *)D_008B22C0) + ((M2C_FIELD(arg0, s16 *, 2) - 1) * 8);
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) M2C_FIELD(arg0, s8 *, 4);
        M2C_FIELD(temp_a0, s8 *, 8) = (s8) M2C_FIELD(arg0, s8 *, 5);
        M2C_FIELD(temp_a0, s8 *, 9) = (s8) M2C_FIELD(arg0, s8 *, 6);
        return 0;
    }
    return 0;
}
