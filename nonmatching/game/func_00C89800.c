/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
extern void *D_00CCCE38;
extern char D_00CCCE4C[];

void func_00C89800(u32 arg0) {
    void **temp_s0;

    if (arg0 < 0x7FU) {
        temp_s0 = ((void *)D_00CCCE4C) + (arg0 * 4);
        func_001EDBA0(D_00CCCE38, *temp_s0);
        *temp_s0 = NULL;
    }
}
