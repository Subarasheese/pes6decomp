/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void *D_00A7DB00;
extern char D_00A7DB08[];

void func_0099BE30(void) {
    if (D_00A7DB00 != NULL) {
        func_001F1EA0(D_00A7DB00);
        D_00A7DB00 = NULL;
        (*(s32 *)D_00A7DB08) = 0;
    }
}
