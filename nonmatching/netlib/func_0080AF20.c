/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0();                               /* extern */
void *func_008503C0(u8, s32);                       /* extern */
M2C_UNK func_00858160(u8, M2C_UNK, void *);         /* extern */
extern char D_00592800[];

s32 func_0080AF20(void *arg0) {
    s16 temp_s0;
    s32 temp_s3;
    u8 temp_s1;
    u8 temp_v1_2;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_3;
    void *var_s1;

    temp_s0 = M2C_FIELD(arg0, s16 *, 2);
    temp_s1 = M2C_FIELD(arg0, u8 *, 4);
    temp_s3 = temp_s0 & 0xFF;
    if (temp_s0 != *func_008472D0()) {
        var_s1 = func_008503C0(temp_s1, temp_s3);
loop_9:
        if (var_s1 != NULL) {
            temp_v1 = arg0 + ((M2C_FIELD(var_s1, u8 *, 0x17) != 0) * 0x18);
            temp_a2 = temp_v1 + 5;
            if (M2C_FIELD(var_s1, u8 *, 0x12) == (temp_s3 & 0xFF)) {
                temp_v1_2 = M2C_FIELD(var_s1, u8 *, 0x18);
                if ((s32) temp_v1_2 < 8) {
                    M2C_FIELD(var_s1, u8 *, 0x1C) = (u8) M2C_FIELD(temp_v1, u8 *, 5);
                    temp_v1_3 = ((void *)D_00592800) + (temp_v1_2 * 0x28);
                    M2C_FIELD(var_s1, s8 *, 0x1D) = (s8) M2C_FIELD(temp_a2, s8 *, 1);
                    M2C_FIELD(temp_v1_3, u8 *, 3) = (u8) M2C_FIELD(var_s1, u8 *, 0x1C);
                    M2C_FIELD(temp_v1_3, u8 *, 4) = (u8) M2C_FIELD(var_s1, s8 *, 0x1D);
                    func_00858160(M2C_FIELD(var_s1, u8 *, 0x12), 1, temp_a2);
                }
                var_s1 = M2C_FIELD(var_s1, void **, 4);
                goto loop_9;
            }
        }
    }
    return 0;
}
