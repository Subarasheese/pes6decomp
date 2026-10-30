/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
s32 func_0081D850(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00A7D728[];
extern char D_00A7D750[];

s32 func_00985EC0(void) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_001D5A10(0x103C0);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_0081D850(temp_v0, 0, 0, 0, 0);
        (*(s32 *)D_00A7D728) = temp_v0_2;
        if (temp_v0_2 == 0) {
            return 0;
        }
        (*(s32 *)D_00A7D750) = 1;
        return 1;
    }
    (*(s32 *)D_00A7D750) = 0;
    return 0;
}
