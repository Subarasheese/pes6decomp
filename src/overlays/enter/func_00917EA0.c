/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA53C;
extern u8 *D_003EA540;
void func_002D5930(u8 *, s32, s32);

s32 func_00917EA0(void) {
    func_002D5930((&D_003EA540)[D_003EA53C] + 16, 0, 0xF);
    return 1;
}
