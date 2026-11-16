/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_001EDA30(s32, s32);
extern void func_001EDAE0(s32, s32);
extern s32 func_001EDD00(s32);
extern s32 func_001EE0D0(void);
extern void func_002E18C0(char *, char *, s32);
extern void func_002E28F0(s32, s32, s32, s32);
extern f32 D_003B33A0[];
extern f32 D_003B33A4[];

void func_002E1EB0(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s3;

    if ((M2C_FIELD(arg0, s32 *, 0) == 0) && (arg2 > 0)) {
        if (arg2 >= 0x1C) {
            return;
        }
        if ((arg1 != 1) && (arg1 != 3)) {
            M2C_FIELD(arg0, s32 *, 0x18) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        }
        M2C_FIELD(arg0, s32 *, 0) = arg2;
        temp_v0 = func_001EE0D0();
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
        func_001EDA30(temp_v0, M2C_FIELD(arg0, s32 *, 0x18));
        func_001EDAE0(M2C_FIELD(arg0, s32 *, 0x1C), 1);
        if (arg2 == 3) {
            var_s0 = 3;
        } else if (arg2 == 1) {
            var_s0 = 3;
        } else if (arg2 == 15) {
            var_s0 = 1;
        } else {
            var_s0 = 9;
        }
        M2C_FIELD(arg0, s32 *, 0x14) = var_s0;
        var_s3 = 0;
        if (var_s0 > 0) {
            do {
                func_002E28F0(func_001EDD00(M2C_FIELD(arg0, s32 *, 0x1C)), arg2, var_s0, var_s3);
                var_s0 = M2C_FIELD(arg0, s32 *, 0x14);
                var_s3 += 1;
            } while (var_s3 < var_s0);
        }
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        temp_a2 = (u8) M2C_FIELD(arg0, s32 *, 0) * 8;
        M2C_FIELD(arg0, f32 *, 0xC) = 2.0f * *(f32 *)(((char *)D_003B33A0) + temp_a2);
        M2C_FIELD(arg0, f32 *, 0x10) = 2.0f * *(f32 *)(((char *)D_003B33A4) + ((u8) M2C_FIELD(arg0, s32 *, 0) * 8));
        func_002E18C0(arg0, arg0 + 4, temp_a2);
    }
}
