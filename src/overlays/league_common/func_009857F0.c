/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 *func_002260A0(void);
extern s32 func_00225B20(u8);

void func_009857F0(void) {
    u8 *entry;
    int value;
    int value2;

    entry = func_002260A0();
    if (entry == (u8 *)0x0) {
        return;
    }
    value2 = 0;
    entry[1] = 0xff;
    do {
        value = func_00225B20((u8)value2);
        if (value == 1) {
            entry[1] = (u8)value2;
            return;
        }
        value2 = value2 + 1;
    } while (value2 < 0x48);
}
