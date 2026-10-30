/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
extern void **D_00A68D80;

void func_00979FF0(s32 arg0) {
    if (D_00A68D80 != NULL) {
        func_00213800(*D_00A68D80);
    }
}
