/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
extern char D_005BFE2C[];

void func_00169738(void *arg0) {
    M2C_UNK (*temp_v0)(void *, s32, s32, s32, s32);
    void *temp_a0;
    void *temp_s2;
    void *temp_v1;
    void *var_s1;

    temp_s2 = arg0 + 0x840;
    var_s1 = temp_s2;
    if (M2C_FIELD(arg0, s32 *, 0x854) != 0) {
        if (M2C_FIELD(temp_s2, s32 *, 8) != temp_s2) {
            do {
                var_s1 = M2C_FIELD(var_s1, void **, 8);
                if (func_00163C30(M2C_FIELD(var_s1, void **, 0x10), (*(s32 *)D_005BFE2C)) != 0) {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, void *), 0x128)(arg0, M2C_FIELD(var_s1, void **, 0x10));
                } else {
                    temp_a0 = M2C_FIELD(var_s1, void **, 0x10);
                    temp_v1 = M2C_FIELD(temp_a0, void **, 0x4C);
                    if (M2C_FIELD(temp_v1, s32 *, 0x6C) != 0) {
                        temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(void *, s32, s32, s32, s32), 0xEC);
                        if (temp_v0 != NULL) {
                            temp_v0(temp_a0, M2C_FIELD(arg0, s32 *, 0x830), M2C_FIELD(arg0, s32 *, 0x834), M2C_FIELD(arg0, s32 *, 0x838), M2C_FIELD(arg0, s32 *, 0x83C));
                        }
                    }
                }
            } while (M2C_FIELD(var_s1, s32 *, 8) != temp_s2);
        }
    }
}
