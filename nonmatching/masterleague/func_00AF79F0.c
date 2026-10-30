/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00AF15A0(void);
M2C_UNK func_00AF1800();                            /* extern */
extern s32 D_003EADD0;

void func_00AF79F0(void) {
    if (D_003EADD0 != 0) {
        func_00AF15A0();
        func_00AF1800();
    }
}
