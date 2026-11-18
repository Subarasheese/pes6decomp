/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA5E4;
extern u8 *D_003EA5E8;
void func_002D5930(u8 *, s32, s32);

s32 func_00923C50(void) {
    func_002D5930((&D_003EA5E8)[D_003EA5E4] + 8, 0, 0xF);
    return 1;
}
