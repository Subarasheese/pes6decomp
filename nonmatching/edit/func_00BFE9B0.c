/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CEB960[];

void func_00BFE9B0(s32 arg0, void *arg1) {
    void *temp_v1;

    if ((arg0 >= 0) && (arg0 < 0xE)) {
        if (arg1 == NULL) {
            return;
        }
        temp_v1 = ((void *)D_00CEB960) + (arg0 * 4);
        M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(temp_v1, u8 *, 0);
        M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(temp_v1, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(temp_v1, u8 *, 2);
        M2C_FIELD(arg1, u8 *, 3) = (u8) M2C_FIELD(temp_v1, u8 *, 3);
    }
}
