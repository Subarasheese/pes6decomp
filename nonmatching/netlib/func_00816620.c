/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00816300(s32 *);                       /* extern */
extern char D_008A35D8[];
extern char D_008A35E8[];
extern char D_008A35F0[];

s32 func_00816620(void) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 1;
    (*(s32 *)D_008A35D8) = 1;
    (*(s32 *)D_008A35E8) = 1;
    if (((void *)D_008A35F0) != NULL) {
        func_00816300(((void *)D_008A35F0));
        if (((void *)D_008A35F0) == NULL) {
            var_v1 = 9;
        } else {
            var_v1 = (*(s32 *)D_008A35F0);
        }
        if (var_v1 == 1) {
            return 1;
        }
        var_v0 = 0;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
