/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001388B0(u8 *arg0) {
    if (*(volatile s32 *)(arg0 + 0xC) > 0) {
        *(volatile s32 *)(arg0 + 0xC) = *(volatile s32 *)(arg0 + 0xC) - 1;
    }
}
