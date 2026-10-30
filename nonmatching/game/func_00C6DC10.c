/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CA82D4[];
extern char D_00CCBBBC[];

void func_00C6DC10(void) {
    (*(s32 *)D_00CCBBBC) = (*(s32 *)D_00CA82D4);
}
