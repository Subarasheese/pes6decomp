/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019B010();                                /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005CC968[];
extern char D_005CC96C[];

void func_001AE898(void) {
    s32 temp_v0;

    temp_v0 = func_0019B010();
    if ((*(s32 *)D_005CC968) == temp_v0) {
        (*(s32 *)D_005CC96C) += 1;
        return;
    }
    func_0019B160(*(s32 *)0x5CAC20);
    (*(s32 *)D_005CC968) = temp_v0;
    (*(s32 *)D_005CC96C) += 1;
}
