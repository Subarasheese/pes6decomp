/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_002E4570(void *);
void func_008C5D70(void *arg0) {
    s32 var_s1;
    void *var_s0;

    func_002E4570(M2C_FIELD(arg0, void **, 4));
    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x10));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
