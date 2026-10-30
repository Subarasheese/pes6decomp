/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AFD340();                            /* extern */
M2C_UNK func_00AFFBE0();                            /* extern */
extern s32 D_003EAD54;

void func_00B03960(void) {
    if (D_003EAD54 != 0) {
        func_00AFD340();
        func_00AFFBE0();
    }
}
