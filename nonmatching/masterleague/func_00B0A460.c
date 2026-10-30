/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B089C0();                            /* extern */
M2C_UNK func_00B09C30();                            /* extern */
extern s32 D_003EADEC;

void func_00B0A460(void) {
    if (D_003EADEC != 0) {
        func_00B09C30();
        func_00B089C0();
    }
}
