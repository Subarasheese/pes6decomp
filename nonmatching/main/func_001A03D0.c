/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
M2C_UNK func_001A0500(s32, s32, s32);
M2C_UNK func_001A0B90(s32, s32, s32);
M2C_UNK func_001A0FA0(s32, s32);
void *func_001A10A0(s32, u8, u8, s32);
extern u8 D_003978E8[];
void *func_001A03D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp5C[4];
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    s32 var_v0;
    sp5C[0] = D_003978E8[0];
    sp5C[1] = D_003978E8[1];
    sp5C[2] = D_003978E8[2];
    sp5C[3] = D_003978E8[3];
    temp_v0 = func_001A10A0(arg0, sp5C[1], sp5C[0], arg3);
    if (temp_v0 == NULL) {
        return NULL;
    }
    temp_s1 = temp_v0 + 4;
    temp_s0 = temp_v0 + 0x18;
    if (temp_s1 != NULL) {
        if (arg0 == 1) {
            var_v0 = 0x11;
        } else {
            var_v0 = 0xEB;
        }
        M2C_FIELD(temp_s1, s32 *, 0) = var_v0;
        M2C_FIELD(temp_s1, u8 *, 4) = sp5C[0];
        M2C_FIELD(temp_s1, u8 *, 5) = sp5C[1];
        M2C_FIELD(temp_s1, u8 *, 6) = sp5C[2];
        M2C_FIELD(temp_s1, u8 *, 7) = sp5C[3];
    }
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s16 *, 0) = 0x24;
        M2C_FIELD(temp_s0, s16 *, 2) = 7;
        M2C_FIELD(temp_s0, u8 *, 4) = sp5C[0];
        M2C_FIELD(temp_s0, u8 *, 5) = sp5C[1];
        M2C_FIELD(temp_s0, u8 *, 6) = sp5C[2];
        M2C_FIELD(temp_s0, u8 *, 7) = sp5C[3];
    }
    func_001A0FA0(M2C_FIELD(temp_s1, s32 *, 8), arg0);
    func_001A0B90(M2C_FIELD(temp_s0, s32 *, 8), arg0, *(s32 *)sp5C);
    func_001A0500(M2C_FIELD(temp_s1, s32 *, 0x10), M2C_FIELD(temp_s1, s32 *, 0xC), arg0);
    return temp_v0;
}
