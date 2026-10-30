/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001FC780(void);
M2C_UNK func_001DD560(s32);                         /* extern */
M2C_UNK func_00220240(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002CE4B0(s32);                         /* extern */
M2C_UNK func_00B9F890(M2C_UNK);                     /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern void *D_003EB104;
extern char D_00CBEE10[];
extern char D_00CEBA20[];

void func_00C00150(s32 arg0) {
    s32 *var_s0;
    s32 *var_s1;
    u32 var_s2;

    if (arg0 == 0) {
        func_00B9F890(0xC);
        return;
    }
    func_00B9F890(0xD);
    if (D_003EB104 != NULL) {
        func_00220240(0, 0x18);
        func_00153FA0(D_003EB104);
        D_003EB104 = NULL;
    }
    var_s2 = 0;
    var_s1 = ((void *)D_00CEBA20);
    var_s0 = ((void *)D_00CBEE10);
    do {
        if (*var_s1 != 0) {
            func_001DD560(*var_s0);
            *var_s1 = 0;
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 8U);
    func_002CE4B0(func_00C1B460(0));
    func_001FC780();
}
