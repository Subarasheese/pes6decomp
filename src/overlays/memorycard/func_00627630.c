/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u16 *func_006247E0();
u16 func_00627630(s32 arg0) {
    u16 *temp_v0;
    if (arg0 == 0) {
        return 0U;
    }
    temp_v0 = func_006247E0();
    if (temp_v0 == NULL) {
        return 0U;
    }
    return *temp_v0;
}
