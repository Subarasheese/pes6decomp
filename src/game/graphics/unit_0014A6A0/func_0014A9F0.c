/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0050D440[];
extern u8 D_0014AA30[];
void func_001C48E8(void *dst, s32 val, s32 size);
void sceGsSyncVCallback(u8 *arg0);

void func_0014A9F0(void) {
    func_001C48E8(D_0050D440, 0, 0x40);
    sceGsSyncVCallback(D_0014AA30);
}
