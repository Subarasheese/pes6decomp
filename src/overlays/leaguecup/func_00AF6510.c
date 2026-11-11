/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Settings_Set_B01_b3_w1(s32);
extern void Pes6Settings_Set_B01_b4_w1(s32);
void func_00AF6510(void) {
    Pes6Settings_Set_B01_b4_w1(1);
    Pes6Settings_Set_B01_b3_w1(1);
}
