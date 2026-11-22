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

s32 func_0036A230(void *menu, const OptionPage *page) {
    const OptionState *state = &page->options;
    s32 mode;
    u32 enabled;

    mode = state->mode;
    Pes6BitSet_Write(menu, 0x5e, state->options & 1);
    Pes6BitSet_Write(menu, 0x60, !(state->settings & 0x8000000));
    Pes6BitSet_Write(menu, 0x61, state->options & 2);
    Pes6BitSet_Write(menu, 0x62, (mode == 2));
    Pes6BitSet_Write(menu, 99, (mode == 4));
    enabled = mode == 2;
    if (enabled)
        enabled = !(state->settings & 0x1d30);
    Pes6BitSet_Write(menu, 0x65, enabled);
    Pes6BitSet_Write(menu, 0x68, (state->active == 1));
    Pes6BitSet_Write(menu, 0x69, state->settings & 1);
    Pes6BitSet_Write(menu, 0x6a, state->settings & 2);
    Pes6BitSet_Write(menu, 0x6b, state->settings & 4);
    Pes6BitSet_Write(menu, 0x6c, state->settings & 8);
    Pes6BitSet_Write(menu, 0x6d, state->settings & 0x10);
    Pes6BitSet_Write(menu, 0x6e, state->settings & 0x20);
    Pes6BitSet_Write(menu, 0x6f, state->settings & 0x40);
    Pes6BitSet_Write(menu, 0x70, (mode == 2));
    Pes6BitSet_Write(menu, 0x71, (mode != 2));
    Pes6BitSet_Write(menu, 0x72, state->settings & 0x80);
    Pes6BitSet_Write(menu, 0x73, (mode == 2));
    Pes6BitSet_Write(menu, 0x74, (mode != 2));
    Pes6BitSet_Write(menu, 0x75, state->settings & 0x100);
    Pes6BitSet_Write(menu, 0x76, state->settings & 0x200);
    Pes6BitSet_Write(menu, 0x77, state->settings & 0x400);
    Pes6BitSet_Write(menu, 0x78, state->settings & 0x800);
    Pes6BitSet_Write(menu, 0x79, state->settings & 0x1000);
    Pes6BitSet_Write(menu, 0x7a, state->settings & 0x2000);
    Pes6BitSet_Write(menu, 0x7b, state->settings & 0x4000);
    Pes6BitSet_Write(menu, 0x7c, state->settings & 0x8000);
    Pes6BitSet_Write(menu, 0x7d, state->settings & 0x10000);
    Pes6BitSet_Write(menu, 0x7e, state->settings & 0x20000);
    Pes6BitSet_Write(menu, 0x7f, state->settings & 0x40000);
    Pes6BitSet_Write(menu, 0x5f, (state->kind == 1));
    Pes6BitSet_Write(menu, 0x80, (state->kind == 2));
    Pes6BitSet_Write(menu, 0x81, !(state->flags & 0x100));
    Pes6BitSet_Write(menu, 0x83, state->flags & 8);
    Pes6BitSet_Write(menu, 0x84, state->flags & 0x10);
    Pes6BitSet_Write(menu, 0x85, state->flags & 0x100);
    Pes6BitSet_Write(menu, 0x86, state->flags & 0x200);
    Pes6BitSet_Write(menu, 0x87, state->flags & 1);
    Pes6BitSet_Write(menu, 0x88, state->flags & 2);
    Pes6BitSet_Write(menu, 0x89, state->flags & 4);
    return 1;
}
