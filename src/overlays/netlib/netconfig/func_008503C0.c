/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008B1598[];

void *func_008503C0(u8 arg0, int arg1) {
    void *pvVar1;

    pvVar1 = *(void **)((arg0 & 1) * 4 + (u32)D_008B1598);
    if (pvVar1 != 0) {
        do {
            if ((u32) * (u8 *)((int)pvVar1 + 0x12) == (arg1 & 0xffU)) {
                return pvVar1;
            }
            pvVar1 = *(void **)((int)pvVar1 + 4);
        } while (pvVar1 != 0);
    }
    return 0;
}
