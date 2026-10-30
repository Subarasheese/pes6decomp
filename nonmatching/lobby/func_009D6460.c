/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009D36F0(void);
extern char D_00A7DE90[];

void func_009D6460(void) {
    if ((*(s32 *)D_00A7DE90) != 0) {
        func_009D36F0();
    }
}
