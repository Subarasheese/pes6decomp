/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
extern s32 func_002DB940(void *);
extern void *D_00A7DED8;

s32 func_009DF690(void) {
    if (D_00A7DED8 != NULL) {
        if (M2C_FIELD(D_00A7DED8, u8 *, 0x1C9) == 0) {
            return func_002DB940(M2C_FIELD(D_00A7DED8, void **, 8));
        }
        return func_002DB830(M2C_FIELD(D_00A7DED8, void **, 8));
    }
    return 0;
}
