/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9FC8;
extern u8 *D_003E9FCC;
void func_002D5930(u8 *, s32, s32);

s32 func_0035FCE0(void) {
    func_002D5930((&D_003E9FCC)[D_003E9FC8] + 8, 0, 0xF);
    return 1;
}
