/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_0081D7E0(s32, M2C_UNK);                /* extern */
s32 func_0093CCC0();                                /* extern */
s32 func_0093D4B0();                                /* extern */
s32 func_00969B30();                                /* extern */
s32 func_0099AF50(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0099B690(s32, s32, M2C_UNK *);             /* extern */
extern char D_009FF278[];
extern char D_00A02A98[];
extern s32 *D_00A7DC00;

void func_009B0C40(s32 arg0) {
    s32 *temp_s1;
    s32 *var_s2;
    s32 *var_s3;
    s32 var_s4;

    temp_s1 = D_00A7DC00;
    M2C_FIELD(temp_s1, s32 *, 0x174) = func_0099AF50(M2C_FIELD(temp_s1, s32 *, 0), 3, 0);
    var_s4 = 0;
    var_s3 = ((void *)D_009FF278);
    var_s2 = temp_s1;
    do {
        M2C_FIELD(var_s2, s32 *, 0x178) = func_0099B690(M2C_FIELD(temp_s1, s32 *, 0x174), *var_s3, ((void *)D_00A02A98));
        var_s4 += 1;
        var_s3 += 4;
        var_s2 += 4;
    } while (var_s4 < 2);
    if (func_00969B30() != 0) {
        func_001D7D80(M2C_FIELD(temp_s1, s32 *, 0x174), 1);
        func_0081D7E0(M2C_FIELD(temp_s1, s32 *, 0x174), 1);
        return;
    }
    if ((arg0 != func_0093CCC0()) && (func_0093D4B0() != 0)) {
        func_001D7D80(M2C_FIELD(temp_s1, s32 *, 0x174), 0);
        func_0081D7E0(M2C_FIELD(temp_s1, s32 *, 0x174), 1);
        return;
    }
    if (func_0093D4B0() == 1) {
        func_0081D7E0(M2C_FIELD(temp_s1, s32 *, 0x174), 0);
    }
}
