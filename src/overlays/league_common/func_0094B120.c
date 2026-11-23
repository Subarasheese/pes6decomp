/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 Pes6Settings_Get_B01_b3_w1(void);
extern void func_0094B170(u16 index);
void func_0094B120(void) {
    s32 index;
    if (Pes6Settings_Get_B01_b3_w1() == 0) {
        return;
    }
    index = 0;
    do {
        func_0094B170((u16)index);
        index++;
    } while (index < 0x400);
}
