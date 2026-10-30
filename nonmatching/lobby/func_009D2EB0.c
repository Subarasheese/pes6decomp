/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern char D_00591BE4[];
extern char D_00A7DE08[];

void func_009D2EB0(void) {
    s32 var_s2;
    s8 temp_s1;
    u8 temp_s0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1_2;
    void *temp_v1_3;

    var_s2 = 0;
    do {
        temp_a0 = (*(s32 *)D_00A7DE08) + var_s2;
        temp_v1 = M2C_FIELD(temp_a0, u8 *, 7);
        if ((s32) temp_v1 > 0) {
            temp_s0 = M2C_FIELD(temp_a0, u8 *, 5);
            if (((s32) temp_s0 >= 0) && ((s32) temp_s0 < 5)) {
                temp_s1 = (((s32) (((u32) (temp_v1 & 0xFF) / (u32) ((u8) (*(u8 *)D_00591BE4) >> 1)) & 0xFF) % 2) == 0) & 0xFF;
                temp_v1_2 = M2C_FIELD(((*(s32 *)D_00A7DE08) + (var_s2 * 0x14) + (temp_s0 * 4)), void **, 0x44);
                if (temp_v1_2 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v1_2, void **, 0xC), temp_s1);
                }
                if (temp_s0 != 4) {
                    temp_v1_3 = M2C_FIELD(((*(s32 *)D_00A7DE08) + (var_s2 * 4)), void **, 0x3C);
                    if (temp_v1_3 != NULL) {
                        func_001DF4F0(M2C_FIELD(temp_v1_3, void **, 0xC), temp_s1);
                    }
                }
                temp_a0_2 = (*(s32 *)D_00A7DE08) + var_s2;
                M2C_FIELD(temp_a0_2, u8 *, 7) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 7) - 1);
            }
        }
        var_s2 += 1;
    } while (var_s2 < 2);
}
