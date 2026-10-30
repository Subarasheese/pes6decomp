/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AF40(s32, s32, u32);
extern s32 func_0012AEA0(s32);
extern s32 func_0012AED0(void *, void *, s32, s32);
s32 func_00101EF8(s32);                             /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00500F80[];
extern char D_00501F80[];
extern char D_00502FF8[];
extern M2C_UNK *D_00503028;
extern char D_0050302C[];
extern char D_0050303C[];
extern char D_00503040[];
extern M2C_UNK func_00145120;

void func_00144DF0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_v0;
    s32 temp_a2;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    void *temp_v0;

    func_001C48E8(((void *)D_00500F80), 0, 0x2100);
    (*(s32 *)D_0050303C) = func_0012AF40(0x64, 1, 0U);
    var_a0 = 0;
    (*(s32 *)D_00503040) = func_0012AF40(0x64, 0, 0U);
    var_v0 = ((void *)D_00500F80);
    var_s0 = ((void *)D_00500F80);
    do {
        M2C_FIELD(var_v0, void **, 0x1000) = (void *) (((void *)D_00500F80) + ((var_a0 + 1) * 0x10) + 0x1000);
        M2C_FIELD(var_v0, void **, 0x1010) = (void *) (((void *)D_00500F80) + ((var_a0 + 2) * 0x10) + 0x1000);
        M2C_FIELD(var_v0, void **, 0x1020) = (void *) (((void *)D_00500F80) + ((var_a0 + 3) * 0x10) + 0x1000);
        M2C_FIELD(var_v0, void **, 0x1030) = (void *) (((void *)D_00500F80) + ((var_a0 + 4) * 0x10) + 0x1000);
        M2C_FIELD(var_v0, void **, 0x1040) = (void *) (((void *)D_00500F80) + ((var_a0 + 5) * 0x10) + 0x1000);
        M2C_FIELD(var_v0, void **, 0x1050) = (void *) (((void *)D_00500F80) + ((var_a0 + 6) * 0x10) + 0x1000);
        temp_v1 = (var_a0 + 7) * 0x10;
        var_a0 += 8;
        temp_a2 = var_a0 * 0x10;
        M2C_FIELD(var_v0, void **, 0x1060) = (void *) (((void *)D_00500F80) + temp_v1 + 0x1000);
        M2C_FIELD(var_v0, void **, 0x1070) = (void *) (((void *)D_00500F80) + temp_a2 + 0x1000);
        var_v0 += 0x80;
    } while (var_a0 < 0xF7);
    temp_v0 = ((void *)D_00501F80) + temp_a2;
    var_s1 = 0;
    M2C_FIELD(temp_v0, void **, 0) = (void *) (((void *)D_00500F80) + ((var_a0 + 1) * 0x10) + 0x1000);
    M2C_FIELD(temp_v0, void **, 0x10) = (void *) (((void *)D_00500F80) + ((var_a0 + 2) * 0x10) + 0x1000);
    M2C_FIELD(temp_v0, void **, 0x20) = (void *) (((void *)D_00500F80) + ((var_a0 + 3) * 0x10) + 0x1000);
    M2C_FIELD(temp_v0, void **, 0x30) = (void *) (((void *)D_00500F80) + ((var_a0 + 4) * 0x10) + 0x1000);
    M2C_FIELD(temp_v0, void **, 0x40) = (void *) (((void *)D_00500F80) + ((var_a0 + 5) * 0x10) + 0x1000);
    M2C_FIELD(temp_v0, void **, 0x50) = (void *) (((void *)D_00500F80) + ((var_a0 + 6) * 0x10) + 0x1000);
    M2C_FIELD(temp_v0, void **, 0x60) = (void *) (((void *)D_00500F80) + ((var_a0 + 7) * 0x10) + 0x1000);
    D_00503028 = ((void *)D_00501F80);
    do {
        M2C_FIELD(var_s0, s32 *, 0x2008) = func_00101EF8(var_s1);
        var_s1 += 1;
        var_s0 += 0xC;
    } while (var_s1 < 0xA);
    M2C_FIELD(((void *)D_00502FF8), s32 *, 0x28) = 0;
    M2C_FIELD(((void *)D_00502FF8), s32 *, 0x2C) = 0;
    temp_v0_2 = func_0012AED0(&func_00145120, ((void *)D_00500F80), 0x1000, 0x14);
    (*(s32 *)D_0050302C) = temp_v0_2;
    func_0012AEA0(temp_v0_2);
}
