/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6290(M2C_UNK);                     /* extern */
M2C_UNK func_001B6380(M2C_UNK);                     /* extern */
M2C_UNK func_001B6780(s32);                         /* extern */
s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00CDCDD0();                            /* extern */
M2C_UNK func_00CDCDE0(s32);                         /* extern */
M2C_UNK func_00CDCDF0();                            /* extern */
M2C_UNK func_00CE42B0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
s32 func_00CEC730(M2C_UNK, s32);                    /* extern */
M2C_UNK func_00CECCB0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00CECE20();                            /* extern */
s32 func_00CED270();                                /* extern */
extern void *D_003E7E1C;
extern char D_00CF9900[];
extern char D_00CF9904[];
extern char D_00CF9908[];
extern char D_00CF990C[];
extern char D_00CF9910[];

s32 func_00CDE390(s32 arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    s32 temp_v1;

    sp20 = (*(f32 *)D_00CF9900);
    sp24 = (*(f32 *)D_00CF9904);
    sp28 = (*(f32 *)D_00CF9908);
    sp2C = (*(f32 *)D_00CF990C);
    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_00CE44F0(arg0);
        func_00CDCDD0();
        func_00CE9B20();
        break;
    case 2:
        func_00CDCDE0(arg0);
        func_00CECCB0(((void *)D_00CF9910), 2);
        func_001B6290(1);
        func_001B6780(func_00CEC730(8, M2C_FIELD(D_003E7E1C, s32 *, 0x14C)));
        func_001B6380(0);
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 0:
        func_00CE42B0(&sp20, 4);
        M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
        func_00CECE20();
        func_00CDCDF0();
        func_002646E0(arg0);
        break;
    case 1:
        if (func_00CED270() != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    return 0;
}
