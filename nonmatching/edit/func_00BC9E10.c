/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A7B0(s32);
extern void func_00295600(float);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008CC580();                            /* extern */
M2C_UNK func_00BC9CA0();                            /* extern */
M2C_UNK func_00BCAF80();                            /* extern */
extern char D_00CB74A0[];
extern char D_00CE4F30[];
extern char D_00CE4F40[];

void func_00BC9E10(void) {
    M2C_UNK *var_s1;
    s32 *var_s0;
    s32 temp_v1;
    s32 var_s2;

    func_00BC9CA0();
    func_00BCAF80();
    func_008CC580();
    var_s2 = 0;
    var_s1 = ((void *)D_00CE4F40);
    var_s0 = ((void *)D_00CB74A0);
    do {
        temp_v1 = *var_s0;
        M2C_FIELD(var_s1, s32 *, 0) = var_s2;
        M2C_FIELD(var_s1, s32 *, 4) = temp_v1;
        M2C_FIELD(var_s1, s32 *, 8) = (s32) (temp_v1 + 1);
        M2C_FIELD(var_s1, s32 *, 0xC) = 0;
        M2C_FIELD(var_s1, s32 *, 0x10) = 8;
        func_001C48E8(var_s1 + 0x14, 0, 0x14);
        var_s2 += 1;
        M2C_FIELD(var_s1, s32 *, 0x28) = 0x15;
        var_s0 += 4;
        var_s1 += 0xC0;
    } while (var_s2 < 3);
    func_0027A7B0(0);
    func_00295600(20.0f);
    func_001C48E8(((void *)D_00CE4F30), 0, 0x10);
}
