/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFFCEC[];
extern char D_00CFFCF0[];

void func_00CEB530(void) {
    if ((*(s32 *)D_00CFFCEC) != 0) {
        (*(s32 *)D_00CFFCF0) = 1;
    }
}
