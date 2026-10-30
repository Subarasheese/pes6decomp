/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_009EFEA0(void *arg0) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x10));
        var_s1 += 1;
        M2C_FIELD(var_s0, void **, 0x10) = NULL;
        var_s0 += 8;
    } while (var_s1 < 2);
}
