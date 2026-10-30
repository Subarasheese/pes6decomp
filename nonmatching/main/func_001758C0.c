/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK DTR_Stop(s32);                         /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];

void func_001758C0(void *arg0, s8 arg1) {
    s32 *var_s0;
    s32 temp_a0_2;
    s8 temp_a0;
    s8 var_s1;

    temp_a0 = M2C_FIELD(arg0, s8 *, 0x52);
    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        M2C_FIELD(arg0, s8 *, 0x58) = arg1;
        if (arg1 != 1) {
            if (temp_a0 > 0) {
                var_s1 = temp_a0;
                var_s0 = arg0 + 0x10;
                do {
                    temp_a0_2 = *var_s0;
                    var_s0 += 4;
                    var_s1 -= 1;
                    DTR_Stop(temp_a0_2);
                    M2C_FIELD(arg0, s8 *, 0x59) = 1;
                    M2C_FIELD(arg0, s8 *, 0x58) = 0;
                } while (var_s1 != 0);
            }
        }
    }
}
