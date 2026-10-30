/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FB318(s32, void *);                 /* extern */

void func_008FBBB8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    void *temp_a3;

    temp_a3 = M2C_FIELD(arg0, void **, 0x40);
    temp_a1 = (arg1 & 0x0FFFFFFF) | 0x20000000;
    M2C_FIELD(temp_a3, s32 *, 0xC4) = 1;
    M2C_FIELD(temp_a3, s32 *, 0xEC) = temp_a1;
    M2C_FIELD(temp_a3, s32 *, 0xF8) = arg2;
    M2C_FIELD(temp_a3, s32 *, 0xF0) = 0;
    M2C_FIELD(temp_a3, s32 *, 0xF4) = 0;
    func_008FB318(temp_a1, temp_a3);
}
