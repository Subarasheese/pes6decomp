/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
extern void *D_00A7D728;
extern char D_00A7D730[];
extern char D_00A7D738[];
extern char D_00A7D750[];

s32 func_00985E60(void) {
    if (D_00A7D728 != NULL) {
        func_001D7F10(D_00A7D728);
        D_00A7D728 = NULL;
    }
    func_001D5C40(0x103C0);
    (*(s32 *)D_00A7D730) = 0;
    (*(s32 *)D_00A7D738) = 0;
    (*(s32 *)D_00A7D750) = 0;
    return 1;
}
