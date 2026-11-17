/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00520238[];

void func_001959E0(s32 arg0, s32 arg1) {
    char *p = *(char **)D_00520238;
    if ((p != NULL) && (*(s32 *)p != 0)) {
        *(s32 *)(p + arg0 * 0x2E54 + 0xDAC) = arg1;
    }
}
