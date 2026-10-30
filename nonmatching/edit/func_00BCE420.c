/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BC55C0(s32);                         /* extern */
s8 func_00BC59F0(s32, s32, M2C_UNK);                /* extern */
s32 func_00BC6100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BC7390(M2C_UNK, s32);                /* extern */
M2C_UNK func_00BCE1E0();                            /* extern */
M2C_UNK func_00BF4400(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF5950(M2C_UNK);                     /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B440(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CE5370[];
extern char D_00CE53C7[];
extern char D_00CE53C8[];

void func_00BCE420(void) {
    M2C_UNK *var_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_a1;
    s32 var_s2;
    s8 *temp_a0;
    s8 temp_v0;

    func_001C48E8(((void *)D_00CE5370), 0, 0x60);
    func_00BC55C0(func_00C1B400(0));
    func_00BF5950(0);
    func_00BF4400(0, 0xD);
    temp_s3 = func_00C1B460(0) & 0xFFFF;
    func_00BF45D0(0, temp_s3, 0, 1, 0);
    (*(s8 *)D_00CE53C8) = func_00BC59F0(temp_s3, 0, 0);
    func_00BCE1E0();
    func_001C48E8(((void *)D_00CE5370), 0xFF, 0x20);
    temp_s0 = func_00BC6100(temp_s3, 0) & 0xFF;
    var_s2 = 0;
    if (temp_s0 > 0) {
        do {
            temp_v0 = func_00BC59F0(temp_s3, var_s2, 0);
            temp_a0 = ((void *)D_00CE5370) + (var_s2 & 0xFF);
            var_s2 = (var_s2 + 1) & 0xFF;
            *temp_a0 = temp_v0;
        } while (var_s2 < temp_s0);
    }
    var_a1 = 0;
    var_a0 = ((void *)D_00CE5370);
    do {
        var_a1 += 8;
        M2C_FIELD(var_a0, u8 *, 0x20) = (u8) M2C_FIELD(var_a0, u8 *, 0);
        M2C_FIELD(var_a0, u8 *, 0x21) = (u8) M2C_FIELD(var_a0, u8 *, 1);
        M2C_FIELD(var_a0, u8 *, 0x22) = (u8) M2C_FIELD(var_a0, u8 *, 2);
        M2C_FIELD(var_a0, u8 *, 0x23) = (u8) M2C_FIELD(var_a0, u8 *, 3);
        M2C_FIELD(var_a0, u8 *, 0x24) = (u8) M2C_FIELD(var_a0, u8 *, 4);
        M2C_FIELD(var_a0, u8 *, 0x25) = (u8) M2C_FIELD(var_a0, u8 *, 5);
        M2C_FIELD(var_a0, u8 *, 0x26) = (u8) M2C_FIELD(var_a0, u8 *, 6);
        M2C_FIELD(var_a0, u8 *, 0x27) = (u8) M2C_FIELD(var_a0, u8 *, 7);
        var_a0 += 8;
    } while (var_a1 < 0x20);
    func_00BC7390(0xF, var_a1);
    func_00C1B440(1, 0xFFFF);
    (*(s8 *)D_00CE53C7) = 0xFF;
}
