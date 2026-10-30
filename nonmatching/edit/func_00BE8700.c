/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1B3C0(u32);
extern s32 func_00BC57E0(s32, s32, s32);
extern void * Pes6Player_GetRecord(int, int);
s32 func_00151EA0(s32);                             /* extern */
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
void *func_00BC5AA0(s32, s32, M2C_UNK);             /* extern */
s32 func_00BC5DF0(s32, s32, M2C_UNK);               /* extern */
s32 func_00BC6100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
M2C_UNK func_00BC88E0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s32);                /* extern */
extern char D_003DF3A0[];
extern char D_00CE5BF8[];

void func_00BE8700(u32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0_3;

    var_s1 = 0;
    func_001B6460(1);
    func_00BC6910(0x20001A);
    func_00BC3FB0(1);
    func_00BC7390(0);
    func_00C1B3C0(arg0);
    do {
        temp_s3 = ((func_00151EA0(0x8C) & 0xFFFF) + 0x40) & 0xFFFF;
    } while ((M2C_FIELD((((void *)D_003DF3A0) + (temp_s3 * 0x10)), u16 *, 0xE) & 1) != 1);
    func_00C1B440(0, temp_s3);
    temp_s0 = func_00BC6100(temp_s3, 0) & 0xFF;
    var_s2 = 0;
    if (temp_s0 > 0) {
        do {
            if ((M2C_FIELD(func_00BC5AA0(temp_s3, var_s2, 0), u8 *, 0x32) & 3) == 1) {
                var_s1 = 1;
            }
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < temp_s0);
    }
    if (var_s1 == 0) {
        var_s0 = func_00151EA0(temp_s0 & 0xFF) & 0xFF;
    } else {
        do {
            var_s0 = func_00151EA0(temp_s0 & 0xFF) & 0xFF;
        } while ((M2C_FIELD(func_00BC5AA0(temp_s3, var_s0, 0), u8 *, 0x32) & 3) != 1);
    }
    temp_s1 = func_00BC5DF0(temp_s3, var_s0, 0) & 0xFFFF;
    temp_s0_2 = func_00C1B400(0);
    func_001C4730(temp_s0_2, Pes6Player_GetRecord(temp_s1, 0), 0x7C);
    temp_s0_3 = temp_s0_2 + 0x34;
    M2C_FIELD(temp_s0_3, s8 *, 0x3B) = func_00BC57E0(temp_s1, temp_s3, 0);
    if (((u64) ((s64) M2C_FIELD(temp_s0_3, u8 *, 1) << 0x38) >> 0x3C) != 0) {
        func_00BC88E0(temp_s3, 0, 1);
    } else {
        func_00BC88E0(temp_s3, 0, 0);
    }
    (*(s32 *)D_00CE5BF8) = 0;
}
