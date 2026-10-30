/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F0020(void *, f32);
extern void func_001F3C40(void *, s8);
void func_002F61F0(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_002F0020(arg0 + 0x10, (f32) arg1);
        func_001F3C40(M2C_FIELD(arg0, void **, 0xA8), arg1 & 0xFF);
    }
}
