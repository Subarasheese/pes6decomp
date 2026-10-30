/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00829370[];

void func_008036C0(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_v1;

    temp_v1 = ((void *)D_00829370) + ((arg2 & 0xFF) * 8);
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(temp_v1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_v1, f32 *, 4);
}
