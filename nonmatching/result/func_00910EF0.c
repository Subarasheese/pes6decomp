/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
void func_00910EF0(s32 arg0) {
    func_001D7D60((void *) arg0, arg0 & 0xFF);
}
