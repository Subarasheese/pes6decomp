/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA5CC;
extern u8 *D_003EA5D0;
void func_002D5930(u8 *, s32, s32);

s32 func_0091D640(void) {
    func_002D5930((&D_003EA5D0)[D_003EA5CC] + 8, 0, 0xF);
    return 1;
}
