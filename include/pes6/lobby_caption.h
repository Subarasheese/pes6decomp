#ifndef PES6_LOBBY_CAPTION_H
#define PES6_LOBBY_CAPTION_H

#include "types.h"

struct Obj;

typedef struct {
    u8 reserved00[0xC];
    struct Obj *widget;
} LobbyCaption;

typedef struct {
    u8 reserved00[0x1C];
    LobbyCaption *labels[12];
    LobbyCaption *captions[12];
    LobbyCaption *pageNumber;
    u8 reserved80[0x9C];
    u8 selection, page;
    u8 reserved11E[2];
    s32 selectionEnabled;
} LobbyCaptionPage;

extern LobbyCaptionPage *D_00A7DF08[];
extern const char D_00A03220[];
void func_001DF820(struct Obj *widget, s32 text);
s32 func_001F08B0(s32 key);
int sprintf(char *buffer, const char *format, ...);
s32 func_009E47D0(u8 selection);

static inline void lobby_write_caption(LobbyCaption *caption, const char *text) {
    const char *display = text;
    if (caption) {
        if (!text || !*text)
            display = D_00A03220;
        func_001DF820(caption->widget, (s32)display);
    }
}

static inline s32 lobby_set_caption(s32 index, const char *text) {
    LobbyCaptionPage *page = D_00A7DF08[0];
    if (!page)
        return 0;
    lobby_write_caption(page->captions[index], text);
    func_009E47D0(D_00A7DF08[0]->selection);
    return 1;
}

static inline s32 lobby_set_option_caption(s32 index, s32 enabled) {
    LobbyCaptionPage *page = D_00A7DF08[0];
    LobbyCaption *caption;
    const char *text;
    if (!page)
        return 0;
    caption = page->captions[index];
    text = (const char *)func_001F08B0(enabled ? 0x6C000A : 0x6C000B);
    lobby_write_caption(caption, text);
    func_009E47D0(D_00A7DF08[0]->selection);
    return 1;
}

static inline s32 lobby_set_number_caption(char *buffer, s32 index, s32 formatKey, s32 maximum,
                                           s32 value) {
    s32 limit;
    LobbyCaption *label;
    LobbyCaptionPage *page = D_00A7DF08[0];
    if (!page)
        return 0;
    label = page->captions[index];
    limit = value > maximum ? maximum : (value < 0 ? 0 : value);
    sprintf(buffer, (const char *)func_001F08B0(formatKey), limit);
    lobby_write_caption(label, buffer);
    func_009E47D0(D_00A7DF08[0]->selection);
    return 1;
}

#endif
