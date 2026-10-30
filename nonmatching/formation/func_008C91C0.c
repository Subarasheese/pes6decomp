/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_008C91C0(void *arg0) {
    func_001D7F10(M2C_FIELD(arg0, void **, 0));
    func_001D7F10(M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
