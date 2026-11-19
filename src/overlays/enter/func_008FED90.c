/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA518;
extern u8 *D_003EA51C;
void func_002D5930(u8 *, s32, s32);

s32 func_008FED90(void) {
    func_002D5930((&D_003EA51C)[D_003EA518] + 8, 0, 0xF);
    return 1;
}
