/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
extern char D_005E5E00[];
extern char D_005E5E04[];
extern char D_005E5E08[];
extern char D_005E5E0C[];

void func_002D6800(void) {
    (*(s32 *)D_005E5E00) = 0;
    (*(s32 *)D_005E5E04) = 0;
    (*(s32 *)D_005E5E08) = func_0021E000(0x167);
    (*(s32 *)D_005E5E0C) = func_0021DF90(0x13);
}
