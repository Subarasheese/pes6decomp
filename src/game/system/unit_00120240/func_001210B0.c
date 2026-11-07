/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_003FAE64[];
extern char D_003FAE65[];

void func_001210B0(s32 arg0) {
    u8 temp_a1;

    temp_a1 = arg0 & 0xFF;
    if ((*(u8 *)D_003FAE64) != temp_a1) {
        (*(u8 *)D_003FAE64) = temp_a1;
        (*(s8 *)D_003FAE65) = 0;
    }
}
