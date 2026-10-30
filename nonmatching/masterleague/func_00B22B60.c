/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B228C0();                            /* extern */
M2C_UNK func_00B22A50();                            /* extern */
extern s32 D_003EAE20;

void func_00B22B60(void) {
    if (D_003EAE20 != 0) {
        func_00B22A50();
        func_00B228C0();
        if (D_003EAE20 != 0) {
            func_0096DA00(D_003EAE20);
            D_003EAE20 = 0;
        }
    }
}
