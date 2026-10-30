/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern void * func_002260A0(void);
extern void * func_00228A80(void);
extern void * func_00223C10(void);
extern u8 func_00226D60(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_00223E00(u16);                           /* extern */
void *func_00224E20();                              /* extern */
s32 func_0094B600(u16, s32);                        /* extern */
M2C_UNK func_0094BB70(s32);                         /* extern */
s32 func_0096E890(u16);                             /* extern */
M2C_UNK func_0096FB20(u8 *, u16);                   /* extern */
M2C_UNK func_00970380(s32, s32);                    /* extern */
s32 func_00970870(u16);                             /* extern */
void *func_00994750();                              /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
M2C_UNK func_00AF65E0(u16);                         /* extern */
M2C_UNK func_00AFEBB0(u16, s32);                    /* extern */
s32 func_00B02A20(u16);                             /* extern */
s32 func_00B04DF0(u16);                             /* extern */
s32 func_00B05280(u16);                             /* extern */
M2C_UNK func_00B1A210(u16);                         /* extern */
M2C_UNK func_00B22420(s32, s64);                    /* extern */
M2C_UNK func_00B2B5D0(u16);                         /* extern */

void func_00B1D1E0(s32 arg0, s32 arg1) {
    u8 sp98;
    u8 sp9C;
    s32 temp_s4;
    s32 temp_s4_3;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 var_v0_3;
    s32 var_v0_4;
    s64 var_s4;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v0_5;
    u16 temp_s4_2;
    u8 temp_a1_2;
    u8 temp_s7;
    u8 var_v1;
    void *temp_a1;
    void *temp_s2;
    void *temp_s5;
    void *temp_s6;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_7;

    temp_v0 = func_00224E20();
    temp_s5 = func_00223E00(M2C_FIELD(temp_v0, u16 *, 0));
    temp_s4 = func_00970870(M2C_FIELD(temp_v0, u16 *, 0));
    temp_s6 = func_00229DF0();
    temp_s2 = func_00994750();
    temp_v0_2 = func_002260A0();
    if ((temp_v0 != NULL) && (temp_s5 != NULL) && (temp_s4 != 0) && (temp_s6 != NULL) && (temp_s2 != NULL) && (temp_v0_2 != NULL)) {
        if ((M2C_FIELD(temp_v0, u8 *, 0x10) & 0xF) == 3) {
            func_00B2B5D0(M2C_FIELD(temp_v0, u16 *, 0));
            temp_s4_2 = M2C_FIELD(temp_v0, u16 *, 0);
            func_0096FB20(&sp9C, temp_s4_2);
            if (sp9C != 0xFFFF) {
                temp_v0_3 = func_00223C10();
                if (temp_v0_3 != NULL) {
                    temp_s4_3 = ((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x38) >> 0x3A) + 1;
                    temp_v1 = func_00B05280(temp_s4_2) & 0xFFFF;
                    var_v0 = (s64) ((((temp_s4_3 * temp_v1) / 10) + ((u32) (temp_s4_3 * temp_v1) >> 0x1F)) << 0x30) >> 0x30;
                    if (var_v0 == 0) {
                        var_v0 = 1;
                    }
                    var_v0_2 = var_v0 & 0xFFFF;
                } else {
                    var_v0_2 = 1;
                }
            } else {
                var_v0_2 = 0;
            }
            var_s4 = (s64) (var_v0_2 << 0x30) >> 0x30;
            temp_v0_4 = func_00229DF0();
            if (temp_v0_4 != NULL) {
                temp_s7 = M2C_FIELD(temp_v0_4, u8 *, 3);
                if ((temp_s7 & 0xFF) >= (func_0099B570(0) & 0xFF)) {
                    var_v0_3 = 2;
                } else {
                    goto block_25;
                }
            } else {
block_25:
                var_v0_3 = 1;
            }
            if ((var_v0_3 & 0xFF) == 1) {
                func_0096FB20(&sp98, M2C_FIELD(temp_v0, u16 *, 0));
                if (sp98 != 0xFFFF) {
                    temp_v0_5 = func_00223C10();
                    if (temp_v0_5 != NULL) {
                        var_v0_4 = ((u16) M2C_FIELD(temp_v0_5, u16 *, 2) >> 1) & 0xFFFF;
                        if (var_v0_4 == 0) {
                            var_v0_4 = 1;
                        }
                        var_v0_5 = var_v0_4 & 0xFFFF;
                    } else {
                        var_v0_5 = 1;
                    }
                } else {
                    var_v0_5 = 0;
                }
                var_s4 = (s64) ((var_s4 - ((s64) (var_v0_5 << 0x30) >> 0x30)) << 0x30) >> 0x30;
            }
            func_00B22420(arg0, -((s64) (var_s4 << 0x30) >> 0x30));
            func_00970380(arg0, arg1);
        }
        if ((M2C_FIELD(temp_s6, u8 *, 3) == 0x24) && ((M2C_FIELD(temp_s5, u8 *, 6) & 0x3F) == 3)) {
            if ((func_00B02A20(M2C_FIELD(temp_v0, u16 *, 0)) & 0xFF) >= 0x24) {
                func_00AF65E0(M2C_FIELD(temp_v0, u16 *, 0));
                func_00B1A210(M2C_FIELD(temp_v0, u16 *, 0));
                if (M2C_FIELD(temp_s2, u16 *, 0xA) == M2C_FIELD(temp_v0, u16 *, 0)) {
                    M2C_FIELD(temp_s2, u16 *, 0xA) = 0U;
                }
                func_00AFEBB0(M2C_FIELD(temp_v0, u16 *, 0), arg0);
                func_001C48E8(temp_s5, 0, 0x20);
                M2C_FIELD(temp_s5, u8 *, 6) = (u8) ((M2C_FIELD(temp_s5, u8 *, 6) & ~0x3F) | 3);
                temp_v0_6 = func_0094B600(M2C_FIELD(temp_v0, u16 *, 0), arg0) & 0xFFFF;
                if (temp_v0_6 < 0x400) {
                    func_0094BB70(temp_v0_6 & 0xFF);
                }
                if (((func_0096E890(M2C_FIELD(temp_v0, u16 *, 0)) == 1) || (func_00B04DF0(M2C_FIELD(temp_v0, u16 *, 0)) == 1)) && (func_00226D60() == 0)) {
                    M2C_FIELD(temp_s5, u8 *, 6) = (u8) ((M2C_FIELD(temp_s5, u8 *, 6) & ~0x3F) | (0 & 0x3F));
                }
                func_00970380(arg0, arg1);
                temp_v0_7 = func_00228A80();
                if (temp_v0_7 != NULL) {
                    temp_a1 = (arg0 & 0xFF) + temp_v0_7;
                    M2C_FIELD(temp_a1, u8 *, 0x33EF9) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x33EF9) + 1);
                }
            } else {
                temp_a1_2 = M2C_FIELD(temp_s5, u8 *, 6);
                if (((u64) ((s64) temp_a1_2 << 0x39) >> 0x3F) != 0) {
                    var_v1 = (temp_a1_2 & ~0x3F) | 6;
                } else {
                    var_v1 = (temp_a1_2 & ~0x3F) | (0 & 0x3F);
                }
                M2C_FIELD(temp_s5, u8 *, 6) = var_v1;
            }
        }
    }
}
