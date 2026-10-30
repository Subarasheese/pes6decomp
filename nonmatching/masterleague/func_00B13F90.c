/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 D_003EADFC;

void func_00B13F90(s8 arg0) {
    if ((arg0 & 0xFF) < 0x20) {
        D_003EADFC = arg0;
    }
}
