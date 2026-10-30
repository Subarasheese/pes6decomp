/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165BA0(void *);
extern M2C_UNK (*D_005C14D8)();

void func_00176530(void *arg0, s32 arg1) {
    D_005C14D8();
    func_00165BA0(M2C_FIELD(arg0, void **, 0x910));
}
