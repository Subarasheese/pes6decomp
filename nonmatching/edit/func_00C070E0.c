/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
extern char D_00CBF3F0[];

void func_00C070E0(void *arg0) {
    s32 var_a1;
    u32 var_s0;
    u32 var_v1;
    void *temp_v1;
    void *var_s1;

    var_a1 = 0;
    do {
        temp_v1 = arg0 + var_a1;
        M2C_FIELD(temp_v1, s8 *, 0x2A) = 0;
        var_a1 += 8;
        M2C_FIELD(temp_v1, s8 *, 0x2B) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x2C) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x2D) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x2E) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x2F) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x30) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x31) = 0;
    } while (var_a1 < 0x10);
    M2C_FIELD(arg0, s8 *, 0x2A) = 1;
    var_s0 = 0;
    M2C_FIELD(arg0, s8 *, 0x33) = 1;
    var_s1 = arg0;
    M2C_FIELD(arg0, s8 *, 0x35) = 1;
    M2C_FIELD(arg0, s8 *, 0x32) = 1;
    M2C_FIELD(arg0, s8 *, 0x38) = 2;
    do {
        var_v1 = var_s0;
        if (var_s0 >= 0x15U) {
            var_v1 = (u32) ((s32) var_s0 % 21);
        }
        func_001C4730(var_s1, ((void *)D_00CBF3F0) + (var_v1 * 2), 2);
        var_s0 += 1;
        var_s1 += 2;
    } while ((s32) var_s0 < 0x15);
}
