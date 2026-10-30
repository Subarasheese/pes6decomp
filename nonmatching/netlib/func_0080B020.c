/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(void *, s8 *, M2C_UNK);       /* extern */
s16 *func_008472D0();                               /* extern */
void *func_008503C0(s32, s32);                      /* extern */
M2C_UNK func_008580E0(u8, M2C_UNK);                 /* extern */
extern char D_00591970[];
extern char D_008A31B0[];

s32 func_0080B020(void *arg0) {
    s16 temp_s0;
    s32 temp_s1;
    s32 var_v1;
    s8 *temp_s2;
    s8 *var_a0;
    s8 *var_a1;
    u8 temp_s0_2;
    u8 temp_v1;
    void *temp_a0;
    void *var_s3;

    temp_s0 = M2C_FIELD(arg0, s16 *, 2);
    temp_s1 = temp_s0 & 0xFF;
    if (temp_s0 != *func_008472D0()) {
        var_s3 = func_008503C0(M2C_FIELD(arg0, u8 *, 4) & 1, temp_s1);
loop_13:
        if (var_s3 != NULL) {
            temp_s2 = arg0 + ((M2C_FIELD(var_s3, u8 *, 0x17) != 0) * 0x36) + 6;
            if (M2C_FIELD(var_s3, u8 *, 0x12) == (temp_s1 & 0xFF)) {
                temp_s0_2 = M2C_FIELD(var_s3, u8 *, 0x18);
                if (temp_s0_2 != 0xFF) {
                    temp_a0 = ((void *)D_008A31B0) + (temp_s0_2 * 0x36);
                    M2C_FIELD(var_s3, void **, 0x24) = temp_a0;
                    func_001C47E0(temp_a0, temp_s2, 0x36);
                    var_v1 = 0xF;
                    var_a0 = temp_s2;
                    var_a1 = ((void *)D_00591970) + (temp_s0_2 * 0x24);
                    do {
                        var_v1 -= 1;
                        *var_a1 = *var_a0;
                        var_a0 += 1;
                        var_a1 += 1;
                    } while (var_v1 > 0);
                    func_008580E0(M2C_FIELD(var_s3, u8 *, 0x12), 1);
                }
                temp_v1 = M2C_FIELD(var_s3, u8 *, 0x18);
                if (temp_v1 != 0xFF) {
                    func_001C47E0(((void *)D_00591970) + (temp_v1 * 0x24) + 0xF, temp_s2 + 0xF, 0x15);
                }
                var_s3 = M2C_FIELD(var_s3, void **, 4);
                goto loop_13;
            }
        }
    }
    return 0;
}
