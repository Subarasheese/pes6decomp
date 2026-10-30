/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF2F0(void *);
extern void func_001DF2B0(void *);
void func_00973720(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 != 1) {
            func_001DF2B0(M2C_FIELD(arg0, void **, 0xC));
        } else {
            func_001DF2F0(M2C_FIELD(arg0, void **, 0xC));
        }
    }
}
