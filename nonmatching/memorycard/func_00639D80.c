/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_006587CC[];
extern char D_0065884C[];
extern char D_006588CC[];

void func_00639D80(s32 arg0) {
    (*(s32 *)D_006587CC) = arg0;
    (*(s32 *)D_0065884C) = arg0;
    (*(s32 *)D_006588CC) = arg0;
}
