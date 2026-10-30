/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern void func_001F1EA0(void *);
extern void func_0026B4C0(s32);
void func_0090EA00(void *arg0) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (temp_a0 != NULL) {
        func_001F1EA0(temp_a0);
        func_0026B580(arg0 + 0x64, 0x10, -1);
        func_0026B4C0(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, void **, 0) = NULL;
    }
}
