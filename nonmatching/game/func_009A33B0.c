/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A5E50(void *, s32, u32);            /* extern */
s32 func_00B29DE0(u32);                             /* extern */
extern void *D_003EA710;
extern char D_00591DD6[];

void func_009A33B0(void) {
    s32 var_v1;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_v1;
    void *temp_s0;
    void *temp_s1;

    if ((*(u8 *)D_00591DD6) != 0) {
        temp_s0 = D_003EA710;
        var_v1 = 1;
        if (M2C_FIELD(temp_s0, s32 *, 0) != 1) {
            temp_a0 = M2C_FIELD(temp_s0, u32 *, 0x10);
            if (temp_a0 == 0) {

            } else {
                var_v1 = ((u32) M2C_FIELD(temp_s0, u32 *, 0x14) % temp_a0) == 0;
            }
            if (((var_v1 != 0) || (M2C_FIELD(temp_s0, s32 *, 0x28) != 0)) && (M2C_FIELD(temp_s0, s32 *, 0x24) == 0) && (func_00B29DE0(temp_a0) != 0)) {
                temp_a2 = M2C_FIELD(temp_s0, u32 *, 0x18);
                temp_s1 = M2C_FIELD(temp_s0, s32 *, 8) + (temp_a2 * 0x10DA0);
                func_009A5E50(temp_s1, M2C_FIELD(temp_s0, s32 *, 0), temp_a2);
                M2C_FIELD(temp_s1, s32 *, 8) = (s32) M2C_FIELD(temp_s0, s32 *, 0x30);
                M2C_FIELD(temp_s0, u32 *, 0x18) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x18) + 1);
                temp_a0_2 = M2C_FIELD(temp_s0, u32 *, 0xC);
                temp_v1 = M2C_FIELD(temp_s0, u32 *, 0x18);
                if (temp_v1 >= temp_a0_2) {
                    M2C_FIELD(temp_s0, u32 *, 0x18) = (u32) (temp_v1 - temp_a0_2);
                }
                temp_a0_3 = M2C_FIELD(temp_s0, u32 *, 0x1C);
                if (temp_a0_3 == M2C_FIELD(temp_s0, u32 *, 0x18)) {
                    M2C_FIELD(temp_s0, u32 *, 0x1C) = (u32) (temp_a0_3 + 1);
                    temp_a1 = M2C_FIELD(temp_s0, u32 *, 0xC);
                    temp_a0_4 = M2C_FIELD(temp_s0, u32 *, 0x1C);
                    if (temp_a0_4 >= temp_a1) {
                        M2C_FIELD(temp_s0, u32 *, 0x1C) = (u32) (temp_a0_4 - temp_a1);
                    }
                }
                M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x28) = 0;
            }
        }
        M2C_FIELD(temp_s0, s32 *, 0x78) = 1;
    }
}
