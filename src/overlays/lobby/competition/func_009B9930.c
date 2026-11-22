/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009B86B0(s64);
extern s32 func_009B8660(s64);
extern s32 func_009B85B0(void);
extern s32 D_00A7DC18[];

u32 func_009B9930(void) {
    u32 value;

    value = 0;
    if ((D_00A7DC18[0] == 4) || (D_00A7DC18[0] - 6U < 3)) {
        func_009B86B0(1);
        func_009B8660(1);
        func_009B85B0();
        D_00A7DC18[0] = 5;
    } else {
        value = 7;
    }
    return value;
}
