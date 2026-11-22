/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00B91490(s32);
extern s32 func_00BBC040(s32);
extern void func_00BC6910(s32);

void func_00BB46B0(s8 *arg0) {
    if (*(s32 *)(arg0) == 1) {
        ((s32 *)(arg0))[0xC] = 2;
    } else {
        ((s32 *)(arg0))[0xC] = 1;
    }
    ((s32 *)(arg0))[0xE] = 0;
    ((s32 *)(arg0))[0xE] = 2;
    ((s32 *)(arg0))[0xF] = 2;
    ((s32 *)(arg0))[0x10] = 2;
    ((s32 *)(arg0))[0x12] = 2;
    ((s32 *)(arg0))[0x11] = 2;
    ((s32 *)(arg0))[0x13] = 0;
    ((s32 *)(arg0))[0x14] = 0;
    ((s32 *)(arg0))[0x15] = 0;
    ((s32 *)(arg0))[0x16] = 0;
    ((s32 *)(arg0))[0x21] = 2;
    ((s32 *)(arg0))[0x22] = 1;
    ((s32 *)(arg0))[0x19] = 0;
    ((s16 *)(arg0))[0x40] = -1;
    ((s16 *)(arg0))[0x41] = -1;
    ((s32 *)(arg0))[0xA] = 0;
    ((s32 *)(arg0))[0xB] = -1;
    func_00B91490(0x15);
    func_00BBC040(0);
    if (*(s32 *)(arg0) == 1) {
        func_00BC6910(0x2A002E);
    } else {
        func_00BC6910(0x2A0030);
    }
}
