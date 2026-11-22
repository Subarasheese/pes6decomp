/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002F4E10(s32);
extern char D_00A7DB20[];
extern char D_00A7DB28[];

s32 func_0099CFB0(void) {
    func_002F4E10((*(s32 *)D_00A7DB20));
    (*(s32 *)D_00A7DB20) = 0;
    (*(s8 *)D_00A7DB28) = 0;
    return 1;
}
