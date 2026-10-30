/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A4728();                            /* extern */
M2C_UNK func_001A4778();                            /* extern */
extern char D_012032C0[];

void func_0019F070(void *arg0, s32 arg1) {
    void *temp_v0;
    void *var_a0;
    void *var_v1;

    func_001A4728();
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    if (M2C_FIELD(((void *)D_012032C0), void **, 0x28) == NULL) {
        M2C_FIELD(((void *)D_012032C0), void **, 0x28) = arg0;
    } else {
        var_a0 = M2C_FIELD(((void *)D_012032C0), void **, 0x28);
        var_v1 = M2C_FIELD(var_a0, void **, 0x14);
        if (var_v1 != NULL) {
            do {
                var_a0 = var_v1;
                temp_v0 = M2C_FIELD(var_a0, void **, 0x14);
                var_v1 = temp_v0;
            } while (temp_v0 != NULL);
        }
        M2C_FIELD(var_a0, void **, 0x14) = arg0;
    }
    func_001A4778();
}
