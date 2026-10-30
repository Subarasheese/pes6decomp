/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
extern void *D_00507A90;
extern void *D_00507A94;
extern char D_00509068[];

void func_00145BC0(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a0;
    s32 var_a6;
    s32 var_s0;
    u32 temp_a0;
    u32 var_a7;
    void **var_a5;
    void *var_a1;

    var_a1 = D_00507A94;
loop_1:
    if (M2C_FIELD(var_a1, u16 *, 0xE) != 0) {
block_2:
        var_a1 = M2C_FIELD(var_a1, void **, 4);
        goto loop_1;
    }
    if (var_a1 != &D_00507A90) {
        goto block_2;
    }
    var_s0 = arg0 & 0xFF;
    (*(s32 *)D_00509068) = var_s0;
    func_001C48E8(&D_00507A90, 0, 0x15E0);
    if (var_s0 == 0) {
        var_s0 = 0xE8;
    }
    (*(s32 *)D_00509068) = var_s0 & 0xFF;
    var_a5 = &D_00507A90;
    var_a7 = 0;
    var_a6 = 0;
    do {
        M2C_FIELD(var_a5, void **, 0) = &D_00507A90 + (var_a6 - 0x18);
        M2C_FIELD(var_a5, void **, 4) = (void *) (&D_00507A90 + (var_a6 + 0x18));
        temp_a1 = ((var_a7 - 1) << 8) + 0xF0800;
        var_a0 = temp_a1 >> 6;
        if (temp_a1 < 0) {
            var_a0 = (s32) (temp_a1 + 0x3F) >> 6;
        }
        M2C_FIELD(var_a5, s16 *, 0xC) = (s16) var_a0;
        var_a7 += 1;
        temp_a0 = *(u32 *)0x509068;
        var_a6 += 0x18;
        var_a5 += 0x18;
    } while (temp_a0 >= var_a7);
    temp_a1_2 = temp_a0 * 0x18;
    D_00507A90 = &D_00507A90 + temp_a1_2;
    *(&D_00507A94 + temp_a1_2) = &D_00507A90;
}
