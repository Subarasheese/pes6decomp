/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
M2C_UNK func_00214290(s32, void *);                 /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_008190C0();                                /* extern */
s32 func_00821570();                                /* extern */
M2C_UNK func_009D5600(M2C_UNK);                     /* extern */
M2C_UNK func_009D5AA0(M2C_UNK);                     /* extern */
M2C_UNK func_009D5BA0(M2C_UNK);                     /* extern */
M2C_UNK func_009D5CA0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern void *D_00A7DD60;

s32 func_009C4850(void) {
    s32 temp_v0;
    u8 temp_a0;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_008187D0();
        goto block_8;
    }
    if (func_00821570() == 0) {
        return 0;
    }
    temp_v0 = func_008190C0();
    if ((temp_v0 != 2) && (temp_v0 != 1)) {
        return 0;
    }
block_8:
    temp_a0 = M2C_FIELD(D_00A7DD60, u8 *, 1);
    switch (temp_a0) {                              /* irregular */
    case 13:
        func_00213800(M2C_FIELD(D_00A7DD60, s32 *, 0x10), 1);
        func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0x10), 0);
        break;
    case 1:
        func_00214290(M2C_FIELD(D_00A7DD60, s32 *, 0x10), D_00A7DD60);
        M2C_FIELD(D_00A7DD60, s32 *, 0x10) = 0;
        func_00213800(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 1);
        func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 0);
        break;
    }
    func_00D0C090();
    func_009D5CA0(0);
    func_009D5AA0(1);
    func_009D5BA0(0);
    func_009D5600(0x11);
    M2C_FIELD(D_00A7DD60, u8 *, 0) = (u8) M2C_FIELD(D_00A7DD60, u8 *, 1);
    return 0;
}
