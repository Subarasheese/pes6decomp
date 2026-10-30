/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FF47[];
extern void *D_00520080;
extern void *D_00520088;

void func_00188A60(s32 *arg0) {
    if (arg0 != NULL) {
        D_00520080 = arg0 + *arg0;
        D_00520088 = arg0 + *(arg0 + ((((*(u8 *)D_0051FF47) != 0) ? 2 : 1) * 4));
        return;
    }
    D_00520080 = NULL;
    D_00520088 = NULL;
}
