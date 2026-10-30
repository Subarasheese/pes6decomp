/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00189790(void *, u64);
M2C_UNK func_0016F210();                            /* extern */
M2C_UNK func_00189758(void *);                      /* extern */
M2C_UNK func_00189778(void *);                      /* extern */

void func_0016EFB8(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x880;
    func_0016F210();
    func_00189758(temp_s1);
    func_00189778(temp_s1);
    func_00189790(temp_s1, (u64) M2C_FIELD(arg0, s32 *, 0x904));
    M2C_FIELD(arg0, s32 *, 0x8A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C0) = (s32) M2C_FIELD(arg0, s32 *, 0x8D0);
    M2C_FIELD(arg0, s8 *, 0x8C3) = 0;
    M2C_FIELD(arg0, s32 *, 0x8B0) = (s32) M2C_FIELD(arg0, s32 *, 0x8C0);
}
