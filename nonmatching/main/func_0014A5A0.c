/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0050AE30[];
extern M2C_UNK *D_0050AE38;
extern M2C_UNK *D_0050AE3C;
extern char D_0050AE58[];
extern M2C_UNK *D_0050D180;
extern M2C_UNK *D_0050D184;
extern char D_0050D188[];
extern char D_0050D18C[];

void func_0014A5A0(void) {
    M2C_UNK *var_a2;
    s32 var_a3;
    s32 var_a4;
    u8 var_s0;

    var_s0 = (*(u8 *)D_0050D18C);
    func_001C48E8(((void *)D_0050AE30), 0, 0x2360);
    if (var_s0 == 0) {
        var_s0 = 0xE1;
    }
    (*(u8 *)D_0050D18C) = var_s0;
    var_a4 = 1;
    if ((s32) (*(u8 *)D_0050D18C) >= 2) {
        var_a3 = 0x28;
        var_a2 = ((void *)D_0050AE58);
        do {
            var_a3 += 0x28;
            var_a4 += 1;
            M2C_FIELD(var_a2, void **, 4) = (void *) (((void *)D_0050AE30) + var_a3);
            var_a2 += 0x28;
        } while (var_a4 < (s32) *(u8 *)0x50D18C);
    }
    D_0050AE3C = ((void *)D_0050AE30);
    M2C_FIELD(((void *)D_0050AE58), s16 *, 0x14) = 0x100;
    D_0050AE38 = ((void *)D_0050AE30);
    M2C_FIELD(((void *)D_0050AE58), s32 *, 0) = 0;
    M2C_FIELD(((void *)D_0050AE58), s32 *, 0x10) = 0;
    M2C_FIELD(((void *)D_0050AE58), s16 *, 0x16) = (s16) (*(u8 *)D_0050D18C);
    D_0050D180 = ((void *)D_0050AE58);
    D_0050D184 = ((void *)D_0050AE58);
    (*(s32 *)D_0050D188) = M2C_FIELD(((void *)D_0050AE58), s32 *, 4);
    M2C_FIELD(((void *)D_0050AE58), s32 *, 4) = 0;
}
