/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BED30();                            /* extern */
M2C_UNK func_00B6A260();                            /* extern */
M2C_UNK func_00B6CC70();                            /* extern */
extern s32 D_003EAEE8;

void func_00B6A140(void) {
    if (D_003EAEE8 != 0) {
        func_00B6CC70();
        func_00B6A260();
        if (D_003EAEE8 != 0) {
            func_0096DA00(D_003EAEE8);
            D_003EAEE8 = 0;
        }
        func_001D5C40(0x10323);
        func_009BED30();
    }
}
