/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00208750(s32, M2C_UNK, s32);           /* extern */
s32 func_00AB5120();                                /* extern */
extern char D_005926E2[];

s32 func_00AB5840(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;

    if (func_00AB5120() == 0) {
        temp_s4 = func_009B30B0(arg1, arg2) & 0xFFFF;
        temp_a0 = arg1 & 0xFFFF;
        temp_s5 = (((temp_a0 - M2C_FIELD(arg0, u16 *, 0x28)) + 0x10000) & 0xFFFF) < 0x8001;
        if (temp_s4 >= 0x17) {
            temp_s3 = arg2 & 0xFFFF;
            if ((temp_s4 < (func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF)) && ((((((temp_a0 - temp_s3) + 0x10000) & 0xFFFF) < 0x8001) & 0xFF) == ((((M2C_FIELD(arg0, u16 *, 0x26) - temp_s3) + 0x10000) & 0xFFFF) < 0x8001))) {
                func_00208750(M2C_FIELD(arg0, s32 *, 4), 0xC2, ((temp_s5 & 0xFF) ^ 1) & 0xFF);
            } else if ((temp_s5 & 0xFF) != ((((M2C_FIELD(arg0, u16 *, 0x26) - M2C_FIELD(arg0, u16 *, 0x10C)) + 0x10000) & 0xFFFF) < 0x8001)) {
                func_00208750(M2C_FIELD(arg0, s32 *, 4), 0x2B, temp_s5);
            } else {
                func_00208750(M2C_FIELD(arg0, s32 *, 4), 0xC4, temp_s5);
            }
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
            func_00207390(M2C_FIELD(arg0, s32 *, 4), 6);
            M2C_FIELD(arg0, s16 *, 0x34) = (s16) arg1;
            M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        } else {
            func_00208750(M2C_FIELD(arg0, s32 *, 4), 0x2B, temp_s5);
            M2C_FIELD(arg0, u16 *, 0x26) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
            func_00207390(M2C_FIELD(arg0, s32 *, 4), 6);
            M2C_FIELD(arg0, s16 *, 0x34) = (s16) arg1;
            M2C_FIELD(arg0, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        }
        M2C_FIELD(arg0, u8 *, 0x65) = (*(u8 *)D_005926E2);
        return 1;
    }
    return 1;
}
