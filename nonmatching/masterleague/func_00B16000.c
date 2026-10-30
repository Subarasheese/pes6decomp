/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B108C0(void);
M2C_UNK func_00B13EC0();                            /* extern */
extern s32 D_003EADF0;

void func_00B16000(void) {
    if (D_003EADF0 != 0) {
        func_00B108C0();
        func_00B13EC0();
    }
}
