/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_001B8600(M2C_UNK);                     /* extern */
s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00CDCC30();                                /* extern */
M2C_UNK func_00CDCE00();                            /* extern */
M2C_UNK func_00CDCE10();                            /* extern */
M2C_UNK func_00CDCE20(s32);                         /* extern */
M2C_UNK func_00CE42B0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CECCB0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CECE20();                            /* extern */
M2C_UNK func_00CECE30();                            /* extern */
s32 func_00CED270();                                /* extern */
extern f32 D_003E7DFC;
extern s32 *D_003E7E1C;
extern char D_00CF9840[];
extern char D_00CF9860[];

s32 func_00CDD1D0(s32 arg0) {
    f32 sp2C;
    s32 temp_v1;

    sp2C = D_003E7DFC;
    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00CECE20();
        func_00CE42B0(&sp2C, 1);
        *D_003E7E1C = 0;
        func_002646E0(arg0);
        func_00CDCE20(arg0);
        func_001B8600(0x17005D);
        func_001B6460(0);
        if (func_00CDCC30() != 0) {
            func_00CECCB0(((void *)D_00CF9860), 2);
        } else {
            func_00CECCB0(((void *)D_00CF9840), 3);
        }
        break;
    case 1:
        if (func_00CED270() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 2:
        func_00CDCE10();
        if (*D_003E7E1C != 0) {
            func_002646E0(arg0);
        }
        break;
    case 3:
        func_00CECE30();
        func_00CDCE00();
        func_00CE9B20();
        func_00CE44F0(arg0);
        break;
    }
    return 0;
}
