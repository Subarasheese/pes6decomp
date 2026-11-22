/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 unused00[5];
    u8 pageGroup, selection;
    u8 unused1F[5];
    s32 active, pageMode;
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
extern s32 func_00313AF0(void *, s32);
extern void func_00313B30(void *menu, s32 item, s32 enabled);

s32 func_00369EF0(void *menu, const OptionPage *page) {
    const OptionState *state = &page->options;
    u32 enabled, selected;
    func_00313B30(menu, 0x97, state->settings & 0x80000);
    func_00313B30(menu, 0x98, state->settings & 0x100000);
    func_00313B30(menu, 0x99, state->settings & 0x200000);
    func_00313B30(menu, 0x9a, state->settings & 1);
    func_00313B30(menu, 0x9b, state->settings & 2);
    func_00313B30(menu, 0x9c, state->settings & 4);
    func_00313B30(menu, 0x9d, state->settings & 8);
    func_00313B30(menu, 0x9e, state->settings & 0x10);
    func_00313B30(menu, 0x9f, state->settings & 0x20);
    func_00313B30(menu, 0xa0, state->settings & 0x40);
    func_00313B30(menu, 0xa1, state->settings & 0x80);
    func_00313B30(menu, 0xa2, state->settings & 0x100);
    func_00313B30(menu, 0xa3, state->settings & 0x200);
    func_00313B30(menu, 0xa4, state->settings & 0x400);
    func_00313B30(menu, 0xa5, state->settings & 0x800);
    func_00313B30(menu, 0xa6, state->settings & 0x1000);
    func_00313B30(menu, 0xa7, state->settings & 0x1400);
    func_00313B30(menu, 0x94, (state->kind == 1));
    func_00313B30(menu, 0xab, state->flags & 1);
    func_00313B30(menu, 0xac, state->flags & 2);
    func_00313B30(menu, 0xad, state->flags & 4);
    func_00313B30(menu, 0xae, state->flags & 8);
    func_00313B30(menu, 0xaf, state->flags & 0x10);
    func_00313B30(menu, 0xb0, state->flags & 0x20);
    func_00313B30(menu, 0xb1, state->flags & 0x40);
    func_00313B30(menu, 0xb2, state->flags & 0x80);
    func_00313B30(menu, 0xa8, (state->kind == 2));
    func_00313B30(menu, 0x8d, (state->format == 2));
    func_00313B30(menu, 0x8e, (state->format == 4));
    func_00313B30(menu, 0x90, state->options & 0x80);
    func_00313B30(menu, 0x91, (state->rule == 4));
    func_00313B30(menu, 0x92, (state->rule == 3));
    func_00313B30(menu, 0x8b, (state->active == 2));
    enabled = !(state->options & 1);
    if (enabled) {
        selected = func_00313AF0(menu, 0x8b);
        selected |= func_00313AF0(menu, 0x94);
        enabled = func_00313AF0(menu, 0xa8);
        enabled = (enabled | selected) != 0;
    }
    func_00313B30(menu, 0x8a, enabled);
    return 1;
}
