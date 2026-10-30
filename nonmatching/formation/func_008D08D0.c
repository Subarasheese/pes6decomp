/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1990(void *);
void func_008D08D0(void *arg0) {
    func_001F1990(M2C_FIELD(arg0, void **, 0x1C8));
    M2C_FIELD(arg0, void **, 0x1C8) = NULL;
}
