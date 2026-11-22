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
extern s32 Pes6BitSet_Lookup(void *, s32);
extern void Pes6BitSet_Write(void *menu, s32 item, s32 enabled);

s32 func_00369EF0(void *menu, const OptionPage *page) {
    const OptionState *state = &page->options;
    u32 enabled, selected;
    Pes6BitSet_Write(menu, 0x97, state->settings & 0x80000);
    Pes6BitSet_Write(menu, 0x98, state->settings & 0x100000);
    Pes6BitSet_Write(menu, 0x99, state->settings & 0x200000);
    Pes6BitSet_Write(menu, 0x9a, state->settings & 1);
    Pes6BitSet_Write(menu, 0x9b, state->settings & 2);
    Pes6BitSet_Write(menu, 0x9c, state->settings & 4);
    Pes6BitSet_Write(menu, 0x9d, state->settings & 8);
    Pes6BitSet_Write(menu, 0x9e, state->settings & 0x10);
    Pes6BitSet_Write(menu, 0x9f, state->settings & 0x20);
    Pes6BitSet_Write(menu, 0xa0, state->settings & 0x40);
    Pes6BitSet_Write(menu, 0xa1, state->settings & 0x80);
    Pes6BitSet_Write(menu, 0xa2, state->settings & 0x100);
    Pes6BitSet_Write(menu, 0xa3, state->settings & 0x200);
    Pes6BitSet_Write(menu, 0xa4, state->settings & 0x400);
    Pes6BitSet_Write(menu, 0xa5, state->settings & 0x800);
    Pes6BitSet_Write(menu, 0xa6, state->settings & 0x1000);
    Pes6BitSet_Write(menu, 0xa7, state->settings & 0x1400);
    Pes6BitSet_Write(menu, 0x94, (state->kind == 1));
    Pes6BitSet_Write(menu, 0xab, state->flags & 1);
    Pes6BitSet_Write(menu, 0xac, state->flags & 2);
    Pes6BitSet_Write(menu, 0xad, state->flags & 4);
    Pes6BitSet_Write(menu, 0xae, state->flags & 8);
    Pes6BitSet_Write(menu, 0xaf, state->flags & 0x10);
    Pes6BitSet_Write(menu, 0xb0, state->flags & 0x20);
    Pes6BitSet_Write(menu, 0xb1, state->flags & 0x40);
    Pes6BitSet_Write(menu, 0xb2, state->flags & 0x80);
    Pes6BitSet_Write(menu, 0xa8, (state->kind == 2));
    Pes6BitSet_Write(menu, 0x8d, (state->format == 2));
    Pes6BitSet_Write(menu, 0x8e, (state->format == 4));
    Pes6BitSet_Write(menu, 0x90, state->options & 0x80);
    Pes6BitSet_Write(menu, 0x91, (state->rule == 4));
    Pes6BitSet_Write(menu, 0x92, (state->rule == 3));
    Pes6BitSet_Write(menu, 0x8b, (state->active == 2));
    enabled = !(state->options & 1);
    if (enabled) {
        selected = Pes6BitSet_Lookup(menu, 0x8b);
        selected |= Pes6BitSet_Lookup(menu, 0x94);
        enabled = Pes6BitSet_Lookup(menu, 0xa8);
        enabled = (enabled | selected) != 0;
    }
    Pes6BitSet_Write(menu, 0x8a, enabled);
    return 1;
}
