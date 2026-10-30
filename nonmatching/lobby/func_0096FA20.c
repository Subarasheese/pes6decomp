/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093BC90(s32);                             /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009B7520(M2C_UNK);                     /* extern */
s32 func_009B76A0();                                /* extern */
M2C_UNK func_009B77A0(s32);                         /* extern */
M2C_UNK func_009B7B80();                            /* extern */

void func_0096FA20(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00969AF0();
    temp_v0 = func_0093BC90(func_009B76A0() * 0x64);
    switch (temp_v0) {                              /* irregular */
    case -1:
        func_0026E840(0x8C008005);
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB0075;
        func_009B7520(0);
        func_009717C0(0xB);
        return;
    case 1:
        func_0099D030(0);
        func_009B7B80();
        func_009B77A0(M2C_FIELD(temp_s0, s32 *, 0x164));
        func_009717C0(4);
        return;
    default:
        func_0026E840(0x8C008005);
        func_0099D030(0);
        M2C_FIELD(temp_s0, s32 *, 0) = 0x01FB0075;
        func_009B7520(0);
        func_009717C0(0xB);
        /* fallthrough */
    case 0:
        return;
    }
}
