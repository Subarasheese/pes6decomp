/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003A9B70[];
extern char D_003A9B71[];
extern char D_003A9B72[];
extern char D_003A9B74[];

void func_0023A330(M2C_UNK arg0, M2C_UNK arg1, u8 arg2) {
    (*(s8 *)D_003A9B70) = 0;
    (*(u8 *)D_003A9B71) = 0xFF;
    (*(u8 *)D_003A9B72) = 0xFF;
    (*(u8 *)D_003A9B74) = arg2;
    if ((s32) (*(u8 *)D_003A9B74) > 1) {
        (*(u8 *)D_003A9B74) = 0;
    }
}
