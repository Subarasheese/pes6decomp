/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F5120(s32);
void func_001D7FA0(void *arg0) {
    s32 temp_a0_3;
    s32 temp_a5;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_s1;
    u16 temp_a0_4;
    u16 temp_a3;
    u16 temp_a4;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a2;
    void **var_a3_2;
    void *temp_s0;
    void *var_a0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1C);
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0);
    var_s1 = 0;
    if (temp_a0 != 0) {
        var_a1 = 0;
        if ((s32) temp_a0 > 0) {
            if ((s32) temp_a0 >= 9) {
                temp_a0_2 = M2C_FIELD(temp_s0, u8 *, 0);
                var_a4 = 0;
                var_a2 = 0;
                if (((s32) temp_a0_2 >= 0) && ((s32) temp_a0_2 < 0x7FFFFFFF)) {
                    var_a2 = 1;
                }
                if (var_a2 != 0) {
                    temp_a0_3 = M2C_FIELD(temp_s0, u8 *, 0) & 0x80000000;
                    var_a3 = 1;
                    if ((temp_a0_3 == 0) && (temp_a0_3 != 0)) {
                        var_a3 = 0;
                    }
                    if (var_a3 != 0) {
                        var_a4 = 1;
                    }
                }
                if (var_a4 != 0) {
                    var_a0 = M2C_FIELD(temp_s0, void **, 0xC);
                    do {
                        var_a1 += 8;
                        temp_a5 = var_s1 + M2C_FIELD(M2C_FIELD(var_a0, void **, 0), u16 *, 4) + M2C_FIELD(M2C_FIELD(var_a0, void **, 4), u16 *, 4) + M2C_FIELD(M2C_FIELD(var_a0, void **, 8), u16 *, 4) + M2C_FIELD(M2C_FIELD(var_a0, void **, 0xC), u16 *, 4) + M2C_FIELD(M2C_FIELD(var_a0, void **, 0x10), u16 *, 4) + M2C_FIELD(M2C_FIELD(var_a0, void **, 0x14), u16 *, 4);
                        temp_a4 = M2C_FIELD(M2C_FIELD(var_a0, void **, 0x18), u16 *, 4);
                        temp_a3 = M2C_FIELD(M2C_FIELD(var_a0, void **, 0x1C), u16 *, 4);
                        var_a0 += 0x20;
                        var_s1 = temp_a5 + temp_a4 + temp_a3;
                    } while (var_a1 < (temp_a0 - 8));
                }
            }
            temp_a2 = M2C_FIELD(temp_s0, u8 *, 0);
            if (var_a1 < (s32) temp_a2) {
                var_a3_2 = M2C_FIELD(temp_s0, void **, 0xC) + (var_a1 * 4);
                do {
                    var_a1 += 1;
                    temp_a0_4 = M2C_FIELD(*var_a3_2, u16 *, 4);
                    var_a3_2 += 4;
                    var_s1 += temp_a0_4;
                } while (var_a1 < (s32) temp_a2);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 0x10;
        if (var_s1 != 0) {
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 0x20);
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 0x10);
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + func_001F5120((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), u8 *, 3)));
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 0x10);
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 0x10);
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + (M2C_FIELD(temp_s0, u8 *, 0) * 0x10));
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + (var_s1 * 0x30));
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 0x20);
            M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 0x10);
        }
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
