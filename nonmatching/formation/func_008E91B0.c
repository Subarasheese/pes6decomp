/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008C5D40(void *, s32);                 /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */

void func_008E91B0(void *arg0) {
    s32 var_a1;
    void *temp_v1;
    void *var_a0;

    func_002DF960(M2C_FIELD(arg0, s32 *, 0x34));
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x30));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x38));
    func_008C5D70(arg0 + 0x10);
    var_a1 = 0;
    var_a0 = arg0;
    do {
        temp_v1 = arg0 + var_a1;
        M2C_FIELD(temp_v1, s8 *, 1) = 0;
        var_a1 += 6;
        M2C_FIELD(var_a0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_v1, s8 *, 2) = 0;
        M2C_FIELD(var_a0, s32 *, 0x40) = 0;
        M2C_FIELD(temp_v1, s8 *, 3) = 0;
        M2C_FIELD(var_a0, s32 *, 0x44) = 0;
        M2C_FIELD(temp_v1, s8 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_v1, s8 *, 5) = 0;
        M2C_FIELD(var_a0, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_v1, s8 *, 6) = 0;
        M2C_FIELD(var_a0, s32 *, 0x50) = 0;
        var_a0 += 0x18;
    } while (var_a1 < 0xC);
    M2C_FIELD(arg0, void **, 0x30) = NULL;
    M2C_FIELD(arg0, void **, 0x38) = NULL;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_008C5D40(arg0 + 0x10, var_a1);
}
