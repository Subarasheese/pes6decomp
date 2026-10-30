/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_001F1EA0(void *);
extern void func_00153FA0(void *);
M2C_UNK func_008FAB10(M2C_UNK);                     /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_003AE9D0;

s32 func_008F86B0(void) {
    func_00153FA0(M2C_FIELD(D_003AE9D0, void **, 0x528));
    func_001BC2B0();
    func_001F1EA0(M2C_FIELD(D_003AE9D0, void **, 0x56C));
    func_00C75330(D_003AE9D0 + 0x52C);
    func_00153FA0(D_003AE9D0);
    D_003AE9D0 = NULL;
    func_008FAB10(0);
    return 1;
}
