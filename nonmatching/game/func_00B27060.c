/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEF4[];
extern char D_00CBBEF8[];
extern char D_00CBBEFC[];
extern char D_00CBBF00[];
extern char D_00CBBF04[];
extern char D_00CBBF08[];

void func_00B27060(void *arg0, void *arg1, void *arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s32 *)D_00CBBEF4);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (*(s32 *)D_00CBBEF8);
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (*(s32 *)D_00CBBEFC);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (*(s32 *)D_00CBBF00);
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, s32 *, 0) = (s32) (*(s32 *)D_00CBBF04);
        M2C_FIELD(arg2, s32 *, 4) = (s32) (*(s32 *)D_00CBBF08);
    }
}
