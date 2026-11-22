/* compiler: mwcc-3.0.1b198 */
#include "types.h"

s32 SD_call(s32);
extern s32 func_0090F820(void);
extern s32 func_0091A7D0(void);
extern char D_00921D44[];
extern char D_00921DB8[];

s32 func_00901AE0(void) {
    if (func_0090F820() != 0) {
        return 0;
    }
    if (func_0091A7D0() == 0) {
        return 0;
    }
    if ((*(s32 *)D_00921D44) != 1) {
        return 0;
    }
    SD_call(0x84028400);
    (*(s32 *)D_00921DB8) = 6;
    (*(s32 *)D_00921D44) = 8;
    return 0;
}
