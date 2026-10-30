/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F7220(void *arg0, void **arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a0;
    void *temp_a3;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a4_3;
    void *temp_a5;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x14);
        temp_a2 = arg2 & 0xFFFF;
        if (temp_a2 >= (s32) M2C_FIELD(temp_a0, u8 *, 0)) {
            return;
        }
        temp_a4 = *arg1;
        temp_a5 = (temp_a2 * 0x2E) + M2C_FIELD(temp_a0, s32 *, 4);
        M2C_FIELD(temp_a4, u8 *, 0) = (u8) M2C_FIELD(temp_a5, u8 *, 0x1E);
        M2C_FIELD(temp_a4, u8 *, 1) = (u8) M2C_FIELD(temp_a5, u8 *, 0x1F);
        M2C_FIELD(temp_a4, u8 *, 2) = (u8) M2C_FIELD(temp_a5, u8 *, 0x20);
        M2C_FIELD(temp_a4, u8 *, 3) = (u8) M2C_FIELD(temp_a5, u8 *, 0x21);
        temp_a4_2 = *arg1;
        M2C_FIELD(temp_a4_2, u8 *, 4) = (u8) M2C_FIELD(temp_a5, u8 *, 0x22);
        M2C_FIELD(temp_a4_2, u8 *, 5) = (u8) M2C_FIELD(temp_a5, u8 *, 0x23);
        M2C_FIELD(temp_a4_2, u8 *, 6) = (u8) M2C_FIELD(temp_a5, u8 *, 0x24);
        M2C_FIELD(temp_a4_2, u8 *, 7) = (u8) M2C_FIELD(temp_a5, u8 *, 0x25);
        temp_a4_3 = *arg1;
        M2C_FIELD(temp_a4_3, u8 *, 8) = (u8) M2C_FIELD(temp_a5, u8 *, 0x26);
        M2C_FIELD(temp_a4_3, u8 *, 9) = (u8) M2C_FIELD(temp_a5, u8 *, 0x27);
        M2C_FIELD(temp_a4_3, u8 *, 0xA) = (u8) M2C_FIELD(temp_a5, u8 *, 0x28);
        M2C_FIELD(temp_a4_3, u8 *, 0xB) = (u8) M2C_FIELD(temp_a5, u8 *, 0x29);
        temp_a3 = *arg1;
        M2C_FIELD(temp_a3, u8 *, 0xC) = (u8) M2C_FIELD(temp_a5, u8 *, 0x2A);
        M2C_FIELD(temp_a3, u8 *, 0xD) = (u8) M2C_FIELD(temp_a5, u8 *, 0x2B);
        M2C_FIELD(temp_a3, u8 *, 0xE) = (u8) M2C_FIELD(temp_a5, u8 *, 0x2C);
        M2C_FIELD(temp_a3, u8 *, 0xF) = (u8) M2C_FIELD(temp_a5, u8 *, 0x2D);
    }
}
