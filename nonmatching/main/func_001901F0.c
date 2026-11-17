/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00188E10(s32);
extern char D_0051FF4F[];
extern char D_00520220[];

void func_001901F0(s32 arg0) {
    s32 i;
    u8 *p;

    if ((*(u8 **)D_00520220) != NULL) {
        *(*(u8 **)D_00520220) = 0;
        if ((*(u8 *)D_0051FF4F) & 0x10) {
            if (func_00188E10(1) == 1) {
                goto block_7;
            }
            if (func_00188E10(0) == 1) {
block_7:
                *(*(u8 **)D_00520220) = 2;
            }
        }
        if (arg0 == 1) {
            i = 0;
            p = (*(u8 **)D_00520220) + 0x1C;
            do {
                p[0] = 0;
                i += 6;
                p[0x448] = 0;
                p[0x890] = 0;
                p[0xCD8] = 0;
                p[0x1120] = 0;
                p[0x1568] = 0;
                p += 0x19B0;
            } while (i < 0xC);
        }
    }
}
