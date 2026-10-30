/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEF30(void *, s8);
extern void func_001D7840(void *, s8);
extern char D_00924290[];
extern void *D_009242E8;
extern void *D_009242EC;
extern void *D_009242F0;

void func_0091D640(s32 arg0) {
    M2C_UNK *var_s1;
    s32 var_s2;
    s8 temp_s0;

    temp_s0 = arg0 & 0xFF;
    func_001D7840(D_009242E8, temp_s0);
    func_001D7840(D_009242EC, temp_s0);
    func_001D7840(D_009242F0, temp_s0);
    var_s2 = 0;
    var_s1 = ((void *)D_00924290);
    do {
        func_001DEF30(M2C_FIELD(M2C_FIELD(var_s1, void **, 0x64), void **, 0xC), temp_s0 & 0xFF);
        var_s2 += 1;
        var_s1 += 8;
    } while (var_s2 < 8);
}
