/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_002F4E10(void *);
extern u32 func_00B06560(void);
void func_00B06000(void) {
    u32 temp_v0;

    temp_v0 = func_00B06560();
    if (temp_v0 != 0) {
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x14));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0x18));
        func_002F4E10(M2C_FIELD(temp_v0, void **, 0x28));
    }
}
