/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001819E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00182020(M2C_UNK);                         /* extern */
extern char D_00520102[];
extern char D_0052010A[];

void func_00189AC0(void) {
    (*(s8 *)D_00520102) = 0;
    (*(s16 *)D_0052010A) = 0;
    if (func_00182020(0xC) != 0) {
        func_001819E0(0xC, 0x2751);
        func_001819E0(2, 0x2751);
    }
}
