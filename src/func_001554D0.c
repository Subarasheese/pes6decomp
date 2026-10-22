/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0050D8C0[];
extern s32 D_003E9838;
void func_001118E0(void);
void func_001C48E8(void *dst, s32 val, s32 size);

void func_001554D0(void) {
    func_001118E0();
    func_001C48E8(D_0050D8C0, 0, 0xA00);
    func_001C48E8(&D_003E9838, 0, 2);
}
