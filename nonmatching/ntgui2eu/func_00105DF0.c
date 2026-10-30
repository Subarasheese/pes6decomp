/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001059F8(u32, s32, s32, s32);
extern s32 func_00105958(void);
void func_00105DF0(s32 arg0, u32 arg1) {
    if (arg0 == 0) {
        func_001059F8(0x2200000CU, (s32) ((u32) (((arg1 >= 0x10U) ? 0xFU : arg1) * func_00105958()) / 100U), 0, 0);
    }
}
