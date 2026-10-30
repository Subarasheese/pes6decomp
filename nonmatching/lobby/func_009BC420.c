/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001D6E40(void *);
M2C_UNK func_002DF960(s32);                         /* extern */

void func_009BC420(void *arg0) {
    s32 var_s1_2;
    s32 var_s2;
    void *var_s1;
    void *var_s2_2;

    if ((M2C_FIELD(arg0, s8 *, 4) != 1) && (M2C_FIELD(arg0, u8 *, 5) == 1)) {
        var_s2 = 0;
        var_s1 = arg0;
        do {
            func_001D6E40(M2C_FIELD(var_s1, void **, 0x8C));
            var_s2 += 1;
            M2C_FIELD(var_s1, void **, 0x8C) = NULL;
            var_s1 += 4;
        } while (var_s2 < 6);
        var_s1_2 = 0;
        var_s2_2 = arg0;
        do {
            func_001D7F10(M2C_FIELD(var_s2_2, void **, 0xC));
            var_s1_2 += 1;
            M2C_FIELD(var_s2_2, void **, 0xC) = NULL;
            var_s2_2 += 4;
        } while (var_s1_2 < 6);
        func_001D7F10(M2C_FIELD(arg0, void **, 0x24));
        M2C_FIELD(arg0, void **, 0x24) = NULL;
        func_001D7F10(M2C_FIELD(arg0, void **, 0x28));
        M2C_FIELD(arg0, void **, 0x28) = NULL;
        func_002DF960(M2C_FIELD(arg0, s32 *, 0xA8));
        M2C_FIELD(arg0, s32 *, 0xA8) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}
