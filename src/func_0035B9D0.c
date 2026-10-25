/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9FC0;
extern u8 *D_003E9FC4;
void func_0035C5C0(void);
void func_002D5930(u8 *, s32, s32);

s32 func_0035B9D0(void) {
    func_0035C5C0();
    func_002D5930((&D_003E9FC4)[D_003E9FC0] + 8, 0, 0xF);
    return 1;
}
