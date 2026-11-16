/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_005E2F70[];
extern char D_005E2F78[];
extern char D_005E2F9C[];
extern char D_005E30E1[];

s32 func_002B9A60(char *arg0) {
    char *p;
    s32 i;

    i = 0;
    p = D_005E2F70;
    do {
        if (*(u8 *)(p + 0x377) == *(u8 *)D_005E30E1) break;
        i += 1;
        p += 1;
    } while (i < 0x1D);
    if (*(s32 *)(arg0 + 4) < i + 1) {
        *(D_005E2F9C + *(s32 *)D_005E2F78) = 0;
    }
    return 0;
}
