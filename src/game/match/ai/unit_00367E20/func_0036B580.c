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
extern void func_00313B30(void *menu, s32 item, s32 enabled);

s32 func_0036B580(void *menu, const OptionPage *page) {
    const OptionState *state = &page->options;
    u8 selection;

    selection = state->selection;
    func_00313B30(menu, 0x15, (state->pageGroup == 0));
    func_00313B30(menu, 0x16, (selection < 6));
    func_00313B30(menu, 0x17, (selection == 0));
    func_00313B30(menu, 0x18, (selection == 1));
    func_00313B30(menu, 0x19, (selection == 2));
    func_00313B30(menu, 0x1a, (selection == 3));
    func_00313B30(menu, 0x1b, (selection == 4));
    func_00313B30(menu, 0x1c, (selection == 5));
    func_00313B30(menu, 0x1d, (selection == 6));
    func_00313B30(menu, 0x1e, (selection == 7));
    func_00313B30(menu, 0x1f, (selection == 8));
    func_00313B30(menu, 0x20, (selection == 9));
    func_00313B30(menu, 0x21, (selection == 10));
    func_00313B30(menu, 0x22, (selection == 0xb));
    func_00313B30(menu, 0x23, (selection == 0xc));
    func_00313B30(menu, 0x24, (selection == 0xd));
    func_00313B30(menu, 0x25, (selection == 0xe));
    func_00313B30(menu, 0x26, (selection == 0xf));
    func_00313B30(menu, 0x27, (selection == 0x10));
    func_00313B30(menu, 0x28, (selection == 0x11));
    func_00313B30(menu, 0x29, (selection == 0x12));
    func_00313B30(menu, 0x2a, (selection == 0x13));
    func_00313B30(menu, 0x2b, (selection == 0x14));
    func_00313B30(menu, 0x2c, (selection == 0x15));
    func_00313B30(menu, 0x2d, (selection == 0x16));
    func_00313B30(menu, 0x2e, (selection == 0x17));
    func_00313B30(menu, 0x2f, (selection == 0x18));
    func_00313B30(menu, 0x30, (selection == 0x19));
    func_00313B30(menu, 0x31, (selection == 0x1a));
    func_00313B30(menu, 0x32, (selection == 0x1b));
    func_00313B30(menu, 0x33, (selection == 0x1c));
    func_00313B30(menu, 0x34, (selection == 0x1d));
    func_00313B30(menu, 0x35, (selection == 0x1e));
    func_00313B30(menu, 0x36, (selection == 0x1f));
    func_00313B30(menu, 0x37, (selection == 0x20));
    func_00313B30(menu, 0x38, (selection == 0x21));
    func_00313B30(menu, 0x39, (selection == 0x22));
    func_00313B30(menu, 0x3a, (selection == 0x23));
    func_00313B30(menu, 0x3b, (selection == 0x24));
    func_00313B30(menu, 0x3c, (selection == 0x25));
    func_00313B30(menu, 0x3d, (selection == 0x26));
    func_00313B30(menu, 0x3e, (selection == 0x27));
    func_00313B30(menu, 0x3f, (selection == 0x28));
    func_00313B30(menu, 0x40, (selection == 0x29));
    func_00313B30(menu, 0x41, (selection == 0x2a));
    func_00313B30(menu, 0x42, (selection == 0x2b));
    func_00313B30(menu, 0x43, (selection == 0x2c));
    func_00313B30(menu, 0x44, (selection == 0x2d));
    func_00313B30(menu, 0x45, state->options & 4);
    return 1;
}
