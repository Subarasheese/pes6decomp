/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BED30();                            /* extern */
M2C_UNK func_00B786F0();                            /* extern */
M2C_UNK func_00B78830();                            /* extern */
extern s32 D_003EAF14;

void func_00B77BE0(void) {
    func_00B786F0();
    func_00B78830();
    if (D_003EAF14 != 0) {
        func_0096DA00(D_003EAF14);
        D_003EAF14 = 0;
    }
    func_001D5C40(0x10334);
    func_009BED30();
}
