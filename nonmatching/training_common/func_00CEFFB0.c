/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B7A90();                            /* extern */
s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
s32 func_002E9310();                                /* extern */
M2C_UNK func_00CDCE60();                            /* extern */
M2C_UNK func_00CDCE90();                            /* extern */
M2C_UNK func_00CDCEE0();                            /* extern */
s32 func_00CDEEE0(s32);                             /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
M2C_UNK func_00CE5C00();                            /* extern */
M2C_UNK func_00CE6230();                            /* extern */
M2C_UNK func_00CE62D0();                            /* extern */
M2C_UNK func_00CE6370();                            /* extern */
M2C_UNK func_00CE70E0();                            /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CE9F00(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00CEA170();                            /* extern */
M2C_UNK func_00CEABD0();                            /* extern */
M2C_UNK func_00CEAC70();                            /* extern */
M2C_UNK func_00CEAC80();                            /* extern */
s32 func_00CEAC90();                                /* extern */
s32 func_00CEAD70();                                /* extern */
s32 func_00CEAD80();                                /* extern */
M2C_UNK func_00CECC60();                            /* extern */
M2C_UNK func_00CECCB0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00CED270();                                /* extern */
extern void *D_003E7E1C;
extern char D_00CF9FC0[];

s32 func_00CEFFB0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00CEAC80();
        func_00CECC60();
        func_00CDCEE0();
        func_00CDCE90();
        func_00CE70E0();
        func_00CE62D0();
        func_00CE9F00(1, 0, 0);
        func_00CE9F00(1, 1, 0);
        func_00CE9F00(1, 2, 0);
        func_00CE9F00(1, 3, 0);
        func_00CE9F00(1, 8, 0);
        func_00CE9F00(1, 9, 0);
        func_00CE9F00(1, 0xF, 0);
        func_002646E0(arg0);
        break;
    case 1:
        if (func_00CED270() != 0) {
            M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
            func_002646E0(arg0);
        }
        /* fallthrough */
    case 2:
        if (func_00CEAD80() != 0) {
            func_00CE62D0();
            func_00CECCB0(((void *)D_00CF9FC0), 2);
        } else {
            func_00CECCB0(((void *)D_00CF9FC0), 3);
            func_00CE6230();
        }
        func_00CDCE90();
        if (func_00CEAD70() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 3:
        if ((func_00CEAC90() != 0) && (func_00CEAD70() == 2)) {
            func_00CE6370();
            func_00CEABD0();
            if (func_00CDEEE0(arg0) != 0) {
                if (func_002E9310() != 5) {
                    func_00264790(arg0, 0);
                    M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = 0;
                    func_00CE5C00();
                    func_00CDCE60();
                    func_00CEAC70();
                } else {
                    func_002646E0(arg0);
                }
            }
        } else {
            func_002646E0(arg0);
        }
        break;
    case 4:
        func_00CDCE60();
        func_00CE9B20();
        func_001B7A90();
        func_00CE5C00();
        if (func_00CEAD70() != 2) {
            func_00CE44F0(arg0);
            M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = 0;
            func_00CEAC70();
        } else {
            func_00CEA170();
            func_00CE4540(arg0);
        }
        break;
    }
    return 0;
}
