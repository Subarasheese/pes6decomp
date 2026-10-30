/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001905E8(s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
extern s32 *D_011FD1CC;
extern char D_011FD1D0[];
extern char D_011FD1F0[];

s32 func_00190750(void) {
    s32 temp_a0;

    func_0019B3A0(0);
    *(s32 *)0x10009020 = 0;
    *(s32 *)0x10009030 = *D_011FD1CC & 0x0FFFFFFF;
    *(s32 *)0x1000E010 = 2;
    *(s32 *)0x10009000 = 0x145;
    func_001905E8(D_011FD1CC, 0x1000E010, 0x10009030, 0x0FFFFFFF, 0x145, 2);
    temp_a0 = ~(*(s32 *)D_011FD1F0) & 1;
    (*(s32 *)D_011FD1F0) = temp_a0;
    D_011FD1CC = (temp_a0 * 0x10) + ((void *)D_011FD1D0);
    return 0;
}
