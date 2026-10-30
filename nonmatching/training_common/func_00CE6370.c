/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
void *func_00CE3CD0(M2C_UNK *, M2C_UNK);            /* extern */
M2C_UNK func_00CEA620(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_00CFF420[];
extern char D_00CFF4A0[];
extern char D_00CFF528[];

void func_00CE6370(void) {
    func_00CEA620(((void *)D_00CFF420), 0);
    func_001D7D60(func_00CE3CD0(((void *)D_00CFF4A0), 5), 0);
    func_001D7D60(func_00CE3CD0(((void *)D_00CFF4A0), 3), 0);
    func_002DF8E0((*(s32 *)D_00CFF528), 0);
}
