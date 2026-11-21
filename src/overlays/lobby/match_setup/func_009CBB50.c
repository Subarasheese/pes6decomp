/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009E4130(s32);
extern s32 func_009E5860(s32);
extern s8 *D_00A7DDA8[];

s32 func_009CBB50(s32 arg0) {
    s32 value1;
    s32 value2;
    if (*(u8 *)(D_00A7DDA8[0]) == 2) {
        value2 = func_009E5860(arg0);
        return value2;
    } else {
        value1 = func_009E4130(arg0);
        return value1;
    }
}
