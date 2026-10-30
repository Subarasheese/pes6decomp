/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_0065EF68;
extern char D_0065EF70[];
extern char D_0065EF78[];
extern char D_0065EF88[];

void func_00656A10(void) {
    if (D_0065EF68 != NULL) {
        if (D_0065EF68 != NULL) {
            func_00153FA0(D_0065EF68);
        }
        D_0065EF68 = NULL;
        (*(s32 *)D_0065EF88) = 0;
        (*(s32 *)D_0065EF70) = 0;
        (*(s32 *)D_0065EF78) = 0;
    }
}
