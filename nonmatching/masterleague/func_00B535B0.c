/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
s32 func_00B535B0(void) {
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 7);
        switch (temp_v1) {                          /* irregular */
        case 0:
            return 1;
        case 1:
            return 2;
        default:
            return -1;
        }
    } else {
        return -1;
    }
}
