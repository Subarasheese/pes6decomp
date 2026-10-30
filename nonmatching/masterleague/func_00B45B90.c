/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B44B90();                            /* extern */
M2C_UNK func_00B48EE0();                            /* extern */
extern s32 D_003EAE70;

void func_00B45B90(void) {
    func_00B48EE0();
    func_00B44B90();
    if (D_003EAE70 != 0) {
        func_0096DA00(D_003EAE70);
        D_003EAE70 = 0;
    }
    func_001D5C40(0x1032C);
    func_001D5C40(0x1032F);
}
