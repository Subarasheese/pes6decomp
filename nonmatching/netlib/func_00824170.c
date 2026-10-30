/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A5F70[];
extern char D_008AA0E2[];
extern char D_008AA0E4[];
extern char D_008AA0E8[];
extern char D_008AA0EB[];

s32 func_00824170(s16 arg0, s16 arg1) {
    if ((*(s32 *)D_008A4398) == 0) {
        return 0;
    }
    if (((void *)D_008A5F70) == NULL) {
        return 0;
    }
    (*(s16 *)D_008AA0E2) = arg0;
    if (((*(s32 *)D_008A4398) != 0) && (((void *)D_008A5F70) != NULL)) {
        (*(s16 *)D_008AA0E8) = arg1;
    }
    (*(s32 *)D_008AA0E4) = 1;
    (*(s8 *)D_008AA0EB) = 3;
    return 1;
}
