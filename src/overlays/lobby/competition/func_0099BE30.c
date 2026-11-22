/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001F1EA0(s32);
extern char D_00A7DB00[];
extern char D_00A7DB08[];

void func_0099BE30(void) {
    if ((*(s32 *)D_00A7DB00) != 0) {
        func_001F1EA0((*(s32 *)D_00A7DB00));
        (*(s32 *)D_00A7DB00) = 0;
        (*(s32 *)D_00A7DB08) = 0;
    }
}
