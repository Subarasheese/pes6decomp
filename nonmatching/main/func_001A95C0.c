/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00147F00(void);
extern void func_00147ED0(s32);
extern char D_003B0FF0[];
extern char D_00521DE0[];

void func_001A95C0(void) {
    s32 sp38;
    M2C_UNK *sp3C;
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s1;

    if ((*(s32 *)D_003B0FF0) != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00521DE0);
        do {
            if (M2C_FIELD(var_s0, u8 *, 8) != 2) {

            } else {
                sp3C = var_s0;
                if (M2C_FIELD(var_s0, s32 *, 0x14) != 0) {
                    temp_a0 = M2C_FIELD(var_s0, u8 *, 0xA) + 0x5AA;
                    sp38 = temp_a0;
                    func_00147ED0(temp_a0);
                    func_00147F00();
                }
            }
            var_s1 += 1;
            var_s0 += 0x18;
        } while (var_s1 < 0x17);
    }
}
