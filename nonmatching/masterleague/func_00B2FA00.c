/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2FBB0(void);
extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
void func_00B2FA00(void) {
    u32 temp_v0;

    temp_v0 = func_00B2FBB0();
    if (temp_v0 != 0) {
        func_001D7F10(M2C_FIELD(temp_v0, void **, 8));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0xC));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x10));
        func_001D4E00(M2C_FIELD(temp_v0, void **, 4));
    }
}
