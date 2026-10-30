/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001026D8(s32 arg0, void *arg1) {
    switch (arg0) {                                 /* irregular */
    default:
        M2C_FIELD(arg1, f32 *, 0xC) = 255.0f;
        M2C_FIELD(arg1, M2C_UNK32 *, 0) = 0x437F0000;
        M2C_FIELD(arg1, M2C_UNK32 *, 4) = 0x437F0000;
        M2C_FIELD(arg1, M2C_UNK32 *, 8) = 0x437F0000;
        return;
    case 1:
        M2C_FIELD(arg1, f32 *, 0xC) = 255.0f;
        M2C_FIELD(arg1, M2C_UNK32 *, 0) = 0x43700000;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        M2C_FIELD(arg1, M2C_UNK32 *, 4) = 0x437F0000;
        M2C_FIELD(arg1, M2C_UNK32 *, 8) = 0x437F0000;
        return;
    case 2:
        M2C_FIELD(arg1, M2C_UNK32 *, 0) = 0;
        M2C_FIELD(arg1, f32 *, 0xC) = 255.0f;
        M2C_FIELD(arg1, M2C_UNK32 *, 4) = 0;
        M2C_FIELD(arg1, M2C_UNK32 *, 8) = 0;
        return;
    case 3:
        M2C_FIELD(arg1, f32 *, 0xC) = 255.0f;
        M2C_FIELD(arg1, M2C_UNK32 *, 8) = 0x43700000;
        M2C_FIELD(arg1, M2C_UNK32 *, 0) = 0x437F0000;
        M2C_FIELD(arg1, M2C_UNK32 *, 4) = 0x437F0000;
        return;
    }
}
