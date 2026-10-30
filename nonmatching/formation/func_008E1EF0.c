/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008B4680(M2C_UNK);                     /* extern */
M2C_UNK func_008C5D40(void *, void *, s32);         /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */

void func_008E1EF0(void *arg0) {
    s32 var_a2;
    void *temp_a0;
    void *var_a1;

    func_002DF960(M2C_FIELD(arg0, s32 *, 0x34));
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x30));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x38));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x3C));
    func_008C5D70(arg0);
    M2C_FIELD(arg0, void **, 0x30) = NULL;
    var_a2 = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_a1 = arg0;
    M2C_FIELD(arg0, void **, 0x38) = NULL;
    M2C_FIELD(arg0, void **, 0x3C) = NULL;
    do {
        temp_a0 = arg0 + var_a2;
        M2C_FIELD(temp_a0, s8 *, 0x20) = 1;
        var_a2 += 8;
        M2C_FIELD(var_a1, s32 *, 0x40) = 0;
        M2C_FIELD(var_a1, s32 *, 0x84) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x21) = 1;
        M2C_FIELD(var_a1, s32 *, 0x44) = 0;
        M2C_FIELD(var_a1, s32 *, 0x88) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x22) = 1;
        M2C_FIELD(var_a1, s32 *, 0x48) = 0;
        M2C_FIELD(var_a1, s32 *, 0x8C) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x23) = 1;
        M2C_FIELD(var_a1, s32 *, 0x4C) = 0;
        M2C_FIELD(var_a1, s32 *, 0x90) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x24) = 1;
        M2C_FIELD(var_a1, s32 *, 0x50) = 0;
        M2C_FIELD(var_a1, s32 *, 0x94) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x25) = 1;
        M2C_FIELD(var_a1, s32 *, 0x54) = 0;
        M2C_FIELD(var_a1, s32 *, 0x98) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x26) = 1;
        M2C_FIELD(var_a1, s32 *, 0x58) = 0;
        M2C_FIELD(var_a1, s32 *, 0x9C) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x27) = 1;
        M2C_FIELD(var_a1, s32 *, 0x5C) = 0;
        M2C_FIELD(var_a1, s32 *, 0xA0) = 0;
        var_a1 += 0x20;
    } while (var_a2 < 0x10);
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    func_008C5D40(arg0, var_a1, var_a2);
    func_008B4680(0);
}
