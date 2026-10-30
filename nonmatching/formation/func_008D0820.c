/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F2410(void *);
extern void func_001F22B0(void *);
void *func_008B9F20(s32, M2C_UNK, M2C_UNK);         /* extern */

void func_008D0820(void *arg0) {
    void *temp_v0;

    if (arg0 != NULL) {
        func_001F22B0(M2C_FIELD(arg0, void **, 0x1BC));
        temp_v0 = func_008B9F20(M2C_FIELD(arg0, s32 *, 0x50), 1, 0);
        M2C_FIELD(arg0, void **, 0x1BC) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x1C0) = func_001F2410(temp_v0);
    }
}
