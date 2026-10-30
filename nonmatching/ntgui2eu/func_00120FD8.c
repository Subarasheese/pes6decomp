/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001657E8(void *);
extern void *D_011D40E8;

void func_00120FD8(s32 *arg0, s32 *arg1) {
    *arg0 = 0;
    *arg1 = 0;
    if (D_011D40E8 != NULL) {
        func_001657E8(D_011D40E8);
    }
}
