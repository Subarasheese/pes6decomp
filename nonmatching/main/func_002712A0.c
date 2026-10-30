/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E120(int);
extern void func_00186220(void);
extern void func_002CA1B0(void);
s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00288350();                            /* extern */
M2C_UNK func_002BD960();                            /* extern */
M2C_UNK func_002BDA20(M2C_UNK);                     /* extern */
s32 func_0093FD30();                                /* extern */
M2C_UNK func_0093FDF0();                            /* extern */
M2C_UNK func_009B3F70();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BA64E0(M2C_UNK);                     /* extern */
s32 func_00C00390(M2C_UNK);                         /* extern */
M2C_UNK func_00C00440(M2C_UNK, s32);                /* extern */
extern char D_00591C09[];
extern char D_00591DB4[];
extern char D_00591DCC[];
extern char D_00591DCD[];
extern char D_00591DD0[];
extern char D_00591F2D[];
extern char D_00CBBDF8[];

void func_002712A0(void) {
    s32 temp_v1;

    temp_v1 = func_009E1C90(1) & 0xFF;
    if (temp_v1 != 2) {
        if (temp_v1 != 1) {
            if (func_00152130(1, 0x10) == 0) {
                return;
            }
            func_00288350();
            if ((*(u8 *)D_00591C09) == 5) {
                func_002BD960();
                func_002BDA20(-0x11);
            }
            func_002CA1B0();
            func_0093FDF0();
            func_009E1D30(1, 1);
        } else if (func_0093FD30() == 0) {
            func_009E1D30(1, 2);
            goto block_8;
        }
    } else {
block_8:
        func_0017E120(1);
        func_00186220();
        switch ((*(u8 *)D_00591C09)) {                       /* irregular */
        case 7:
            if ((*(u8 *)D_00CBBDF8) != 2) {
                (*(u8 *)D_00CBBDF8) = 1;
            }
            (*(u8 *)D_00591DCD) = 4;
            (*(s8 *)D_00591DCC) = (s8) ((s32) (*(u8 *)D_00591DCD) % 2);
            (*(s8 *)D_00591F2D) = 0;
            func_009E1D30(0, 4);
            func_009E1D30(1, 5);
            break;
        case 10:
            (*(s8 *)D_00591DB4) = 0;
            func_00BA64E0(1);
            func_009E1D30(0, 4);
            func_009B3F70();
            break;
        default:
            func_009E1D30(0, 4);
            func_00C00440(0, func_00C00390(0));
            func_00BA64E0(1);
            break;
        }
        (*(s8 *)D_00591DD0) = 0;
    }
}
