/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00165B00();                                /* extern */
M2C_UNK func_00167BB8(s32, M2C_UNK, void *, M2C_UNK *); /* extern */
M2C_UNK func_00189778(void *);                      /* extern */
extern M2C_UNK func_00170860;

void func_001707E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x944) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x89C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x8A4) = 1;
        func_00167BB8(func_00165B00(), 1, arg0, &func_00170860);
        M2C_FIELD(arg0, s32 *, 0x8A0) = 1;
        M2C_FIELD(arg0, s32 *, 0x89C) = 1;
        M2C_FIELD(arg0, s32 *, 0x940) = (s32) M2C_FIELD(arg0, s32 *, 0x944);
        func_00189778(arg0 + 0x8A8);
    }
}
