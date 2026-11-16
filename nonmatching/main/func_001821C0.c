/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00182770(void *);
extern void func_00153FA0(void *);
extern u8 *D_0051FF38;

void func_001821C0(void) {
    u8 *var_s1;
    s32 var_s0;

    var_s1 = D_0051FF38;
    var_s0 = 0;
    do {
        if (*(s32 *)var_s1 != 0) {
            func_00182770(var_s1);
        }
        var_s0 += 1;
        *(s32 *)var_s1 = 0;
        var_s1 += 0x60;
    } while (var_s0 < 0x1B);
    func_00153FA0(D_0051FF38);
    D_0051FF38 = NULL;
}
