/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_0051FEB0[];
extern char D_0051FEB4[];

s32 func_00180F50(s32 arg0) {
    char *p;
    s32 n;

    p = D_0051FEB4;
    if (*(s32 *)D_0051FEB0 != 0) {
        n = 0x10;
        while (1) {
            if (*(s32 *)p == arg0) {
                return *(s32 *)(p + 4);
            }
            n -= 1;
            if (n == 0) break;
            p += 8;
        }
    }
    return 0;
}
