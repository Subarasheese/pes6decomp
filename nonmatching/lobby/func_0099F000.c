/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009BCFB0(s32);                         /* extern */

s32 func_0099F000(void *arg0) {
    s32 temp_a0_2;
    s32 var_s1;
    void *temp_a0;
    void *temp_a0_3;
    void *var_s0;

    if (arg0 == NULL) {
        return 5;
    }
    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_009BCFB0(M2C_FIELD(var_s0, s32 *, 0x28));
        var_s1 += 1;
        M2C_FIELD(var_s0, s32 *, 0x28) = 0;
        var_s0 += 4;
    } while (var_s1 < 3);
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_2 != 0) {
        func_002DF960(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_a0_3 != NULL) {
        func_001D7F10(temp_a0_3);
        M2C_FIELD(arg0, void **, 0x24) = NULL;
    }
    func_0099C7C0(arg0);
    return 0;
}
