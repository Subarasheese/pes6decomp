/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 unused00[5];
    u8 pageGroup, selection;
    u8 unused1F[5];
    s32 active, mode;
    u8 unused2C[12];
    s32 format, rule;
    u32 unused40;
    u32 options;
    u8 kind;
    u8 unused49[3];
    u32 settings, flags;
} OptionState;
typedef struct {
    u8 prefix[0x18];
    OptionState options;
} OptionPage;
extern void Pes6BitSet_Write(void *menu, s32 item, s32 enabled);

s32 func_0036B170(void *menu, const OptionPage *page) {
    const OptionState *state = &page->options;
    u8 selection;

    selection = state->selection;
    Pes6BitSet_Write(menu, 0x46, (state->pageGroup == 1));
    Pes6BitSet_Write(menu, 0x47, (selection < 0x33));
    Pes6BitSet_Write(menu, 0x48, (selection == 0x2d));
    Pes6BitSet_Write(menu, 0x49, (selection == 0x2e));
    Pes6BitSet_Write(menu, 0x4a, (selection == 0x2f));
    Pes6BitSet_Write(menu, 0x4b, (selection == 0x30));
    Pes6BitSet_Write(menu, 0x4c, (selection == 0x31));
    Pes6BitSet_Write(menu, 0x4d, (selection == 0x32));
    Pes6BitSet_Write(menu, 0x4e, (selection == 0x33));
    Pes6BitSet_Write(menu, 0x4f, (selection == 0x34));
    Pes6BitSet_Write(menu, 0x50, (selection == 0x35));
    Pes6BitSet_Write(menu, 0x51, (selection == 0x36));
    Pes6BitSet_Write(menu, 0x52, (selection == 0x37));
    Pes6BitSet_Write(menu, 0x53, (selection == 0x38));
    Pes6BitSet_Write(menu, 0x54, (selection == 0x39));
    Pes6BitSet_Write(menu, 0x55, (selection == 0x3a));
    Pes6BitSet_Write(menu, 0x56, (selection == 0x3b));
    Pes6BitSet_Write(menu, 0x57, (selection == 0x3c));
    Pes6BitSet_Write(menu, 0x58, (selection == 0x3d));
    Pes6BitSet_Write(menu, 0x59, (selection == 0x3e));
    Pes6BitSet_Write(menu, 0x5a, (selection == 0x3f));
    Pes6BitSet_Write(menu, 0x5b, (selection == 0x40));
    Pes6BitSet_Write(menu, 0x5c, (selection == 0x41));
    Pes6BitSet_Write(menu, 0x5d, (selection == 0x42));
    Pes6BitSet_Write(menu, 0x5e, (selection == 0x43));
    Pes6BitSet_Write(menu, 0x5f, (selection == 0x44));
    Pes6BitSet_Write(menu, 0x60, (selection == 0x45));
    Pes6BitSet_Write(menu, 0x61, (selection == 0x46));
    Pes6BitSet_Write(menu, 0x62, (selection == 0x47));
    Pes6BitSet_Write(menu, 99, (selection == 0x48));
    Pes6BitSet_Write(menu, 100, (selection == 0x49));
    Pes6BitSet_Write(menu, 0x65, (selection == 0x4a));
    Pes6BitSet_Write(menu, 0x66, (selection == 0x4b));
    Pes6BitSet_Write(menu, 0x67, (selection == 0x4c));
    Pes6BitSet_Write(menu, 0x68, (selection == 0x4d));
    Pes6BitSet_Write(menu, 0x69, (selection == 0x4e));
    Pes6BitSet_Write(menu, 0x6a, (selection == 0x4f));
    Pes6BitSet_Write(menu, 0x6b, (selection == 0x50));
    Pes6BitSet_Write(menu, 0x6c, (selection == 0x51));
    Pes6BitSet_Write(menu, 0x6d, (selection == 0x52));
    Pes6BitSet_Write(menu, 0x6e, (selection == 0x53));
    Pes6BitSet_Write(menu, 0x6f, (selection == 0x54));
    Pes6BitSet_Write(menu, 0x70, (selection == 0x55));
    Pes6BitSet_Write(menu, 0x71, (selection == 0x56));
    Pes6BitSet_Write(menu, 0x72, (selection == 0x57));
    Pes6BitSet_Write(menu, 0x73, (selection == 0x58));
    Pes6BitSet_Write(menu, 0x74, (selection == 0x59));
    Pes6BitSet_Write(menu, 0x75, (selection == 0x5a));
    Pes6BitSet_Write(menu, 0x76, state->options & 4);
    return 1;
}
