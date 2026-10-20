/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0051FF58[];
extern char D_0051FF5C[];
extern char D_0051FF60[];

void func_001A3460(s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *)D_0051FF58) = arg0;
    (*(s32 *)D_0051FF5C) = arg1;
    if (arg2 != -1) {
        (*(s32 *)D_0051FF60) = arg2;
    }
}
