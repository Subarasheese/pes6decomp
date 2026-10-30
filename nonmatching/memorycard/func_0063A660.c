/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *D_003E9E6C;
extern char D_0061CC10[];
extern void *D_0065EF68;
extern void *D_0065EF70;
extern void *D_0065EF78;

void func_0063A660(s32 arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a1_2;
    void *var_a2;
    void *var_a3;
    void *var_s0;
    void *var_s1;

    temp_a1 = arg0 & 0xFF;
    var_s1 = D_0065EF70;
    var_s0 = D_0065EF78;
    M2C_FIELD(var_s1, s8 *, 0xC) = 2;
    if (temp_a1 == 2) {
        var_a3 = D_003E9E6C;
        var_a2 = D_0065EF68;
        var_a1 = 0x500;
        do {
            var_a1 -= 1;
            temp_v1 = M2C_FIELD(var_a3, s32 *, 4);
            M2C_FIELD(var_a2, s32 *, 0) = (s32) M2C_FIELD(var_a3, s32 *, 0);
            var_a3 += 8;
            M2C_FIELD(var_a2, s32 *, 4) = temp_v1;
            var_a2 += 8;
        } while (var_a1 > 0);
        return;
    }
    func_001C4730(var_s0 + 0xC, ((void *)D_0061CC10) + ((temp_a1 & 1) * 0x1004), 0x1004);
    func_001C48E8(var_s1 + 0x4C, 0, 0x61);
    var_a1_2 = 0;
    do {
        var_a1_2 += 5;
        M2C_FIELD(var_s1, u16 *, 0x2C) = (u16) M2C_FIELD(var_s0, u16 *, 0xC);
        M2C_FIELD(var_s1, u16 *, 0x2E) = (u16) M2C_FIELD(var_s0, u16 *, 0x1A6);
        M2C_FIELD(var_s1, u16 *, 0x30) = (u16) M2C_FIELD(var_s0, u16 *, 0x340);
        M2C_FIELD(var_s1, u16 *, 0x32) = (u16) M2C_FIELD(var_s0, u16 *, 0x4DA);
        M2C_FIELD(var_s1, u16 *, 0x34) = (u16) M2C_FIELD(var_s0, u16 *, 0x674);
        var_s0 += 0x802;
        var_s1 += 0xA;
    } while (var_a1_2 < 0xA);
}
