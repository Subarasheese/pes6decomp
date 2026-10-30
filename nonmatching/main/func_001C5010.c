/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00105250();                                /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
extern char D_00398E80[];
extern char D_00398E84[];

void __malloc_lock(void) {
    s32 temp_v0;

    temp_v0 = func_00105250();
    if ((*(s32 *)D_00398E80) == temp_v0) {
        (*(s32 *)D_00398E84) += 1;
        return;
    }
    WaitSema(*(s32 *)0x371A20);
    (*(s32 *)D_00398E80) = temp_v0;
    (*(s32 *)D_00398E84) += 1;
}
