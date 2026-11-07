/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00537B50[];
extern char D_00537B54[];

s32 func_00216990(void *arg0) {
    s32 *temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 **, 0xB0);
    if ((*(s32 *)D_00537B50) == 1) {
        *temp_a0 = (*(s32 *)D_00537B54);
    } else {
        *temp_a0 = 1;
    }
    (*(s32 *)D_00537B54) = 0;
    (*(s32 *)D_00537B50) = 0;
    return -0x80;
}
