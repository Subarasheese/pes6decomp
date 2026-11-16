/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(void *, void *, s32);
extern char D_00CCAF40[];

void *func_00C183B0(void *arg0) {
    char *var_s0 = arg0;
    if (var_s0 != 0) {
        func_001C4730(var_s0, D_00CCAF40, 4);
        var_s0 += 4;
    }
    return var_s0;
}
