/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00A09950(void *);
extern s32 func_00BF3FC0(void *);
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591F24[];

s32 func_00997650(u8 *arg0) {
    switch (*(u8 *)D_00591F24) {
    case 2:
    case 6:
        if (arg0[0] == *(u8 *)D_00591E4D) {
            return 2;
        }
        break;
    case 3:
        if (arg0[0] == *(u8 *)D_00591E4D) {
            return 2;
        }
        if (func_00A09950(arg0) == 1 && arg0[0x16] == 0x1A && *(u16 *)(arg0 + 0x18) == 4) {
            return 2;
        }
        break;
    case 1:
        if (arg0[0] == *(u8 *)D_00591E4D) {
            return 2;
        }
        if (func_00BF3FC0(arg0) != 0 && arg0[0] == *(u8 *)D_00591E4E) {
            return 2;
        }
        if (func_00A09950(arg0) == 1 && arg0[0x16] == 0x35) {
            return 2;
        }
        break;
    default:
        break;
    }
    return 1;
}
