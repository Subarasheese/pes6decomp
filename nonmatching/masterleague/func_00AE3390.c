/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00AE2B40();                            /* extern */
M2C_UNK func_00AE31D0();                            /* extern */
extern void *D_003EADA4;

void func_00AE3390(void) {
    void *temp_s0;
    void *temp_v0;

    if (D_003EADA4 == NULL) {
        if (D_003EADA4 == NULL) {
            temp_v0 = func_0096DB90(0x5A00);
            D_003EADA4 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x5A00);
        }
        temp_s0 = D_003EADA4;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0x59F4) = 0;
            func_00AE31D0();
            func_00AE2B40();
            M2C_FIELD(temp_s0, s32 *, 0x3DBC) = (s32) M2C_FIELD(temp_s0, u8 *, 0x3DB4);
            M2C_FIELD(temp_s0, s32 *, 0x3DC0) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x59F0) = 0;
        }
        func_001D5F80(0x10319);
        func_001D5F80(0x1031B);
        func_001D5F80(0x10318);
        func_001D5F80(0x10316);
        func_001D5F80(0x1031A);
        func_001D5F80(0x10317);
    }
}
