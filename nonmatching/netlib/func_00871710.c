/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00873FD0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00871710(s32 *arg0, u8 *arg1) {
    u8 temp_a0;
    u8 temp_v1;
    void *temp_s1;
    void *temp_v0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4784) {
            return -0x46;
        }
        temp_v1 = *arg1;
        if ((s32) temp_v1 >= 0x32) {
            *arg1 = (u8) (temp_v1 % 50U);
        }
        temp_a0 = *arg1;
        *arg1 = temp_a0 + 1;
        temp_v0 = arg1 + (temp_a0 * 0x258);
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        temp_s1 = temp_v0 + 4;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        func_001C48E8(temp_s1 + 0x10, 0, 0x31);
        func_001C48E8(temp_s1 + 0x42, 0, 0x201);
        func_001C48E8(temp_s1 + 0x243, 0, 0x14);
        M2C_FIELD(temp_s1, s32 *, 8) = 0;
        M2C_FIELD(temp_s1, s32 *, 0xC) = 0;
        func_00874470(arg0);
        func_00873F60(arg0, temp_s1);
        func_00873F60(arg0, temp_s1 + 4);
        func_00873EE0(arg0, temp_s1 + 0x10, 0x30);
        func_00873EE0(arg0, temp_s1 + 0x42, 0x200);
        func_00873EE0(arg0, temp_s1 + 0x243, 0x13);
        func_00873FD0(arg0, temp_s1 + 8);
        func_00874120(arg0, temp_s1 + 0x41);
        func_00873F60(arg0, temp_s1 + 0xC);
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
