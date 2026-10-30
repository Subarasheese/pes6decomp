/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B75D10();                            /* extern */
M2C_UNK func_00B75EF0();                            /* extern */
extern s32 D_003EAF00;
extern s32 D_003EAF04;

void func_00B76BE0(void) {
    if (D_003EAF00 != 0) {
        D_003EAF04 = 0;
        func_00B75D10();
        func_00B75EF0();
        if (D_003EAF00 != 0) {
            func_0096DA00(D_003EAF00);
            D_003EAF00 = 0;
        }
        func_001D5C40(0x10321);
    }
}
