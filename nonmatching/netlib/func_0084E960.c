/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s16 *func_008472D0(u8);                             /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003EA2E4;
extern char D_008B1468[];
extern char D_008B14CC[];
extern char D_008B14D0[];
extern char D_008B14DC[];

void func_0084E960(void) {
    if (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3E) >> 0x3F) != 0) {
        if (((*(u8 *)D_008B1468) == 5) || ((*(u8 *)D_008B1468) == 0)) {
            D_003EA2E4 = 1;
        }
        if ((((*(s32 *)D_008B14DC) - (*(s32 *)D_008B14D0)) < 0x157C) && (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3A) >> 0x3F) == 0) && (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3C) >> 0x3F) == 0)) {
            func_00853B50(1, 0xC, 1, 0, *func_008472D0((*(u8 *)D_008B14CC)), 0, 0, 0);
        }
    } else if (((*(u8 *)D_008B1468) != 5) && ((*(u8 *)D_008B1468) != 0)) {

    } else {
        func_00853B50(1, 8, 0, 0, *func_008472D0(5U), 0, 0, 0);
    }
}
