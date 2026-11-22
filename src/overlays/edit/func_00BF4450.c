/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE8E20[];

char *func_00BF4450(s32 arg0) {
    char *temp_a0;

    temp_a0 = ((char *)D_00CE8E20) + (arg0 * 0x146C);
    return temp_a0 + (M2C_FIELD(temp_a0, s32 *, 0x1444) * 0x88);
}
