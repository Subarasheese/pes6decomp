/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001BB370(s32);                             /* extern */
s32 func_001BB4D0(s32);                             /* extern */
s32 func_001BBD70(s32);                             /* extern */

void func_001BC080(s32 *arg0) {
    s32 var_v1;

    if (arg0 != NULL) {
        var_v1 = 0;
        if (arg0 != NULL) {
            var_v1 = func_001BB370(func_001BB4D0(*arg0));
        }
        if (var_v1 != 0) {
            do {
                var_v1 = func_001BBD70(var_v1);
            } while (var_v1 != 0);
        }
    }
}
