/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008BF3F0(void *);                      /* extern */
extern s32 D_003EA4E0;
extern char D_008EE750[];

void func_008B7480(s32 arg0, void *arg1) {
    s32 var_a0;
    void *var_s0;

    var_s0 = arg1;
    if (D_003EA4E0 == 0) {
        func_008BF3F0(((void *)D_008EE750) + (arg0 * 0x3224) + 0x208);
        var_a0 = 0;
        do {
            M2C_FIELD(var_s0, s16 *, 0x26) = 0;
            var_a0 += 8;
            M2C_FIELD(var_s0, s16 *, 0x28) = 0;
            M2C_FIELD(var_s0, s16 *, 0x2A) = 0;
            M2C_FIELD(var_s0, s16 *, 0x2C) = 0;
            M2C_FIELD(var_s0, s16 *, 0x2E) = 0;
            M2C_FIELD(var_s0, s16 *, 0x30) = 0;
            M2C_FIELD(var_s0, s16 *, 0x32) = 0;
            M2C_FIELD(var_s0, s16 *, 0x34) = 0;
            var_s0 += 0x10;
        } while (var_a0 < 0x20);
    }
}
