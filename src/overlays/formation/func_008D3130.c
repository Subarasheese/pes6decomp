/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001D7D60(s32, s32);
extern s32 D_003EA4F4;

void func_008D3130(void *arg0) {
    unsigned char value;
    if (((arg0 != 0) && ((((s32)D_003EA4F4) % 16) == 0)) &&
        ((*((s32 *)(((s8 *)arg0) + 0x58))) != 0)) {
        value = (u32)D_003EA4F4;
        func_001D7D60(*((s32 *)(0x4C + ((s8 *)arg0))), ((D_003EA4F4 / 10) + (value >> 0x1F)) & 1);
    }
}
