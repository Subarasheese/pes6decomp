/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165BF0(void *);
extern M2C_UNK (*D_005C14E0)();

void func_0017DBD8(void *arg0, s32 arg1) {
    D_005C14E0();
    func_00165BF0(M2C_FIELD(arg0, void **, 0x910));
}
