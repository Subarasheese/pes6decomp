/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern u8 D_00591C09;
extern u8 D_00CCBD1F;
void func_00C70720(u32 value) {
    if (D_00591C09 == 5)
        value = 0;
    D_00CCBD1F = value;
}
