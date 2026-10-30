/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0065C124;
extern char D_0065C134[];

void func_00624AD0(void *arg0) {
    s32 var_a3;
    void *temp_a1;
    void *var_a2;

    temp_a1 = M2C_FIELD(arg0, void **, 0x44);
    var_a3 = 0;
    D_0065C124 = temp_a1;
    var_a2 = temp_a1 + 0xC;
    if (M2C_FIELD(temp_a1, u16 *, 0x10) != 0xFFFF) {
        do {
            var_a2 += 6;
            var_a3 += 1;
        } while (M2C_FIELD(var_a2, u16 *, 4) != 0xFFFF);
    }
    (*(s32 *)D_0065C134) = var_a3;
}
