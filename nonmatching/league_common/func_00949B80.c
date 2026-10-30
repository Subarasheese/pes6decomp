/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
void func_00949B80(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;
    void *temp_a0_2;
    void *temp_v0;

    temp_v0 = func_0022F190();
    if (temp_v0 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 < 4) {
            temp_v1 = arg1 & 0xFFFF;
            if (temp_v1 < 0x190) {
                temp_a0_2 = (temp_v1 * 8) + ((temp_a0 * 0xC82) + temp_v0);
                M2C_FIELD(temp_a0_2, s16 *, 0x4780) = 0;
                M2C_FIELD(temp_a0_2, s16 *, 0x477E) = 0;
                M2C_FIELD(temp_a0_2, s16 *, 0x477A) = 0;
                M2C_FIELD(temp_a0_2, s8 *, 0x477C) = 0xFF;
            }
        }
    }
}
