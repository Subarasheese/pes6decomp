/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0052AB60[];
extern char D_0052AB64[];

void func_001D6C40(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 != 0)) {
        (*(s32 *)D_0052AB60) = arg0;
        (*(s32 *)D_0052AB64) = arg1;
        return;
    }
    (*(s32 *)D_0052AB60) = 0;
    (*(s32 *)D_0052AB64) = 0;
}
