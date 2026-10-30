/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_0020A540(void);
void func_008E98F0(void *arg0) {
    if (arg0 != NULL) {
        func_001D7F10(M2C_FIELD(arg0, void **, 4));
        func_001D7F10(M2C_FIELD(arg0, void **, 8));
        func_0020A540();
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, void **, 4) = NULL;
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
}
