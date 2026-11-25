/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern u8 D_00CCB9A0[0x24];
extern u8 *D_003EA7FC;
void func_00C549C0(void) {
    D_003EA7FC = D_00CCB9A0;
    func_001C48E8(D_00CCB9A0, 0, sizeof(D_00CCB9A0));
}
