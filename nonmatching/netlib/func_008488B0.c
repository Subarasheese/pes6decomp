/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00858C60();                                /* extern */
extern char D_008B146D[];

u8 func_008488B0(u8 arg0) {
    u8 *temp_v1;

    temp_v1 = ((void *)D_008B146D) + (func_00858C60() & 0xFF);
    if (*temp_v1 == 0) {
        *temp_v1 = arg0;
    } else {
        *temp_v1 = 0;
    }
    return *temp_v1;
}
