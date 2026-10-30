/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BDAA0();                            /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00B60FC0();                            /* extern */
M2C_UNK func_00B62170();                            /* extern */
extern s32 D_003EAEC8;

void func_00B60E60(s32 arg0) {
    if (D_003EAEC8 != 0) {
        func_00B62170();
        func_00B60FC0();
        if (D_003EAEC8 != 0) {
            func_0096DA00(D_003EAEC8);
            D_003EAEC8 = 0;
        }
        func_009BE0B0();
        if (arg0 == 1) {
            func_001D5C40(0x10329);
        }
        func_009BDAA0();
    }
}
