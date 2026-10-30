/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0063A7F0();                                /* extern */
s32 func_0063A830();                                /* extern */
extern s32 D_003E763C;

void func_002E93E0(s32 arg0) {
    if (func_0063A830() == 0) {
        if (func_0063A7F0() != 0) {
            return;
        }
        D_003E763C = arg0;
    }
}
