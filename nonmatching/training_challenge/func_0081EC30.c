/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081D5A0(void *, void *);              /* extern */
M2C_UNK func_0081E590(void *, u8, M2C_UNK);         /* extern */

void func_0081EC30(void *arg0) {
    u8 temp_s1;
    void *temp_a1;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
    temp_s1 = M2C_FIELD(temp_a2, u8 *, 0x40);
    temp_a1 = temp_s1 + M2C_FIELD(arg0, s32 *, 0x6C);
    M2C_FIELD(temp_a1, s8 *, 0x12E) = 0;
    M2C_FIELD(arg0, s32 *, 0x17088) = 1;
    func_0081D5A0(temp_a1, temp_a2);
    func_0081E590(arg0, temp_s1, 0);
}
