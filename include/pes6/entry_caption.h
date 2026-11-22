#ifndef PES6_ENTRY_CAPTION_H
#define PES6_ENTRY_CAPTION_H

#include "types.h"
typedef struct {
    char text[0x160];
    s8 primary[16];
    s8 secondary[16];
    u8 reserved180[4];
    u8 flags;
} EntryPage;
extern EntryPage *D_003EA5D0[2];
extern s32 D_003EA5CC;
extern const s32 D_0092E920[];
extern char D_0092E9B0[], D_0092E9B8[], D_0092E9C0[];
extern char *func_001F08B0(s32 id);
extern char *func_001C7F58(char *out, const char *text);
extern char *func_00121430(char *out, const char *text);
extern u32 func_001C80F0(const char *text);

static inline char *entry_caption(s32 player, s32 offset) {
    EntryPage *page = D_003EA5D0[D_003EA5CC];
    s32 primary = page->primary[player];
    s32 secondary = page->secondary[player];
    s32 id;
    char *first, *second, *out;
    id = D_0092E920[primary];
    first = id == 0 ? D_0092E9B0 : func_001F08B0(id);
    id = D_0092E920[secondary];
    second = id == 0 ? D_0092E9B8 : func_001F08B0(id);
    out = D_003EA5D0[D_003EA5CC]->text + offset;
    func_001C7F58(out, first);
    if (D_003EA5D0[D_003EA5CC]->flags & 1) {
        func_00121430(out, D_0092E9C0);
        func_00121430(out, second);
    }
    if (!func_001C80F0(out))
        out = D_0092E9C0;
    return out;
}

#endif
