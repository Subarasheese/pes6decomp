/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D08E10(void *, s8);                  /* extern */
M2C_UNK func_00D10E80(void *, s8);                  /* extern */
M2C_UNK func_00D10EB0(void *, s32);                 /* extern */
void *func_00D137C0(s32, s32);                      /* extern */

s32 func_00D0B570(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;
    void *temp_s4;
    void *temp_s4_2;
    void *temp_v0;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            temp_s0 = M2C_FIELD(arg0, s32 *, 0x710);
            var_s1 = 0;
            do {
                temp_v0 = func_00D137C0(arg1, temp_s0 + var_s1);
                if (temp_v0 != NULL) {
                    temp_s4 = arg0 + (var_s1 << 6);
                    func_00D10EB0(temp_s4, M2C_FIELD(temp_v0, s32 *, 8));
                    func_00D10E80(temp_s4, M2C_FIELD(arg0, s8 *, 0xD78));
                } else {
                    temp_s4_2 = arg0 + (var_s1 << 6);
                    func_00D10EB0(temp_s4_2, 0);
                    func_00D10E80(temp_s4_2, 0);
                }
                var_s1 += 1;
            } while (var_s1 < 0x19);
            func_00D08E10(arg0 + 0x808, M2C_FIELD(arg0, s8 *, 0xD78));
            return 0;
        }
        goto block_4;
    }
block_4:
    return 1;
}
