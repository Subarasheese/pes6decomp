/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017F880(void);
extern void func_00147ED0(s32);
M2C_UNK func_001AC380(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003E7480;
extern u8 D_003E98E4;
extern char D_00522350[];
extern char D_005223B0[];

void func_001B0D20(void) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    M2C_UNK *var_s2;
    M2C_UNK *var_v1;
    s32 *var_s0;
    s32 var_a0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    void *temp_v0;

    var_s1 = 0;
    sp50 = 0xFB9;
    var_s0 = &sp50;
    sp54 = 0xFBA;
    sp58 = 0xFBB;
    sp5C = 0xFBC;
    sp60 = 0xFBE;
    sp64 = 0xFBF;
    do {
        func_00147ED0(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 6);
    func_001AC380(6, &sp50);
    var_a0 = 0;
    var_v1 = ((void *)D_00522350);
    do {
        M2C_FIELD(var_v1, s32 *, 0) = 0;
        var_a0 += 7;
        M2C_FIELD(var_v1, s32 *, 4) = 0;
        M2C_FIELD(var_v1, s32 *, 8) = 0;
        M2C_FIELD(var_v1, s32 *, 0xC) = 0;
        M2C_FIELD(var_v1, s32 *, 0x10) = 0;
        M2C_FIELD(var_v1, s32 *, 0x14) = 0;
        M2C_FIELD(var_v1, s32 *, 0x18) = 0;
        var_v1 += 0x1C;
    } while (var_a0 < 0x10);
    temp_v0 = ((void *)D_00522350) + (var_a0 * 4);
    var_s0_2 = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    var_s2 = ((void *)D_005223B0);
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    do {
        if (M2C_FIELD(var_s2, u8 *, 0x64) == 1) {
            var_s3 = 0;
            if ((s32) M2C_FIELD(var_s2, u8 *, 0x67) <= 0) {

            } else {
                do {
                    func_0017F880();
                    var_s3 += 1;
                } while (var_s3 < (s32) M2C_FIELD(var_s2, u8 *, 0x67));
            }
            M2C_FIELD(var_s2, s8 *, 0x10) = 4;
            M2C_FIELD(var_s2, u8 *, 0x64) = 0U;
        }
        M2C_FIELD(var_s2, s8 *, 0x65) = 0;
        var_s0_2 += 1;
        D_003E98E4 = M2C_FIELD(var_s2, u8 *, 0x66);
        var_s2 += 0x80;
    } while (var_s0_2 < 4);
    D_003E7480 = 1;
    func_001C48E8(((void *)D_005223B0), 0, 0x200);
}
