/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
M2C_UNK func_00363C40();                            /* extern */
M2C_UNK func_00CE9C50();                            /* extern */
extern s32 D_003EB304;

void func_00CE9E40(void) {
    if (D_003EB304 == 0) {
        func_001BC300();
        func_00CE9C50();
        func_00363C40();
        D_003EB304 = 1;
    }
}
