/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s8 *, M2C_UNK, s32);          /* extern */
extern char D_008B10B0[];
extern char D_008B13E0[];
extern char D_008B142C[];
extern char D_008B142D[];
extern char D_008B145C[];
extern char D_008B1460[];
extern char D_008B14CC[];
extern char D_008B14FC[];
extern char D_008B14FD[];
extern char D_008B1558[];
extern char D_008B1568[];
extern char D_008B1569[];
extern char D_008B156C[];

void func_0084FF30(s32 arg0) {
    if (arg0 != 0) {
        func_001C48E8(((void *)D_008B13E0), 0, 0x44);
        func_001C48E8(((void *)D_008B13E0), 0, ((void *)D_008B1558) - ((void *)D_008B13E0));
        if (!(arg0 & 1)) {
            func_001C48E8(((void *)D_008B1558), 0, 0x14);
        }
        if (!(arg0 & 2)) {
            func_001C48E8(((void *)D_008B14CC), 0, 0x8C);
        }
        if (!(arg0 & 4)) {
            func_001C48E8(((void *)D_008B156C), 0, 7);
        }
    } else {
        func_001C48E8(((void *)D_008B13E0), 0, 0x194);
    }
    (*(s32 *)D_008B145C) = 0;
    (*(s32 *)D_008B1460) = 0;
    (*(s8 *)D_008B142C) = 0;
    if ((*(s8 *)D_008B142C) == 0) {
        (*(s8 *)D_008B142D) = 1;
    }
    (*(s8 *)D_008B14FC) = 0xFF;
    (*(s8 *)D_008B14FD) = 0xFF;
    (*(s8 *)D_008B1569) = 0;
    (*(s8 *)D_008B1568) = 0;
    func_001C48E8(((void *)D_008B10B0), 0, 0x98);
    (*(s8 *)D_008B156C) = 0;
}
