/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0052AB94[];
extern char D_0052ABA8[];

void func_001DAA60(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 != 0)) {
        (*(s32 *)D_0052AB94) = arg0;
        (*(s32 *)D_0052ABA8) = arg1;
    }
}
