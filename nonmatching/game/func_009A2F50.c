/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A36A0(s32);                         /* extern */
s32 func_00B29B90();                                /* extern */
s32 func_00B29C80();                                /* extern */
s32 func_00B29E20(u8);                              /* extern */
extern s32 D_003EA710;
extern char D_00591C09[];
extern char D_00591DD6[];

void func_009A2F50(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;

    var_s1 = 0;
    if ((*(u8 *)D_00591DD6) != 0) {
        var_s0 = 1;
        if ((*(u8 *)D_00591C09) == 5) {
            var_v1 = (*(u8 *)D_00591C09) == 5;
            if (var_v1 != 0) {
                var_v1 = func_00B29E20((*(u8 *)D_00591C09)) != 0;
                if (var_v1 != 0) {
                    var_v1 = func_00B29B90() != 0;
                }
                if (var_v1 == 0) {
                    var_v1 = func_00B29C80() != 0;
                }
            }
            if (var_v1 == 0) {
                var_s0 = 0;
            }
        }
        if (var_s0 != 0) {
            var_s1 = 1;
        }
    }
    if (var_s1 != 0) {
        func_009A36A0(D_003EA710);
    }
}
