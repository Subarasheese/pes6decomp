/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 Pes6Random_Below(M2C_UNK);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
extern void *D_003EA7B8;
extern char D_00CBD8E0[];

void func_00C10BF0(void) {
    char *var_s0;
    char *var_s1;
    s32 var_s2;
    s32 var_s3;

    D_003EA7B8 = (void *)D_00CBD8E0;
    func_001C48E8((void *)D_00CBD8E0, 0, 0x5E8);
    var_s3 = 0;
    var_s1 = D_00CBD8E0;
    do {
        var_s2 = 0;
        var_s0 = var_s1;
        do {
            var_s2 += 1;
            M2C_FIELD(var_s0, f32 *, 0x48) = (f32) (0x80 - (Pes6Random_Below(0x100) & 0xFFFF));
            var_s0 += 0x28;
        } while (var_s2 < 0x12);
        var_s3 += 1;
        var_s1 += 0x2F4;
    } while (var_s3 < 2);
}
