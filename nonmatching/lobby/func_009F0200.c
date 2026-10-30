/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
void func_009F0200(void *arg0, s32 arg1, s64 arg2) {
    s32 var_a3;
    s32 var_s3;
    s8 temp_s2;
    void *var_a2;
    void *var_s4;

    var_a3 = 0;
    if (arg1 > 0) {
        var_a2 = arg0;
loop_2:
        if (M2C_FIELD(var_a2, s8 *, 5) != M2C_FIELD(var_a2, s8 *, 4)) {
            var_s3 = 0;
            if (arg1 > 0) {
                var_s4 = arg0;
                do {
                    temp_s2 = M2C_FIELD(var_s4, s8 *, 4);
                    func_001D7D80(M2C_FIELD(var_s4, void **, 0), (s16) ((s64) (arg2 << 0x30) >> 0x30));
                    func_001D7D60(M2C_FIELD(var_s4, void **, 0), temp_s2 & 0xFF);
                    var_s3 += 1;
                    M2C_FIELD(var_s4, s8 *, 5) = temp_s2;
                    var_s4 += 8;
                } while (var_s3 < arg1);
            }
            return;
        }
        var_a3 += 1;
        var_a2 += 8;
        if (var_a3 >= arg1) {

        } else {
            goto loop_2;
        }
    }
}
