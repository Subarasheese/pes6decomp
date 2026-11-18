/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA5DC;
extern u8 *D_003EA5E0;
void func_002D5930(u8 *, s32, s32);

s32 func_00922480(void) {
    func_002D5930((&D_003EA5E0)[D_003EA5DC] + 8, 0, 0xF);
    return 1;
}
