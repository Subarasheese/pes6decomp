/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 D_008B15A0[];
extern u32 D_008B1594[];

int func_008505B0(int arg0) {
    u32 value;

    if (D_008B15A0[0] == 0) {
        value = 0;
    } else {
        if (D_008B15A0[0] == 0) {
            value = 0;
        } else {
            value = *(u32 *)(D_008B15A0[0] + 0x34) & ~D_008B1594[0];
        }
        value = value & arg0;
    }
    return value;
}
