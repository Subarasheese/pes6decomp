/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
s32 func_009E1C90(M2C_UNK);
extern char D_005926FD[];
extern char D_005926FF[];
s32 func_00BDA1E0(void) {
    if ((func_009E1C90(0) & 0xFF) != 4) return 0;
    if ((func_009E1C90(1) & 0xFF) == 0xE && (*(u8 *)D_005926FD) == 1 && (*(u8 *)D_005926FF) == 2) return 1;
    return 0;
}
