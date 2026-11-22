/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/sdk4.c (func_004098F8). See THIRD_PARTY.md. */
#include "types.h"
s32 func_0016EA68(void) {
    extern signed char D_003865D0[];
    s32 i;
    signed char *p = D_003865D0;
    for (i = 0; i < 40; i++, p += 0x48)
        if ((p[0] == 1) && (p[2] == 2))
            return 1;

    return 0;
}
