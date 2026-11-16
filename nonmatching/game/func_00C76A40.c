/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCBDE0[];
extern char D_00CCBDE8[];
extern char D_00CCBDEC[];

u8 func_00C76A40(void) {
    if (*(s32 *)D_00CCBDE8 != -1 && M2C_FIELD(D_00CCBDE0, s32 *, 4) != -1) {
        return M2C_FIELD(*(void **)D_00CCBDEC, u8 *, 0x12);
    }
    return 0;
}
