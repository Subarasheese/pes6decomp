/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AE9D80(void);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BDAA0();                            /* extern */
M2C_UNK func_00AE99F0();                            /* extern */
extern s32 D_003EADA4;

void func_00AE3250(void) {
    if (D_003EADA4 != 0) {
        func_00AE99F0();
        func_00AE9D80();
        if (D_003EADA4 != 0) {
            func_0096DA00(D_003EADA4);
            D_003EADA4 = 0;
        }
        func_001D5C40(0x10319);
        func_001D5C40(0x1031B);
        func_001D5C40(0x10318);
        func_001D5C40(0x10316);
        func_001D5C40(0x1031A);
        func_001D5C40(0x10317);
        func_009BDAA0();
    }
}
