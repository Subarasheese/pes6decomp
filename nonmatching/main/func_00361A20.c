/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002B5470(s32, void *);                 /* extern */
s8 func_0099D430(s32);                              /* extern */
s8 func_0099D470(s32);                              /* extern */
extern char D_00591A90[];
extern char D_00591E00[];
extern char D_00591EF6[];

void func_00361A20(s32 arg0, void *arg1) {
    s32 temp_a1_3;
    s32 var_s3;
    s32 var_v1;
    s8 temp_v0;
    u8 *temp_a1;
    void *temp_a1_2;
    void *temp_a4;
    void *temp_s2;
    void *var_a0;
    void *var_a2;

    if (arg1 != NULL) {
        func_001C48E8(arg1, 0, 0x17A);
        func_002B5470(arg0, arg1 + 0x14);
        var_s3 = 0;
        do {
            temp_s2 = arg1 + var_s3;
            M2C_FIELD(temp_s2, s8 *, 0) = func_0099D470(var_s3);
            temp_v0 = func_0099D430(var_s3);
            var_s3 += 1;
            M2C_FIELD(temp_s2, s8 *, 2) = temp_v0;
        } while (var_s3 < 2);
        temp_a1 = ((void *)D_00591EF6) + arg0;
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) *temp_a1;
        var_v1 = 0;
        if ((s32) *temp_a1 > 0) {
            var_a0 = arg1;
            temp_a4 = ((void *)D_00591A90) + (arg0 * 0x8B);
            temp_a1_2 = ((void *)D_00591E00) + arg0;
            do {
                M2C_FIELD(var_a0, u8 *, 4) = (u8) M2C_FIELD((temp_a4 + ((var_v1 + M2C_FIELD(temp_a1_2, u8 *, 0xF8)) * 8)), u8 *, 0x52);
                temp_a1_3 = (var_v1 + M2C_FIELD(temp_a1_2, u8 *, 0xF8)) * 8;
                var_v1 += 1;
                M2C_FIELD(var_a0, u8 *, 5) = (u8) M2C_FIELD((temp_a4 + temp_a1_3), u8 *, 0x53);
                var_a0 += 2;
            } while (var_v1 < (s32) M2C_FIELD(temp_a1_2, u8 *, 0xF6));
        }
        if (var_v1 < 7) {
            var_a2 = arg1 + (var_v1 * 2);
            do {
                M2C_FIELD(var_a2, s8 *, 4) = 0xFF;
                var_v1 += 1;
                M2C_FIELD(var_a2, s8 *, 5) = 0xFF;
                var_a2 += 2;
            } while (var_v1 < 7);
        }
    }
}
