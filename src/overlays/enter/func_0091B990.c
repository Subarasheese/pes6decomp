/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA550;
extern u8 *D_003EA554;
void func_002D5930(u8 *, s32, s32);

s32 func_0091B990(void) {
    func_002D5930((&D_003EA554)[D_003EA550] + 8, 0, 0xF);
    return 1;
}
