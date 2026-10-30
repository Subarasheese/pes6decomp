/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern char D_00591BE4[];

void func_009DB740(void *arg0) {
    s32 var_s2;
    s8 var_s1;
    u8 temp_s0;
    u8 temp_v1_2;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;

    var_s2 = 0;
    do {
        temp_s0 = M2C_FIELD(arg0, u8 *, 0x126);
        if (((s32) temp_s0 >= 0) && ((s32) temp_s0 < 5)) {
            temp_v1 = arg0 + var_s2;
            temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x124);
            if ((s32) temp_v1_2 > 0) {
                if (((s32) (((u32) (temp_v1_2 & 0xFF) / (u32) ((u8) (*(u8 *)D_00591BE4) >> 1)) & 0xFF) % 2) == 0) {
                    var_s1 = 1;
                } else {
                    var_s1 = 0;
                }
                M2C_FIELD(temp_v1, u8 *, 0x124) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x124) - 1);
            } else {
                var_s1 = 1;
            }
            temp_v1_3 = M2C_FIELD((arg0 + (var_s2 * 0x14) + (temp_s0 * 4)), void **, 0xD0);
            if (temp_v1_3 != NULL) {
                func_001DF4F0(M2C_FIELD(temp_v1_3, void **, 0xC), var_s1);
            }
            if (temp_s0 != 4) {
                temp_v1_4 = M2C_FIELD((arg0 + (var_s2 * 4)), void **, 0xC8);
                if (temp_v1_4 != NULL) {
                    func_001DF4F0(M2C_FIELD(temp_v1_4, void **, 0xC), var_s1);
                }
            }
        }
        var_s2 += 1;
    } while (var_s2 < 2);
}
