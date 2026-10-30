/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_008C5D40(void *);                      /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */

void func_008E16C0(void *arg0) {
    s32 var_a0;
    void *var_v1;

    func_002DC1D0(M2C_FIELD(arg0, s32 *, 0x5C));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x60));
    func_008C5D70(arg0);
    var_a0 = 0;
    var_v1 = arg0;
    do {
        M2C_FIELD(var_v1, s32 *, 0x24) = 0;
        var_a0 += 7;
        M2C_FIELD(var_v1, s32 *, 0x28) = 0;
        M2C_FIELD(var_v1, s32 *, 0x2C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x30) = 0;
        M2C_FIELD(var_v1, s32 *, 0x34) = 0;
        M2C_FIELD(var_v1, s32 *, 0x38) = 0;
        M2C_FIELD(var_v1, s32 *, 0x3C) = 0;
        var_v1 += 0x1C;
    } while (var_a0 < 0xE);
    M2C_FIELD(arg0, s8 *, 0x22) = 1;
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
    M2C_FIELD(arg0, s8 *, 0x21) = 0xB;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, void **, 0x60) = NULL;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    func_008C5D40(arg0);
}
