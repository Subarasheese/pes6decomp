/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00223A80(void);
extern void *func_002EE260(s32, s32);

void * func_002EE160(s32 input) {
    s32 value = input;
    s32 selected = 0x99;
    if (value >= 0x124 && value < 0x1BA) {
        selected = M2C_FIELD((value - 0x124) + func_00223A80(), u8 *, 6);
    } else if (value == 0x1BA) {
        selected = 0x97;
    } else if (value == 0x1BB) {
        selected = 0x98;
    }
    return func_002EE260(selected, 1);
}
