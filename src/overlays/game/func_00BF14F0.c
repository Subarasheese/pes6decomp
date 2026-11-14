/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_00A87E80(char *);
s32 func_00BBB990(u16, s32);
s32 func_00BBB9C0(u16, s32);
void func_00BF1590();

void func_00BF14F0(char *arg0) {
    u8 temp_v1;

    func_00BF1590();
    temp_v1 = *(u8 *)(arg0 + 0x48);
    if ((temp_v1 != 0xFF) && (temp_v1 != 0)) {
        func_00A87E80(arg0);
    } else {
        *(s32 *)(arg0 + 0x9C) = (s32) (*(f32 *)(arg0 + 0xE0) + (f32) func_00BBB990(*(u16 *)(arg0 + 0x228), *(s32 *)(arg0 + 0x224)));
        *(s32 *)(arg0 + 0xA0) = (s32) (*(f32 *)(arg0 + 0xE8) + (f32) func_00BBB9C0(*(u16 *)(arg0 + 0x228), *(s32 *)(arg0 + 0x224)));
    }
}
