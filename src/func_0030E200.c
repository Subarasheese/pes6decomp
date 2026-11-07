/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C18720();                                /* extern */

s32 func_0030E200(void) {
    s32 temp_v1;

    temp_v1 = func_00C18720() & 0xFF;
    return (((temp_v1 & 0x7F) / 15) - ((temp_v1 >> 7) != 0)) & 0xFF;
}
