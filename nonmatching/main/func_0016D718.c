/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00114990(unsigned int);
s32 func_00114B20();                                /* extern */
M2C_UNK func_0016D5C0(M2C_UNK);                     /* extern */
s32 func_0017A220(s32 *);                           /* extern */
extern char D_003850D4[];

s32 func_0016D718(u32 arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;

    var_v0 = func_0017A220(((void *)D_003850D4));
    var_s1 = 0;
    if (var_v0 != 0) {
        func_0016D5C0(0x9600);
        temp_s0 = func_00114990(arg0);
        func_0016D5C0(0x9601);
        if (temp_s0 == 0) {
            var_s1 = func_00114B20();
        }
        (*(s32 *)D_003850D4) = 0;
        var_v0 = var_s1;
    }
    return var_v0;
}
