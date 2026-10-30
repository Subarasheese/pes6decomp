/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00645050(void);
extern s32 D_003E9DF8;

s32 func_00651FA0(void) {
    switch (D_003E9DF8) {                           /* irregular */
    case 33:
        if (func_00645050() & 0xFF) {
            return 0x27;
        }
    case 40:
    case 39:
        return 0x26;
    default:
        return 0xFF;
    }
}
