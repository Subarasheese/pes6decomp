/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 D_0050E334;
extern s8 *func_0016A370(void);
extern s8 *strncpy(s8 *, s8 *, u32);

s32 func_0016A458(s8 *arg0, s32 arg1) {
    s8 *value1;
    if (D_0050E334 == 0) {
        return -1;
    } else {
        value1 = func_0016A370();
        if (value1 == 0) {
            return -2;
        } else {
            strncpy(value1, arg0, 0xC);
            ((s32 *)(value1))[3] = arg1;
            return 0;
        }
    }
}
