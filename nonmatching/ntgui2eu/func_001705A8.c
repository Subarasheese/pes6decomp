/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165778(void *);
void func_001705A8(void *arg0) {
    func_00165778(M2C_FIELD(arg0, void **, 0x890));
    func_00165778(M2C_FIELD(arg0, void **, 0x894));
}
