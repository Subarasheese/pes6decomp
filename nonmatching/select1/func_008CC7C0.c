/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017B010(void *);
M2C_UNK func_00153340(void *, void *);              /* extern */

void func_008CC7C0(void *arg0) {
    void *temp_s1;

    if (M2C_FIELD(arg0, u32 *, 0x20) & 1) {
        temp_s1 = M2C_FIELD(arg0, void **, 4);
        func_00153340(temp_s1, arg0 + 8);
        M2C_FIELD(temp_s1, M2C_UNK (**)(void *), 0x50)(temp_s1);
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x20) >> 1) & 1) {
        func_0017B010(arg0 + 0x10);
    }
}
