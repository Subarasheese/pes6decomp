/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0010F420();                            /* extern */
M2C_UNK func_0010F470(s32, M2C_UNK);                /* extern */

void func_00138990(void *arg0) {
    s32 temp_a0;

    func_0010F420();
    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    *(u8 *)(M2C_FIELD(arg0, s32 *, 4) + (temp_a0 * 0x3C440)) = 2;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 8) + 1) % (s32) M2C_FIELD(arg0, s32 *, 0x10));
    func_0010F470(temp_a0, 2);
}
