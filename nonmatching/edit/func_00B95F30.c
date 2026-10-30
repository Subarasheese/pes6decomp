/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_001E6C50(void *);
M2C_UNK func_00629BC0(M2C_UNK *);                   /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
extern char D_00CE3710[];

void func_00B95F30(void) {
    s32 var_s0;
    void *temp_v0;

    func_00B91440(0x12);
    func_00629BC0(((void *)D_00CE3710));
    var_s0 = 0x7346;
    do {
        temp_v0 = func_001E6E10(var_s0);
        if (temp_v0 != NULL) {
            func_001E6C50(temp_v0);
        }
        var_s0 += 1;
    } while (var_s0 < 0x73E6);
}
