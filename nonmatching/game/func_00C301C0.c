/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002CA180(s32);
extern int func_002DCA30(void);
s32 func_002C7D80(s32);                             /* extern */
s32 func_009A0270();                                /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00C2FE10(s32, void *);                     /* extern */

s32 func_00C301C0(void) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 0;
    if (func_009A0270() & 0xFF) {
        if ((func_009E1C90(0) & 0xFF) == 4) {
            if ((func_009E1C90(1) & 0xFF) == 1) {
                if (func_002DCA30() == 0) {
                    var_s2 = 0;
                    do {
                        temp_s1 = func_002C7D80(var_s2);
                        var_s0 |= func_00C2FE10(temp_s1, func_002CA180(var_s2));
                        var_s2 += 1;
                    } while (var_s2 < 2);
                    return var_s0;
                }
                return 0;
            }
            goto block_7;
        }
block_7:
        return 0;
    }
    return 0;
}
