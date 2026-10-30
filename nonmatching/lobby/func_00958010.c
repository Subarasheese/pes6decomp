/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00958060(s32);                             /* extern */

s32 func_00958010(void) {
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        return func_00958060(M2C_FIELD(temp_v0, s32 *, 0x49E8));
    }
    func_0082C920(0x12);
    func_0082C840(0xE);
    func_0082C690(0xE, 0);
    return 2;
}
