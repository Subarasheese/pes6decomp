/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEF30(void *, s8);
extern void func_001D7840(void *, s8);
extern void *D_005228F0;
extern char D_00522910[];

void func_001B6380(s8 arg0) {
    M2C_UNK *var_s2;
    s32 var_s1_2;
    u32 var_s3;
    void **var_s1;

    var_s3 = 0;
    var_s2 = ((void *)D_00522910);
    var_s1 = &D_005228F0;
    do {
        func_001D7840(*var_s1, arg0);
        var_s3 += 1;
        var_s1 += 4;
    } while (var_s3 < 2U);
    var_s1_2 = 0;
    do {
        func_001DEF30(M2C_FIELD(var_s2, void **, 4), arg0);
        var_s1_2 += 1;
        var_s2 += 0xC;
    } while (var_s1_2 < 2);
}
