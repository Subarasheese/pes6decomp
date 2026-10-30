/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0063B410(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_00645820(M2C_UNK, s32);                    /* extern */
extern char D_0065AC98[];
extern char D_0065D430[];
extern char D_0065D630[];

s32 func_0062F700(s32 arg0) {
    s32 temp_a2;

    temp_a2 = arg0 & 0xFF;
    switch (temp_a2) {                              /* irregular */
    case 0x0:
        return func_00645820(0x64, temp_a2);
    case 0xFE:
        return func_001F08B0(0x1900CF);
    case 0xFF:
        return func_001F08B0(0x190053);
    default:
        func_0063B410(((void *)D_0065D630), ((void *)D_0065AC98), temp_a2);
        func_0063B410(((void *)D_0065D430), func_001F08B0(0x190046), (s32) ((void *)D_0065D630));
        return (s32) ((void *)D_0065D430);
    }
}
