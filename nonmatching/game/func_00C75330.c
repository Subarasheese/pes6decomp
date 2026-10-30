/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_002E4570(void *);
M2C_UNK func_002DF960(s32, s32, s8);                /* extern */

void func_00C75330(void *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;
    s64 temp_s1;
    s64 temp_v1;
    u8 *var_s2;
    u8 temp_a0;
    void *var_s2_2;

    if (arg0 != NULL) {
        var_s1 = 0;
        var_s2 = arg0 + (M2C_FIELD(arg0, s8 *, 0) * 4) + 4;
        if (M2C_FIELD(arg0, s8 *, 1) > 0) {
            do {
                temp_a0 = *var_s2;
                temp_a1 = var_s1 + M2C_FIELD(arg0, s8 *, 0);
                temp_s0 = temp_a1 - M2C_FIELD(arg0, s8 *, 1);
                switch (temp_a0) {                  /* irregular */
                case 1:
                    func_002DF960(M2C_FIELD((arg0 + (temp_s0 * 4)), s32 *, 4), temp_a1, M2C_FIELD(arg0, s8 *, 1));
                    break;
                case 2:
                    func_002E4570(M2C_FIELD((arg0 + (temp_s0 * 4)), void **, 4));
                    break;
                }
                var_s1 += 1;
                M2C_FIELD((arg0 + (temp_s0 * 4)), s32 *, 4) = 0;
                var_s2 += 1;
            } while (var_s1 < M2C_FIELD(arg0, s8 *, 1));
        }
        var_s0 = 0;
        temp_v1 = M2C_FIELD(arg0, s8 *, 0) - M2C_FIELD(arg0, s8 *, 1);
        temp_s1 = (s64) (temp_v1 << 0x38) >> 0x38;
        M2C_FIELD(arg0, s8 *, 0) = (s8) temp_v1;
        if (temp_s1 > 0) {
            var_s2_2 = arg0;
            do {
                func_001D7F10(M2C_FIELD(var_s2_2, void **, 4));
                var_s0 += 1;
                M2C_FIELD(var_s2_2, void **, 4) = NULL;
                var_s2_2 += 4;
            } while (var_s0 < temp_s1);
        }
        M2C_FIELD(arg0, s8 *, 0) = 0;
    }
}
