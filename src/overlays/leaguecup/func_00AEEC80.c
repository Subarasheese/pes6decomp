/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_003EAD44;

int func_00AEEC80(int arg0)

{
    int value;
    int value2;

    if (D_003EAD44 == 0) {
        value2 = 0xffff;
    } else if ((arg0 & 0xffffU) == 0xffff) {
        value2 = 0;
    } else {
        value = 0;
        value2 = D_003EAD44;
        do {
            if ((arg0 & 0xffffU) == (u32) * (u16 *)(value2 + 0x208a)) {
                return 1;
            }
            value = value + 1;
            value2 = value2 + 2;
        } while (value < 0x20);
        value2 = 0;
    }
    return value2;
}
