/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F4F40(s32, s32);
extern s32 func_001E6C50(void *);
extern void func_001DB600(void *);
extern void func_00153FA0(void *);
void func_001D9B10(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0x28) == 3) {
            func_001F4F40(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
        }
        func_001E6C50(M2C_FIELD(arg0, void **, 0x18));
        func_001DB600(arg0);
        func_00153FA0(arg0);
    }
}
