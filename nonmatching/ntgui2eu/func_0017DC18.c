/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165C18(void *);
extern M2C_UNK (*D_005C14E8)();

void func_0017DC18(void *arg0) {
    D_005C14E8();
    func_00165C18(M2C_FIELD(arg0, void **, 0x910));
}
