/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00CBFAA0[];

void *func_00C13740(u8 *arg0, s32 arg1) {
    u8 *p;
    u8 *end;

    if ((s32)arg0 != -1) {
        p = arg0 + 4;
        end = ((u8 *)D_00CBFAA0) + (M2C_FIELD(((void *)D_00CBFAA0), u16 *, 0xB222) * 4);
        while (p < end) {
            if (p[2] == (arg1 & 0xFF)) {
                return (void *) p;
            }
            p += 4;
        }
    }
    return (void *)-1;
}
