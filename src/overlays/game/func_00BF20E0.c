/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005922AC[];
extern char D_00CBBE33[];

void func_00BF20E0(u8 *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0xB0);
    if (temp_a0 & 0x1000) {
        (*(s8 *)D_00CBBE33) = 1;
        (*(u16 *)D_005922AC) = ((*(u16 *)D_005922AC) * 0x69) / 100;
    } else if (temp_a0 & 0x4000) {
        (*(u16 *)D_005922AC) = ((*(u16 *)D_005922AC) * 0x64) / 105;
    }
    if ((s32) (*(u16 *)D_005922AC) >= 0x13D) {
        (*(u16 *)D_005922AC) = 0x13C;
    }
}
