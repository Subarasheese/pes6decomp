/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
M2C_UNK func_00B2ACF0();                            /* extern */

void func_00BBA790(void **arg0) {
    func_00B2ACF0();
    func_00207BE0(M2C_FIELD(*arg0, void **, 4));
}
