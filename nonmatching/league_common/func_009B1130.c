/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B07B0();                            /* extern */
M2C_UNK func_009B09C0();                            /* extern */
extern s32 D_003EA9AC;

void func_009B1130(void) {
    if (D_003EA9AC != 0) {
        func_009B09C0();
        func_009B07B0();
    }
}
