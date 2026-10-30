/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0087C4E0();                            /* extern */
M2C_UNK func_0087C8F0();                            /* extern */
M2C_UNK func_0087C910(M2C_UNK);                     /* extern */
M2C_UNK func_0087C970(s32);                         /* extern */
extern void *D_003AE9D8;

s32 func_0087C870(void) {
    M2C_FIELD(D_003AE9D8, s32 *, 0x8C) = 1;
    func_0087C8F0();
    func_0087C970(M2C_FIELD(D_003AE9D8, s32 *, 0x8C));
    func_0087C910(1);
    func_0087C4E0();
    func_0087C970(M2C_FIELD(D_003AE9D8, s32 *, 0x8C));
    return 1;
}
