/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F85A0(void *, void *);
M2C_UNK func_001C4730(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s8 func_00221500(u16);                              /* extern */
M2C_UNK func_00256BE0(void *, void *, u16);         /* extern */
s32 func_0096F610(u16);                             /* extern */
u8 func_00AF6E10(u16);                              /* extern */
extern char Pes6MatchSquads[];
extern char D_00B34380[];
extern char D_00B43520[];

void func_00AF6A40(s32 arg0, s32 arg1) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a1_2;
    s32 temp_a1;
    s32 var_s5;
    u16 temp_s4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s4_2;
    void *var_s3;

    temp_a1 = arg1 & 0xFFFF;
    if (temp_a1 >= 0xCC) {
        if (temp_a1 >= 0xDD) {
            return;
        }
        var_s5 = 0;
        do {
            temp_s2 = ((void *)Pes6MatchSquads) + ((arg0 & 0xFF) * 0x6900) + ((var_s5 & 0xFF) * 0x348);
            temp_s4 = M2C_FIELD(temp_s2, u16 *, 0x46);
            if (func_0096F610(temp_s4) == 0) {
                var_s3 = NULL;
            } else {
                var_s3 = ((void *)D_00B34380) + (((temp_s4 & 0xFFFF) - 0x1770) * 0x7C) + 0x34;
            }
            if ((func_0096F610(temp_s4) != 0) && (var_s3 != NULL)) {
                temp_s0 = temp_s2 + 0x148;
                func_001C48E8(temp_s0, 0, 0x2E);
                if (func_0096F610(temp_s4) == 0) {
                    var_a1 = NULL;
                } else {
                    func_001F85A0(((void *)D_00B34380) + (((temp_s4 & 0xFFFF) - 0x1770) * 0x7C), ((void *)D_00B43520));
                    var_a1 = ((void *)D_00B43520);
                }
                func_001C4730(temp_s0, var_a1, 0x2D);
                temp_s0_2 = temp_s2 + 0x247;
                func_001C48E8(temp_s0_2, 0, 0x10);
                if (func_0096F610(temp_s4) == 0) {
                    var_a1_2 = NULL;
                } else {
                    var_a1_2 = ((void *)D_00B34380) + (((temp_s4 & 0xFFFF) - 0x1770) * 0x7C) + 0x20;
                }
                func_001C4730(temp_s0_2, var_a1_2, 0xF);
                M2C_FIELD(temp_s2, u8 *, 0x10) = func_00AF6E10(temp_s4);
                M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) (M2C_FIELD(var_s3, u16 *, 0x3C) & 0x1FF);
                M2C_FIELD(temp_s2, s8 *, 0x14) = func_00221500(temp_s4);
                temp_s4_2 = temp_s2 + 0x68;
                M2C_FIELD(temp_s2, f32 *, 0x1C) = (f32) M2C_FIELD(var_s3, f32 *, 0x24);
                M2C_FIELD(temp_s2, f32 *, 0x20) = (f32) M2C_FIELD(var_s3, f32 *, 0x28);
                M2C_FIELD(temp_s2, f32 *, 0x24) = (f32) M2C_FIELD(var_s3, f32 *, 0x2C);
                M2C_FIELD(temp_s2, f32 *, 0x28) = (f32) M2C_FIELD(var_s3, f32 *, 0x30);
                M2C_FIELD(temp_s2, f32 *, 0x2C) = (f32) M2C_FIELD(var_s3, f32 *, 0x34);
                M2C_FIELD(temp_s2, f32 *, 0x30) = (f32) M2C_FIELD(var_s3, f32 *, 0x38);
                M2C_FIELD(temp_s2, f32 *, 0x34) = (f32) M2C_FIELD(var_s3, u16 *, 0x3C);
                M2C_FIELD(temp_s2, f32 *, 0x38) = (f32) M2C_FIELD(var_s3, f32 *, 0x40);
                M2C_FIELD(temp_s2, f32 *, 0x3C) = (f32) M2C_FIELD(var_s3, f32 *, 0x44);
                func_00256BE0(temp_s4_2, var_s3, M2C_FIELD(temp_s2, u16 *, 0x46));
                M2C_FIELD(temp_s2, u8 *, 0x90) = (u8) M2C_FIELD(temp_s2, u8 *, 0x10);
                M2C_FIELD(temp_s2, u8 *, 0x33) = (u8) M2C_FIELD(temp_s2, u8 *, 0x10);
                M2C_FIELD(temp_s2, f32 *, 0x94) = (f32) M2C_FIELD(temp_s2, f32 *, 0x68);
                M2C_FIELD(temp_s2, f32 *, 0x98) = (f32) M2C_FIELD(temp_s4_2, f32 *, 4);
                M2C_FIELD(temp_s2, f32 *, 0x9C) = (f32) M2C_FIELD(temp_s4_2, f32 *, 8);
                M2C_FIELD(temp_s2, f32 *, 0xA0) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0xC);
                M2C_FIELD(temp_s2, f32 *, 0xA4) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x10);
                M2C_FIELD(temp_s2, f32 *, 0xA8) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x14);
                M2C_FIELD(temp_s2, f32 *, 0xAC) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x18);
                M2C_FIELD(temp_s2, f32 *, 0xB0) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x1C);
                M2C_FIELD(temp_s2, f32 *, 0xB4) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x20);
                M2C_FIELD(temp_s2, f32 *, 0xB8) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x24);
                M2C_FIELD(temp_s2, f32 *, 0xBC) = (f32) M2C_FIELD(temp_s4_2, f32 *, 0x28);
            }
            var_s5 = (var_s5 + 1) & 0xFF;
        } while (var_s5 < 0x20);
    }
}
