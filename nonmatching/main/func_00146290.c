/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_00507AA8[];
extern char D_00509068[];

void func_00146290(void) {
    M2C_UNK *var_a1;
    u32 var_a2;

    var_a2 = 1;
    if ((*(s32 *)D_00509068) != 0) {
        var_a1 = ((void *)D_00507AA8);
        do {
            M2C_FIELD(var_a1, s32 *, 8) = 0;
            var_a2 += 1;
            var_a1 += 0x18;
        } while ((u32) *(u32 *)0x509068 >= var_a2);
    }
}
