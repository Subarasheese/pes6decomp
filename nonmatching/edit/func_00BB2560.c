/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00259C10(void *, void *);
M2C_UNK func_001C4730(void *, s32, M2C_UNK, s16);   /* extern */

void *func_00BB2560(void *arg0, void *arg1) {
    s16 temp_a3;

    func_00259C10(arg1, arg1 + 4);
    M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 0x74) + (M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg1, s16 *, 0)));
    temp_a3 = M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg1, s16 *, 6) = (s16) (M2C_FIELD(arg0, s16 *, 0x76) + (temp_a3 - M2C_FIELD(arg1, s16 *, 2)));
    func_001C4730(arg1, arg0 + 0x74, 4, temp_a3);
    M2C_FIELD(arg1, s16 *, 0) = (s16) (M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg0, s16 *, 0x78));
    M2C_FIELD(arg1, s16 *, 2) = (s16) (M2C_FIELD(arg1, s16 *, 2) + M2C_FIELD(arg0, s16 *, 0x7A));
    M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(arg1, s16 *, 4) + M2C_FIELD(arg0, s16 *, 0x78));
    M2C_FIELD(arg1, s16 *, 6) = (s16) (M2C_FIELD(arg1, s16 *, 6) + M2C_FIELD(arg0, s16 *, 0x7A));
    return arg1;
}
