/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_00592800[];
extern char D_00592801[];
extern u8 D_0059295B[];
extern u8 D_0059295C[];

int func_0026ADC0(int arg0) {
    u32 value;
    u8 *entry;
    int value2;

    value2 = 0;
    entry = (u8 *)D_00592800;
    do {
        if (arg0 == (u32)*entry) {
            return (u32) * (u8 *)(value2 * 0x28 + (u32)D_00592801);
        }
        value2 = value2 + 1;
        entry = entry + 0x28;
    } while (value2 < 8);
    if ((u32)D_0059295B[0] == arg0) {
        value = 0;
    } else {
        value = (u32)((u32)D_0059295C[0] == arg0);
    }
    return value;
}
