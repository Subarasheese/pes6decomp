/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00520220[];

void func_001902D0(s8 arg0, s32 arg1) {
    s32 i;
    u8 *p;

    if ((*(u8 **)D_00520220) != NULL) {
        (*(u8 **)D_00520220)[0] = arg0;
        (*(u8 **)D_00520220)[1] = 0;
        (*(u8 **)D_00520220)[2] = 0;
        if (arg1 == 1) {
            p = (*(u8 **)D_00520220) + 0x1C;
            for (i = 0; i < 12; i += 6) {
                p[0] = 0;
                p[0x448] = 0;
                p[0x890] = 0;
                p[0xCD8] = 0;
                p[0x1120] = 0;
                p[0x1568] = 0;
                p += 0x19B0;
            }
        }
    }
}
