/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00537B50[];
extern char D_00537B54[];

s32 func_00215C60(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0xB0);
    if ((*(s32 *)D_00537B50) == 1) {
        M2C_FIELD(temp_a1, s32 *, 0) = (s32) (*(s32 *)D_00537B54);
    } else {
        M2C_FIELD(temp_a1, s32 *, 0) = 1;
    }
    (*(s32 *)D_00537B54) = 0;
    (*(s32 *)D_00537B50) = 0;
    M2C_FIELD(temp_a1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_a1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0xC0);
    return -0x80;
}
