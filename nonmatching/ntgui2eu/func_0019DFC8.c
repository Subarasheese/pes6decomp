/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019AE50(M2C_UNK, s32);                /* extern */
M2C_UNK func_0019BCD0(M2C_UNK);                     /* extern */
extern char D_005CAB58[];
extern char D_01201894[];

void func_0019DFC8(void) {
    func_0019BCD0(5);
    func_0019AE50(5, (*(s32 *)D_01201894));
    (*(s32 *)D_005CAB58) = 0;
}
