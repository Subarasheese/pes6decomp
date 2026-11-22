/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00130A78(void);
extern s32 func_00154300(void);

s32 func_0012FE68(void) {
    s32 value1;
    s32 value2;
    value1 = func_00154300();
    if (value1 != 0) {
        value2 = func_00130A78();
        return value2;
    } else {
        return 2;
    }
}
