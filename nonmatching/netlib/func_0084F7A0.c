/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);
s16 *func_008472D0();                               /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
extern char D_008B142C[];
extern char D_008B142D[];
extern char D_008B14CC[];
extern char D_008B21C0[];

void func_0084F7A0(void) {
    func_00858FD0(((void *)D_008B21C0), *func_008472D0());
    if ((*(s8 *)D_008B142C) == 0) {
        (*(s8 *)D_008B142D) = 1;
    }
    func_00853B50(1, 7, 0, 0, *func_008472D0(), 0, 0, 0);
    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) != 1) {
        func_00853B50(1, 0x17, 2, 0, *func_008472D0(), 0, 0, 0);
    }
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~1) | (0 & 1);
}
