/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29B90();                                /* extern */
s32 func_00B29C80();                                /* extern */
s32 func_00B29E20();                                /* extern */
extern void *D_003EA710;
extern char D_00591C09[];
extern char D_00591DD6[];

s32 func_009A2C30(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    var_s1 = 0;
    if ((*(u8 *)D_00591DD6) != 0) {
        var_s0 = 1;
        if ((*(u8 *)D_00591C09) == 5) {
            var_v0 = (*(u8 *)D_00591C09) == 5;
            if (var_v0 != 0) {
                var_v0 = func_00B29E20() != 0;
                if (var_v0 != 0) {
                    var_v0 = func_00B29B90() != 0;
                }
                if (var_v0 == 0) {
                    var_v0 = func_00B29C80() != 0;
                }
            }
            if (var_v0 == 0) {
                var_s0 = 0;
            }
        }
        if (var_s0 != 0) {
            var_s1 = 1;
        }
    }
    if ((var_s1 != 0) && (M2C_FIELD(D_003EA710, s32 *, 0x6C) != 0)) {
        var_s2 = 1;
    }
    return var_s2;
}
