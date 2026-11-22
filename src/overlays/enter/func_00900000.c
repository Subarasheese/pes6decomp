/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_008FFE70(s32);
extern char D_0092F0A8[];
extern char D_0092F0AC[];
extern char D_0092F0B0[];

s32 func_00900000(void) {
    func_008FFE70((*(s32 *)D_0092F0AC));
    (*(s32 *)D_0092F0AC) = 0;
    (*(s8 *)D_0092F0B0) = 0;
    (*(s32 *)D_0092F0A8) = 0;
    return 1;
}
