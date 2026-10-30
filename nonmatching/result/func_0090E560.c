/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E77AC;

void func_0090E560(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a2;
    void *temp_a3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_a4 = D_003E77AC + 0xCA72;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    switch (arg1) {                                 /* irregular */
    case 1:
    case 2:
    case 3:
        temp_a3 = (arg2 * 2) + temp_a4;
        temp_a1 = M2C_FIELD(temp_a3, u8 *, 0x36);
        if (temp_a1 != 0xFF) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_a1);
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(temp_a3, u8 *, 0x37));
        }
        /* fallthrough */
    case 0:
        temp_a2 = (arg2 * 2) + temp_a4;
        temp_a1_2 = M2C_FIELD(temp_a2, u8 *, 0x24);
        if (temp_a1_2 != 0xFF) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_a1_2);
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(temp_a2, u8 *, 0x25));
        }
        return;
    }
}
