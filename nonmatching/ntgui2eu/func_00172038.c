/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
M2C_UNK func_00172508(void *);                      /* extern */
M2C_UNK func_00173868(void *);                      /* extern */
M2C_UNK func_00189798(void *);                      /* extern */
M2C_UNK func_00189948(void *, void *, void *, void *); /* extern */
M2C_UNK func_0018C748(void *);                      /* extern */
extern M2C_UNK (*D_005C144C)();

void func_00172038(void *arg0) {
    void *temp_s1;
    void *temp_v1;
    void *var_a2;
    void *var_a3;

    D_005C144C();
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) << 6) + 0xB00));
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0xF0) + 0x920));
        func_00173868(arg0);
        if (M2C_FIELD(arg0, s32 *, 0xD00) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0xD0C) == 0) {
                temp_s1 = arg0 + 0xBA8;
                func_00189798(temp_s1);
                temp_v1 = arg0 + 0xCD0;
                var_a3 = arg0 + 0xBE0;
                if (M2C_FIELD(arg0, s32 *, 0xBC8) != 0) {
                    var_a2 = temp_v1;
                } else {
                    var_a2 = var_a3;
                    var_a3 = temp_v1;
                }
                func_00189948(temp_s1, arg0 + 0xBD0, var_a2, var_a3);
                func_00172508(arg0);
                func_001652A0(M2C_FIELD(arg0, s32 *, 0x914));
            }
        }
    } else {
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x910));
    }
}
