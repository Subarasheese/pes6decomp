/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_00D0C540();                            /* extern */
extern void *D_00A7D674;
extern void *D_00A7D678;
extern char D_00A7D6CC[];

s32 func_00982010(void) {
    func_001D7F10(D_00A7D674);
    func_001D7F10(D_00A7D678);
    func_002DF960((*(s32 *)D_00A7D6CC));
    func_00D0C540();
    return 1;
}
