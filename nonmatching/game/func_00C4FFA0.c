/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_003EA7F8;
extern char D_00CCB988[];
extern char D_00CCB98C[];
extern char D_00CCB990[];

void func_00C4FFA0(s32 arg0, s32 arg1) {
    D_003EA7F8 = ((void *)D_00CCB988);
    (*(s32 *)D_00CCB990) = arg0;
    (*(s32 *)D_00CCB988) = arg0;
    (*(s32 *)D_00CCB98C) = arg1;
}
