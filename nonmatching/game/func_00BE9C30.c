/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CA1B0(void);
extern void func_00B7B8B0(void);
M2C_UNK func_00288350();                            /* extern */
s32 func_0093FD30();                                /* extern */
M2C_UNK func_0093FDF0();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B78E60(M2C_UNK);                     /* extern */
M2C_UNK func_00B78FC0(u8);                          /* extern */
M2C_UNK func_00B793D0();                            /* extern */
s32 func_00B79600();                                /* extern */
M2C_UNK func_00B7B8C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B7B920(M2C_UNK);                     /* extern */
s32 func_00BE86B0();                                /* extern */
M2C_UNK func_00BE9F30();                            /* extern */
M2C_UNK func_00BEA1D0();                            /* extern */
M2C_UNK func_00BEA2E0();                            /* extern */
M2C_UNK func_00BEA590();                            /* extern */
s32 func_00BEA660();                                /* extern */
M2C_UNK func_00BEA8B0();                            /* extern */
M2C_UNK func_00BEA9D0(M2C_UNK);                     /* extern */
M2C_UNK func_00BF06F0();                            /* extern */
extern char D_00591F24[];
extern char D_005926FF[];
extern char D_00CBCC6A[];

void func_00BE9C30(void) {
    s32 temp_v1;

    temp_v1 = func_009E1C90(2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_009E1D30(2, 0);
        /* fallthrough */
    case 0:
        if ((*(u8 *)D_00591F24) == 5) {
            (*(u8 *)D_00591F24) = 1;
        }
        func_009E1D30(2, 1);
        /* fallthrough */
    case 1:
        if ((*(u8 *)D_00CBCC6A) != 0) {
            func_00B793D0();
            func_00B7B920(2);
            func_00B7B8B0();
            func_00B7B8C0(0xFF);
            func_00B78FC0((*(u8 *)D_005926FF));
        }
        func_00B78E60(0);
        func_009E1D30(2, 2);
        return;
    case 2:
        func_00BEA9D0(2);
        func_009E1D30(2, 9);
        break;
    case 7:
        func_00288350();
        func_002CA1B0();
        func_0093FDF0();
        func_009E1D30(2, 8);
        break;
    case 8:
        if (func_0093FD30() == 0) {
            func_009E1D30(2, 0xE);
        } else {
            return;
        }
        break;
    case 9:
        func_00B78E60(0);
        func_00BEA8B0();
        break;
    case 10:
        if (func_00B79600() != 0) {
            if ((*(u8 *)D_005926FF) != 0) {
                if (func_00BE86B0() != 0) {
                    func_009E1D30(2, 0x13);
                }
            } else {
                func_009E1D30(2, 7);
            }
        }
        break;
    case 11:
        if (func_00BEA660() != 0) {
            func_009E1D30(2, 0xE);
        }
        break;
    case 14:
        func_00BEA1D0();
        break;
    case 15:
        func_00BE9F30();
        break;
    case 16:
        func_00BEA2E0();
        break;
    case 18:
        func_00BF06F0();
        break;
    case 19:
        func_00BEA590();
        break;
    }
}
