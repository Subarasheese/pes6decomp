/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BF3FD0(M2C_UNK, void *);             /* extern */
void *func_00C1B400(M2C_UNK);                       /* extern */
extern char D_00CBD730[];

void func_00BDDD30(void) {
    void *temp_v0;

    temp_v0 = func_00C1B400(0);
    func_00BF3FD0(0, temp_v0);
    M2C_FIELD(temp_v0, s8 *, 0x6F) = 0xFE;
    func_00B91590(0x19, 1);
    (*(s32 *)D_00CBD730) = 1;
}
