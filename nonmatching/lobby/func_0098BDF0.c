/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s64 func_001105C8(void);
extern void func_00110E58(unsigned long long, void *, void *);
M2C_UNK func_0026E840(s32, s32);                    /* extern */
s32 func_00831980(u8);                              /* extern */
s32 func_00831E30();                                /* extern */
s32 func_00832060();                                /* extern */
extern char D_008A5F72[];
extern char D_008A5F80[];
extern void *D_00A7D760;

void func_0098BDF0(void) {
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_a0;
    void *var_s0;

    temp_s3 = (*(s32 *)D_008A5F80);
    temp_s2 = func_00832060();
    var_s0 = D_00A7D760;
    temp_s1 = func_00831E30();
    if (var_s0 == NULL) {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        if ((*(s16 *)D_008A5F72) < 2) {
            M2C_FIELD(var_s0, u8 *, 4) = 0U;
            return;
        }
        if (((*(s16 *)D_008A5F72) >= 8) && ((*(s16 *)D_008A5F72) < 0xD)) {
            M2C_FIELD(var_s0, u8 *, 4) = 0U;
            return;
        }
        temp_a0 = M2C_FIELD(var_s0, u8 *, 4);
        switch (temp_a0) {                          /* irregular */
        case 0:
            temp_v1 = temp_s1 - (func_00831980(temp_a0) * 0x3C);
            if (temp_s3 == temp_s2) {
                func_00110E58(func_001105C8(), &sp6C, &sp68);
                temp_a3 = (sp68 / 1000) + (sp6C * 0x3E8);
                M2C_FIELD(var_s0, s32 *, 8) = temp_a3;
                M2C_FIELD(var_s0, s32 *, 0xC) = temp_a3;
                M2C_FIELD(var_s0, s32 *, 0) = 0x8404880D;
                M2C_FIELD(var_s0, u32 *, 0x10) = 0x5DCU;
                M2C_FIELD(var_s0, s32 *, 0x14) = 2;
                M2C_FIELD(var_s0, u8 *, 4) = 1U;
                return;
            }
            if (temp_s3 == temp_v1) {
                func_00110E58(func_001105C8(), &sp64, &sp60);
                temp_a3_2 = (sp60 / 1000) + (sp64 * 0x3E8);
                M2C_FIELD(var_s0, s32 *, 0xC) = temp_a3_2;
                M2C_FIELD(var_s0, s32 *, 8) = temp_a3_2;
                M2C_FIELD(var_s0, s32 *, 0) = 0x8404880F;
                M2C_FIELD(var_s0, u32 *, 0x10) = 0x1F4U;
                M2C_FIELD(var_s0, s32 *, 0x14) = 3;
                M2C_FIELD(var_s0, u8 *, 4) = 1U;
                return;
            }
            break;
        case 1:
            func_00110E58(func_001105C8(), &sp5C, &sp58);
            temp_a1 = (sp58 / 1000) + (sp5C * 0x3E8);
            M2C_FIELD(var_s0, s32 *, 0xC) = temp_a1;
            if ((u32) (temp_a1 - M2C_FIELD(var_s0, s32 *, 8)) >= (u32) M2C_FIELD(var_s0, u32 *, 0x10)) {
                func_0026E840(M2C_FIELD(var_s0, s32 *, 0), temp_a1);
                temp_v1_2 = M2C_FIELD(var_s0, s32 *, 0x14);
                if (temp_v1_2 == 0) {
                    M2C_FIELD(var_s0, u8 *, 4) = 0U;
                    return;
                }
                M2C_FIELD(var_s0, s32 *, 0x14) = (s32) (temp_v1_2 - 1);
                M2C_FIELD(var_s0, s32 *, 8) = (s32) M2C_FIELD(var_s0, s32 *, 0xC);
            }
            break;
        }
    }
}
