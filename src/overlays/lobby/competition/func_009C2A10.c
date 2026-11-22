/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 *strncpy(s8 *, s8 *, u32);
extern s32 D_00A7DD50[];

int func_009C2A10(int arg0, int arg1) {
    int value;

    if (D_00A7DD50[0] == 0) {
        value = 0;
    } else if (arg0 == 0) {
        value = 0;
    } else if (arg1 < 0) {
        value = 0;
    } else {
        strncpy((s8 *)arg0, (s8 *)(D_00A7DD50[0] + 8), arg1);
        value = 1;
    }
    return value;
}
