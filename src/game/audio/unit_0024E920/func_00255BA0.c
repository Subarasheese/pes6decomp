/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK sceSifSetDma(s32 *, M2C_UNK);              /* extern */
extern char D_0058C620[];
extern char D_0058C624[];
extern char D_0058C628[];
extern char D_0058C62C[];

void func_00255BA0(s32 arg0, s32 arg1, s32 arg2) {
    FlushCache(0);
    (*(s32 *)D_0058C620) = arg0;
    (*(s32 *)D_0058C624) = arg1;
    (*(s32 *)D_0058C628) = arg2;
    (*(s32 *)D_0058C62C) = 0;
    sceSifSetDma(((void *)D_0058C620), 1);
}
