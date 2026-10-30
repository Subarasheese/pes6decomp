/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void *D_003AE9D8;

void func_0087C8D0(M2C_UNK arg0, s16 arg1) {
    func_001D7D80(M2C_FIELD(D_003AE9D8, void **, 8), arg1);
}
