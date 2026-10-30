/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
s32 func_00292F00(u8, s32);                         /* extern */
M2C_UNK func_00C13B90(M2C_UNK *);                   /* extern */
M2C_UNK func_00C16E80(s8 *, s32);                   /* extern */
M2C_UNK func_00C17D50(s32);                         /* extern */
extern s8 *D_003EA7D0;
extern char D_00591A90[];
extern char D_00591BE4[];
extern char D_005A2020[];
extern char D_00CCAE00[];
extern char D_00CCAE28[];

void func_00C17340(void) {
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s4;
    s32 var_s5;
    s8 *temp_v1_2;
    s8 *var_s3;
    void *temp_s1;
    void *var_s2;

    D_003EA7D0 = ((void *)D_00CCAE00);
    func_001C48E8(((void *)D_00CCAE00), 0, 0x34);
    var_s5 = 0;
    var_s3 = ((void *)D_00CCAE00);
    do {
        *var_s3 = (((*(u8 *)D_00591BE4) * 0x1388) / 1000) + ((u32) ((*(u8 *)D_00591BE4) * 0x1388) >> 0x1F);
        func_00C17D50(var_s5 & 0xFF);
        temp_v1 = var_s5 & 0xFF;
        var_a1 = ((void *)D_00591A90);
        var_s4 = 0;
        var_s2 = ((void *)D_00591A90) + (temp_v1 * 0x8B);
        temp_s1 = ((void *)D_005A2020) + (temp_v1 * 0x168);
loop_2:
        temp_v1_2 = &var_s3[var_s4];
        var_a1 = (M2C_UNK *) ((func_00292F00(M2C_FIELD((temp_s1 + (M2C_FIELD(temp_s1, u8 *, 1) * 0x52) + var_s4), u8 *, 0x1C), (s32) var_a1) & 0xFF) << 5);
        var_s4 += 1;
        temp_a0 = M2C_FIELD(var_s2, u8 *, 7) & 0x1F;
        var_s2 += 1;
        M2C_FIELD(temp_v1_2, s8 *, 1) = (s8) ((s32) var_a1 | temp_a0);
        if (var_s4 < 0xB) {
            goto loop_2;
        }
        func_00C16E80(var_s3 + 0xC, var_s5 & 0xFF);
        var_s5 += 1;
        var_s3 += 0x14;
    } while (var_s5 < 2);
    (*(s8 *)D_00CCAE00) -= 1;
    func_00C13B90(((void *)D_00CCAE28));
}
