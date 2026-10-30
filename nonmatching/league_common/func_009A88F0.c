/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A8950(u8, u8, s32, s32, s32, s32);  /* extern */
extern void *D_003EA9A0;

void func_009A88F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;
    void *temp_v1_2;

    if (D_003EA9A0 != NULL) {
        temp_v1 = D_003EA9A0 + (M2C_FIELD(D_003EA9A0, u8 *, 0xC9C) * 0xDC);
        temp_v1_2 = temp_v1 + 0x773;
        if (temp_v1_2 != NULL) {
            func_009A8950(M2C_FIELD(temp_v1, u8 *, 0x773), M2C_FIELD(temp_v1_2, u8 *, 1), arg0, arg1, arg2, arg3);
        }
    }
}
