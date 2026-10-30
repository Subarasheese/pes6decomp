/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00835C40();                            /* extern */
M2C_UNK func_009D02B0(s32);                         /* extern */
M2C_UNK func_009D0D40(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C090();                            /* extern */
M2C_UNK func_00D13D80(void *, M2C_UNK);             /* extern */
s32 func_00D14030();                                /* extern */
extern void *D_00A7DE98;

s32 func_009D6AA0(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7DE98, u8 *, 0x25) == 0) {
        func_009D02B0(func_001F08B0(0x02000008));
        temp_v0 = func_00D14030();
        switch (temp_v0) {                          /* irregular */
        case 0:
            break;
        case 1:
            func_00D13D80(D_00A7DE98 + 0x28, 9);
            func_00835C40();
            func_008187D0();
            M2C_FIELD(D_00A7DE98, s8 *, 0x24) = 4;
            break;
        case 2:
            func_00835C40();
            M2C_FIELD(D_00A7DE98, s8 *, 0x24) = 1;
            func_009D0D40(1);
            func_008187D0();
            func_00D0C090();
            break;
        }
    } else {
        M2C_FIELD(D_00A7DE98, s8 *, 0x24) = 1;
        func_00835C40();
        func_008187D0();
    }
    return 0;
}
