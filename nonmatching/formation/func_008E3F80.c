/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
M2C_UNK func_008E3EA0(void *);                      /* extern */

void func_008E3F80(void *arg0) {
    s32 var_s2;
    s32 var_s2_2;
    u8 temp_s0;
    void *temp_s1;
    void *var_s1;
    void *var_s3;

    temp_s1 = M2C_FIELD(arg0, void **, 0x1E4);
    if (temp_s1 != NULL) {
        temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x23);
        if (M2C_FIELD(temp_s1, u16 *, 0) == 0xFFFF) {
            var_s2 = 0xB;
            if ((s32) temp_s0 >= 0xC) {
                var_s1 = arg0 + 0x2C;
                do {
                    func_001EF900(M2C_FIELD(var_s1, void **, 0x864), 0);
                    var_s2 += 1;
                    var_s1 += 4;
                } while (var_s2 < (s32) temp_s0);
            }
            return;
        }
        var_s2_2 = 0xB;
        if ((s32) temp_s0 >= 0xC) {
            var_s3 = arg0 + 0x2C;
            do {
                if ((M2C_FIELD((temp_s1 + M2C_FIELD((temp_s1 + var_s2_2), u8 *, 2)), u8 *, 0x46) != 0) && (var_s2_2 < (s32) M2C_FIELD(temp_s1, u8 *, 0x22)) && (var_s2_2 < (s32) M2C_FIELD(temp_s1, u8 *, 0x23))) {
                    func_001EF900(M2C_FIELD(var_s3, void **, 0x864), 1);
                } else {
                    func_001EF900(M2C_FIELD(var_s3, void **, 0x864), 0);
                }
                var_s2_2 += 1;
                var_s3 += 4;
            } while (var_s2_2 < (s32) temp_s0);
        }
        func_008E3EA0(arg0);
    }
}
