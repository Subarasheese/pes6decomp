/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */

void func_008E7F00(void *arg0) {
    s32 var_a0;
    s32 var_s1;
    void *var_s0;
    void *var_s2;

    var_s2 = arg0;
    func_002DF960(M2C_FIELD(arg0, s32 *, 8));
    func_001F1EA0(M2C_FIELD(var_s2, void **, 4));
    var_s1 = 0;
    var_s0 = var_s2;
    do {
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x14));
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x3C));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xA);
    func_001D7F10(M2C_FIELD(var_s2, void **, 0xC));
    func_001D7F10(M2C_FIELD(var_s2, void **, 0x10));
    M2C_FIELD(var_s2, s8 *, 0) = 0;
    var_a0 = 0;
    M2C_FIELD(var_s2, s8 *, 1) = 0;
    M2C_FIELD(var_s2, s8 *, 2) = 0;
    M2C_FIELD(var_s2, void **, 4) = NULL;
    M2C_FIELD(var_s2, s32 *, 8) = 0;
    M2C_FIELD(var_s2, void **, 0xC) = NULL;
    M2C_FIELD(var_s2, void **, 0x10) = NULL;
    do {
        M2C_FIELD(var_s2, s32 *, 0x14) = 0;
        var_a0 += 5;
        M2C_FIELD(var_s2, s32 *, 0x3C) = 0;
        M2C_FIELD(var_s2, s32 *, 0x64) = 0;
        M2C_FIELD(var_s2, s32 *, 0x18) = 0;
        M2C_FIELD(var_s2, s32 *, 0x40) = 0;
        M2C_FIELD(var_s2, s32 *, 0x68) = 0;
        M2C_FIELD(var_s2, s32 *, 0x1C) = 0;
        M2C_FIELD(var_s2, s32 *, 0x44) = 0;
        M2C_FIELD(var_s2, s32 *, 0x6C) = 0;
        M2C_FIELD(var_s2, s32 *, 0x20) = 0;
        M2C_FIELD(var_s2, s32 *, 0x48) = 0;
        M2C_FIELD(var_s2, s32 *, 0x70) = 0;
        M2C_FIELD(var_s2, s32 *, 0x24) = 0;
        M2C_FIELD(var_s2, s32 *, 0x4C) = 0;
        M2C_FIELD(var_s2, s32 *, 0x74) = 0;
        var_s2 += 0x14;
    } while (var_a0 < 0xA);
}
