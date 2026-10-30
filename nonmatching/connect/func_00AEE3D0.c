/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
extern void *D_00B02B90;
extern void *D_00B02B94;
extern char D_00B02BA4[];
extern char D_00B02BAC[];

void func_00AEE3D0(void) {
    if ((*(s32 *)D_00B02BA4) != 0) {
        (*(s32 *)D_00B02BAC) = 0;
        return;
    }
    if (D_00B02B90 != NULL) {
        func_001EDBA0(D_00B02B90, D_00B02B94);
        D_00B02B94 = NULL;
    }
}
