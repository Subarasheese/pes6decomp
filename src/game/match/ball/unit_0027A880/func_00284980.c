/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002AE670(M2C_UNK);                         /* extern */
extern char D_00591F30[];
extern char D_00591F34[];
extern char D_00591F38[];
extern char D_00591F3C[];
extern char D_0059273C[];
extern char D_00592742[];

void func_00284980(void) {
    (*(s32 *)D_0059273C) = func_002AE670(0xE);
    (*(s8 *)D_00592742) = 1;
    (*(s32 *)D_00591F38) = (*(s32 *)D_00591F30);
    (*(s32 *)D_00591F3C) = (*(s32 *)D_00591F34);
}
