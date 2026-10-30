/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
s32 func_0093C150(void *, s32);                     /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */

void func_0096F730(void) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_00969AF0();
    temp_v0_2 = func_0093C150(temp_v0 + 0x2C, M2C_FIELD(temp_v0, s32 *, 0x14));
    switch (temp_v0_2) {                            /* irregular */
    case -2:
        M2C_FIELD(temp_v0, s32 *, 0x18) = 4;
        M2C_FIELD(temp_v0, s32 *, 0) = 0x01FB0008;
        func_0099D030(0);
        func_009717C0(3);
        return;
    case -1:
        M2C_FIELD(temp_v0, s32 *, 0x18) = 4;
        M2C_FIELD(temp_v0, s32 *, 0) = 0x01FB003E;
        func_0099D030(0);
        func_009717C0(3);
        return;
    case 1:
        func_0099D030(0);
        func_009717C0(3);
        return;
    default:
        M2C_FIELD(temp_v0, s32 *, 0x18) = 4;
        M2C_FIELD(temp_v0, s32 *, 0) = 0x01FB003E;
        func_0099D030(0);
        func_009717C0(3);
        /* fallthrough */
    case 0:
        return;
    }
}
