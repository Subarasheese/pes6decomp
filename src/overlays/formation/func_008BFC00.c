/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 Pes6Settings_Get_B01_b4_w1(void);
extern char D_00591C09[];

void func_008BFC00(void *arg0) {
    if (((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
        M2C_FIELD(arg0, u8 *, 0x73B) = 0U;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x73B) = Pes6Settings_Get_B01_b4_w1();
}
