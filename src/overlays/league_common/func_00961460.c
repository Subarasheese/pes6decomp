/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00228A00(void);
u64 func_00961460(void) {
    u8 *temp_v0;

    temp_v0 = func_00228A00();
    if (temp_v0 == NULL) {
        return 0U;
    }
    return ((u64)(*temp_v0) << 0x3D) >> 0x3F;
}
