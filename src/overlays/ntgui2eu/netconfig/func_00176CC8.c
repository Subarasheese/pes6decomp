/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u32 tag, address, reserved, command;
    u8 rest[0x90];
} DmaSlot;
typedef struct {
    u8 reserved00[0x4ec];
    s32 slot;
    u8 reserved4f0[0x5e0];
    DmaSlot slots[6];
    u8 reservedE90[4];
    u32 address;
} DmaWindow;
extern s32 func_0018A3F0(s32, s32, s32, s32);
void func_00176CC8(DmaWindow *w) {
    u32 addr = w->address;
    w->slots[w->slot].tag = 0x30000040;
    w->slots[w->slot].address = addr & 0x0fffffff;
    w->slots[w->slot].reserved = 0;
    w->slots[w->slot].command = func_0018A3F0(0x50, 0, 0x40, 0);
}
