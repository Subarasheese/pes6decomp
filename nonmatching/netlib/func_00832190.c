/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008AA13C[];

M2C_UNK *func_00832190(void) {
    if (func_0082C2A0() == 0) {
        return NULL;
    }
    return ((void *)D_008AA13C);
}
