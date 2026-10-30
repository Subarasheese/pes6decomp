/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(void *, void *);              /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
M2C_UNK func_001640E0(void *, void *);              /* extern */

void func_00167DD8(void *arg0) {
    void **temp_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;
    void *var_s0;
    void *var_s1;

    temp_s1 = arg0 + 0x840;
    var_s0 = temp_s1;
    if (M2C_FIELD(temp_s1, s32 *, 8) != temp_s1) {
        do {
            var_s0 = M2C_FIELD(var_s0, void **, 8);
            func_00163EE0(M2C_FIELD(var_s0, s32 *, 0x10));
        } while (M2C_FIELD(var_s0, s32 *, 8) != temp_s1);
    }
loop_6:
    if (M2C_FIELD(arg0, void **, 0x9B4) != (arg0 + 0x9B4)) {
        var_s1 = M2C_FIELD(arg0, void **, 0x9B4);
        temp_s3 = arg0 + 0x9B4;
        if (var_s1 != temp_s3) {
            do {
                temp_a0 = var_s1;
                temp_a1 = M2C_FIELD(var_s1, void **, 0);
                temp_s0 = M2C_FIELD(var_s1, void **, 8);
                M2C_FIELD(temp_a1, void ***, 4) = (void **) M2C_FIELD(var_s1, void ***, 4);
                temp_v1 = M2C_FIELD(var_s1, void ***, 4);
                temp_v0 = M2C_FIELD(var_s1, void **, 0);
                var_s1 = temp_a1;
                *temp_v1 = temp_v0;
                func_00135018(temp_a0, temp_a1);
                func_001640E0(temp_s0, arg0);
            } while (var_s1 != temp_s3);
        }
        goto loop_6;
    }
    func_001640E0(arg0, NULL);
}
