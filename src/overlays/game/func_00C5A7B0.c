/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern u8 D_00CCBA20[0x120];
extern u8 *D_003EA804;
void func_00C5A7B0(void) {
    D_003EA804 = D_00CCBA20;
    func_001C48E8(D_00CCBA20, 0, sizeof(D_00CCBA20));
}
