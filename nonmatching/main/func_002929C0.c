/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];
extern char D_005A2336[];

u8 func_002929C0(void) {
    u8 *var_v0;
    u8 *var_v0_2;
    u8 var_v0_3;
    u8 var_v1;
    u8 var_v1_2;

    if (((void *)D_005A2330) != NULL) {
        var_v1 = (*(u8 *)D_005A2330);
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 2) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_005A2336);
    }
    if (var_v0_2 != NULL) {
        var_v0_3 = *var_v0_2;
    } else {
        var_v0_3 = 0;
    }
    if (var_v0_3 == 0) {
        return 0U;
    }
    if (((void *)D_005A2330) != NULL) {
        var_v1_2 = (*(u8 *)D_005A2330);
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 != 2) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_005A2336);
    }
    return M2C_FIELD(var_v0, u8 *, 7);
}
