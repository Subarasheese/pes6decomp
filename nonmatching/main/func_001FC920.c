/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00533030[];
extern char D_00533034[];

s32 func_001FC920(s32 arg0) {
    if (arg0 >= (*(s32 *)D_00533030)) {
        return 0;
    }
    return (*(s32 *)D_00533034) + (arg0 * 0x10);
}
