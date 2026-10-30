/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_009D5600(M2C_UNK);                     /* extern */
s32 func_009D56F0();                                /* extern */
s32 func_009D5810();                                /* extern */
M2C_UNK func_009D5BA0(M2C_UNK);                     /* extern */
extern void *D_00A7DD60;

s32 func_009C5020(void) {
    s32 temp_v0;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_00213800(M2C_FIELD(D_00A7DD60, void **, 0xC));
        func_00214290(M2C_FIELD(D_00A7DD60, s32 *, 0x10));
        M2C_FIELD(D_00A7DD60, s32 *, 0x10) = 0;
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 1;
        return 0;
    }
    temp_v0 = func_009D5810();
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_009D5BA0(0);
        func_009D5600(0x11);
        M2C_FIELD(D_00A7DD60, s8 *, 0xB) = 1;
        if (M2C_FIELD(D_00A7DD60, u8 *, 8) != 0) {
            func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0x10), 0);
        }
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0xD;
        break;
    case 1:
        M2C_FIELD(D_00A7DD60, s32 *, 0x28) = func_009D56F0();
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x13;
        break;
    }
    return 0;
}
