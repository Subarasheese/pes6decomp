#ifndef PES6_LOBBY_RANKING_PAGES_H
#define PES6_LOBBY_RANKING_PAGES_H
#include "types.h"
extern void *func_00985C70(void);
extern s32 func_009F4250(void *session);

typedef struct {
    u16 results[3];
    u16 wins;
    u16 draws;
    u16 losses;
    u16 field0C;
    u8 reserved0E[2];
    u32 rank;
    s32 goalsFor;
    s32 goalsAgainst;
    s32 field1C;
    s32 field20;
    char name[52];
} LobbyRankingRow;
typedef struct {
    u32 field00, count;
    u8 header08[0x24];
    u32 rankLimit;
    u8 reserved30[64];
    LobbyRankingRow rows[];
} LobbyRankingPage;
extern LobbyRankingPage *func_009F4B90(void *session);
static inline LobbyRankingPage *lobby_ranking_page(void) {
    LobbyRankingPage *page = func_009F4B90(func_00985C70());
    if (page && func_009F4250(func_00985C70()))
        page = 0;
    return page;
}
static inline LobbyRankingRow *lobby_ranking_row(s32 index) {
    LobbyRankingRow *row = 0;
    LobbyRankingPage *page = lobby_ranking_page();
    if (page && index >= 0 && (u32)index < page->count)
        row = &page->rows[index];
    return row;
}

typedef struct {
    s32 field00;
    s32 field04;
    s32 field08;
    s32 field0C;
    u16 field10;
    u16 field12;
    u16 field14;
    char name[49];
    char secondName[49];
    u8 reserved78[208];
} LobbyResultRow;
typedef struct {
    u32 field00, count;
    u8 header[92];
    LobbyResultRow rows[];
} LobbyResultPage;
extern LobbyResultPage *func_009F4CD0(void *session);
static inline LobbyResultPage *lobby_result_page(void) {
    LobbyResultPage *page = func_009F4CD0(func_00985C70());
    if (page && func_009F4250(func_00985C70()))
        page = 0;
    return page;
}
static inline LobbyResultRow *lobby_result_row(s32 index) {
    LobbyResultRow *row = 0;
    LobbyResultPage *page = lobby_result_page();
    if (page && index >= 0 && (u32)index < page->count)
        row = &page->rows[index];
    return row;
}

typedef struct {
    s32 field00;
    s32 field04;
    s32 field08;
    s32 field0C;
    u16 field10;
    u16 field12;
    u16 field14;
    char name[49];
    char secondName[49];
    u8 reserved78[208];
} LobbyOpponentResultRow;
typedef struct {
    u32 field00, count;
    u8 header[68];
    LobbyOpponentResultRow rows[];
} LobbyOpponentResultPage;
extern LobbyOpponentResultPage *func_009F4E10(void *session);
static inline LobbyOpponentResultPage *lobby_opponent_result_page(void) {
    LobbyOpponentResultPage *page = func_009F4E10(func_00985C70());
    if (page && func_009F4250(func_00985C70()))
        page = 0;
    return page;
}
static inline LobbyOpponentResultRow *lobby_opponent_result_row(s32 index) {
    LobbyOpponentResultRow *row = 0;
    LobbyOpponentResultPage *page = lobby_opponent_result_page();
    if (page && index >= 0 && (u32)index < page->count)
        row = &page->rows[index];
    return row;
}

typedef struct {
    s32 field00;
    s32 id;
    s32 field08;
    s32 field0C;
    s32 wins;
    s32 draws;
    s32 losses;
    u16 field1C;
    u8 reserved1E[2];
    u16 field20;
    u16 rating;
    char name[52];
} LobbyRatingRow;
typedef struct {
    u32 field00, count;
    u8 header08[0x24];
    u32 ratingLimits[4];
    u8 reserved3C[124];
    LobbyRatingRow rows[];
} LobbyRatingPage;
extern LobbyRatingPage *func_009F4F10(void *session);
static inline LobbyRatingPage *lobby_rating_page(void) {
    LobbyRatingPage *page = func_009F4F10(func_00985C70());
    if (page && func_009F4250(func_00985C70()))
        page = 0;
    return page;
}
static inline LobbyRatingRow *lobby_rating_row(s32 index) {
    LobbyRatingRow *row = 0;
    LobbyRatingPage *page = lobby_rating_page();
    if (page && index >= 0 && (u32)index < page->count)
        row = &page->rows[index];
    return row;
}

typedef struct {
    s32 field00;
    s32 field04;
    s32 field08;
    s32 field0C;
    s32 field10;
    s32 field14;
    s32 field18;
    s32 field1C;
    char homeName[49];
    char awayName[49];
    char firstDate[32];
    char secondDate[32];
    char name[49];
    u8 reservedF3[209];
} LobbyFixtureRow;
typedef struct {
    u32 field00, count;
    u8 header[36];
    LobbyFixtureRow rows[];
} LobbyFixturePage;
extern LobbyFixturePage *func_009F4FF0(void *session);
static inline LobbyFixturePage *lobby_fixture_page(void) {
    LobbyFixturePage *page = func_009F4FF0(func_00985C70());
    if (page && func_009F4250(func_00985C70()))
        page = 0;
    return page;
}
static inline LobbyFixtureRow *lobby_fixture_row(s32 index) {
    LobbyFixtureRow *row = 0;
    LobbyFixturePage *page = lobby_fixture_page();
    if (page && index >= 0 && (u32)index < page->count)
        row = &page->rows[index];
    return row;
}

typedef struct {
    u16 field00;
    u16 field02;
    u16 field04;
    u16 field06;
    s32 field08;
    s32 id;
    s32 field10;
    char name[49];
    u8 reserved45[3];
} LobbySummaryRow;
typedef struct {
    u32 field00, count;
    u8 header[68];
    LobbySummaryRow rows[];
} LobbySummaryPage;
extern LobbySummaryPage *func_009F41A0(void *session);
static inline LobbySummaryPage *lobby_summary_page(void) {
    LobbySummaryPage *page = func_009F41A0(func_00985C70());
    if (page && func_009F4250(func_00985C70()))
        page = 0;
    return page;
}
static inline LobbySummaryRow *lobby_summary_row(s32 index) {
    LobbySummaryRow *row = 0;
    LobbySummaryPage *page = lobby_summary_page();
    if (page && index >= 0 && (u32)index < page->count)
        row = &page->rows[index];
    return row;
}

#endif
