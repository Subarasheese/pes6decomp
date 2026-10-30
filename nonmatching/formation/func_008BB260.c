/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008EBC50[];

void func_008BB260(void *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = ((void *)D_008EBC50) + (arg1 * 8);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(temp_v1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(temp_v1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(temp_v1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(temp_v1, s16 *, 6);
}
