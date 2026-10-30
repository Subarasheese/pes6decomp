/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern void *D_003EA8C8;
extern s32 D_003EA8CC;

void func_0093D850(void) {
    if (D_003EA8C8 != NULL) {
        func_001D4E00(D_003EA8C8);
        D_003EA8C8 = NULL;
        D_003EA8CC = 0;
    }
}
