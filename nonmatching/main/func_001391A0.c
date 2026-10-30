/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00105D98(unsigned int, unsigned int);
u32 func_00139220(u32);                             /* extern */
u32 func_00146CA0();                                /* extern */

u32 func_001391A0(void) {
    u32 temp_v0;
    u32 var_s1;

    var_s1 = func_00146CA0();
    if (var_s1 < 0xCU) {
        var_s1 = 0xC;
    }
    do {
        temp_v0 = func_00139220(var_s1);
    } while (temp_v0 == 0);
    func_00105D98(temp_v0, (temp_v0 + (1 << var_s1)) - 1);
    return temp_v0;
}
