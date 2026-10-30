/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A5F70[];
extern char D_008A9A40[];
extern char D_008A9BA4[];

M2C_UNK *func_00822730(void) {
    s8 var_v0;

    if ((*(s32 *)D_008A4398) == 0) {
        return NULL;
    }
    if (((void *)D_008A5F70) == NULL) {
        return NULL;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = 0;
    } else if (((void *)D_008A5F70) == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = (*(s8 *)D_008A9A40);
    }
    if (((s64) ((s64) var_v0 << 0x38) >> 0x38) == 0) {
        return NULL;
    }
    return ((void *)D_008A9BA4);
}
