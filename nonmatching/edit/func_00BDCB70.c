/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC57E0(s32, s32, s32);
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF3FD0(M2C_UNK, void *);             /* extern */
u16 func_00BF44B0(M2C_UNK, s32);                    /* extern */
extern void *D_003E7DC0;

void func_00BDCB70(s32 arg0) {
    s32 var_v0;
    u16 temp_a1;
    void *temp_v1;

    M2C_FIELD(D_003E7DC0, u16 *, 0xFA) = func_00BF44B0(0, arg0);
    func_00BF3FD0(0, M2C_FIELD(D_003E7DC0, void **, 0x70));
    temp_v1 = D_003E7DC0;
    temp_a1 = M2C_FIELD(temp_v1, u16 *, 0xF8);
    if ((temp_a1 != 0xFFFF) && (temp_a1 != 0x11D) && (temp_a1 != 0x11C)) {
        var_v0 = func_00BC57E0((s32) M2C_FIELD(temp_v1, u16 *, 0xFA), (s32) temp_a1, 0);
    } else {
        var_v0 = 0xFE;
    }
    M2C_FIELD(temp_v1, s8 *, 0x10C) = (s8) var_v0;
    M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x6F) = (u8) M2C_FIELD(D_003E7DC0, u8 *, 0x10C);
    func_00B91590(0x19, 1);
    M2C_FIELD(D_003E7DC0, s32 *, 0x104) = 1;
}
