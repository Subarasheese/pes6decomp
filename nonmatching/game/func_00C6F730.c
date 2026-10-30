/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CA8464[];
extern char D_00CCBC80[];
extern M2C_UNK *D_00CCBC84;

void func_00C6F730(s32 arg0) {
    (*(s32 *)D_00CCBC80) = arg0;
    D_00CCBC84 = ((void *)D_00CA8464);
}
