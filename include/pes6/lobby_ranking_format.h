#ifndef PES6_LOBBY_RANKING_FORMAT_H
#define PES6_LOBBY_RANKING_FORMAT_H

#include "types.h"

typedef s32 (*LobbyRankingValue)(s32 index);

typedef struct {
    u8 reserved00[4];
    LobbyRankingValue value04;
    u8 reserved08[12];
    LobbyRankingValue value14, value18, value1C, value20;
} LobbyRankingFormatters;

extern const LobbyRankingFormatters *D_00A7DF98[];
extern const char D_00A03438[];
extern s32 sprintf(char *, const char *, ...);

static inline char *lobby_format_ranking_value(char *out, const char *format, s32 value) {
    char text[64];
    sprintf(text, D_00A03438, value);
    sprintf(out, format, text);
    return out;
}

typedef struct {
    s32 messages[4];
} LobbyLabel;

extern const LobbyLabel D_00A00950[];
extern char *func_001F08B0(s32 message);

static inline char *lobby_format_label(char *out, const char *format, s32 index, s32 field) {
    const char *label = func_001F08B0(D_00A00950[index].messages[field]);
    sprintf(out, format, label);
    return out;
}
#endif
