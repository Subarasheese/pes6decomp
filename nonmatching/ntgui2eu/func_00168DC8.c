/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
M2C_UNK func_00165D68(void *);                      /* extern */
extern char D_005BFE2C[];

void func_00168DC8(void *arg0) {
    void *temp_s1;
    void *var_s0;

    temp_s1 = arg0 + 0x840;
    var_s0 = temp_s1;
    if (M2C_FIELD(arg0, s32 *, 0x854) != 0) {
        if (M2C_FIELD(temp_s1, s32 *, 8) != temp_s1) {
            do {
                var_s0 = M2C_FIELD(var_s0, void **, 8);
                if (func_00163C30(M2C_FIELD(var_s0, void **, 0x10), (*(s32 *)D_005BFE2C)) != 0) {
                    func_00168DC8(M2C_FIELD(var_s0, void **, 0x10));
                }
                func_00165D68(M2C_FIELD(var_s0, void **, 0x10));
            } while (M2C_FIELD(var_s0, s32 *, 8) != temp_s1);
        }
    }
}
