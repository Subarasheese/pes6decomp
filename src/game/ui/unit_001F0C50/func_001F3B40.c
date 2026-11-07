/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001E6E10();                                /* extern */
extern char D_0052B230[];
extern char D_0052B234[];

void func_001F3B40(s32 arg0) {
    (*(s32 *)D_0052B230) = arg0;
    (*(s32 *)D_0052B234) = func_001E6E10();
}
