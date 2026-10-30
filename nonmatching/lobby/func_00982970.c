/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_00D0C540();                            /* extern */
extern void *D_00A7D6E4;
extern void *D_00A7D6E8;
extern char D_00A7D70C[];

s32 func_00982970(void) {
    func_001D7F10(D_00A7D6E4);
    func_001D7F10(D_00A7D6E8);
    func_002DF960((*(s32 *)D_00A7D70C));
    func_00D0C540();
    return 1;
}
