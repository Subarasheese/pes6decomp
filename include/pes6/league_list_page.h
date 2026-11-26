#ifndef PES6_LEAGUE_LIST_PAGE_H
#define PES6_LEAGUE_LIST_PAGE_H

#include "types.h"

typedef struct {
    f32 x, y, z, w;
} LeagueRowPosition;

/* These three list resources use the same row operations with different storage layouts. */
#if LEAGUE_LIST_RESOURCE == 0x102AC
#define LEAGUE_LIST_GET_PAGE func_009AB630
#define LEAGUE_LIST_SCROLL func_009A9B50
#define LEAGUE_LIST_RELEASE func_009AACF0
#define LEAGUE_LIST_INIT func_009AADC0
#define LEAGUE_LIST_MOVE_TAB func_009AB240
#define LEAGUE_LIST_MOVE_ROW func_009AB3D0
#define LEAGUE_LIST_HIGHLIGHT func_009A9900
#define LEAGUE_LIST_MARKER func_009A9D30
#define LEAGUE_LIST_BUILD func_009AA630
#define LEAGUE_LIST_DISPLAY_TAB func_009AA320
#define LEAGUE_LIST_DISPLAY_ROWS func_009A9EA0
#define LEAGUE_LIST_SELECT_TAB func_009AA5F0
#define LEAGUE_LIST_ROW_ANCHOR 8
#elif LEAGUE_LIST_RESOURCE == 0x102A9
#define LEAGUE_LIST_GET_PAGE func_009AE900
#define LEAGUE_LIST_SCROLL func_009AC800
#define LEAGUE_LIST_RELEASE func_009AD750
#define LEAGUE_LIST_INIT func_009AD820
#define LEAGUE_LIST_MOVE_TAB func_009ADBB0
#define LEAGUE_LIST_MOVE_ROW func_009ADD30
#define LEAGUE_LIST_HIGHLIGHT func_009AC5B0
#define LEAGUE_LIST_MARKER func_009AC9E0
#define LEAGUE_LIST_BUILD func_009AD260
#define LEAGUE_LIST_DISPLAY_TAB func_009AD070
#define LEAGUE_LIST_DISPLAY_ROWS func_009ACBF0
#define LEAGUE_LIST_SELECT_TAB func_009AD220
#define LEAGUE_LIST_ROW_ANCHOR 9
#elif LEAGUE_LIST_RESOURCE == 0x102AA
#define LEAGUE_LIST_GET_PAGE func_009B0FD0
#define LEAGUE_LIST_SCROLL func_009AF770
#define LEAGUE_LIST_RELEASE func_009B06E0
#define LEAGUE_LIST_INIT func_009B07B0
#define LEAGUE_LIST_MOVE_TAB func_009B0B60
#define LEAGUE_LIST_MOVE_ROW func_009B0D00
#define LEAGUE_LIST_HIGHLIGHT func_009AF550
#define LEAGUE_LIST_MARKER func_009AF950
#define LEAGUE_LIST_BUILD func_009B0150
#define LEAGUE_LIST_DISPLAY_TAB func_009AFE60
#define LEAGUE_LIST_DISPLAY_ROWS func_009AFAC0
#define LEAGUE_LIST_SELECT_TAB func_009B0110
#define LEAGUE_LIST_ROW_ANCHOR 9
#else
#error Unknown league list resource
#endif

typedef struct {
    void *resource;
    s8 *layers[3];
#if LEAGUE_LIST_RESOURCE == 0x102AC
    u8 reserved10[4];
#endif
    s32 listHandle;
    void *decoration;
#if LEAGUE_LIST_RESOURCE == 0x102AC
    u8 reserved1C[0x58 - 0x1C];
#else
    u8 reserved18[0x50 - 0x18];
#endif
    void *rows[32];
    void *labels[32];
    void *markers[32];
    void *columns[7][32];
    void *detail;
    void *detailText;
#if LEAGUE_LIST_RESOURCE == 0x102A9
    u8 reserved558[0x5D8 - 0x558];
#elif LEAGUE_LIST_RESOURCE == 0x102AA
    u8 reserved558[0x5A8 - 0x558];
#endif
    void *panel;
    void *scrollbar;
    u8 competition;
#if LEAGUE_LIST_RESOURCE == 0x102A9
    u8 division;
#else
    u8 tabCount;
    u8 counts[72];
#endif
    u8 phase;
    u8 reservedAfterPhase;
    LeagueRowPosition positions[32];
    u8 tab;
    u8 selectedRows[72];
#if LEAGUE_LIST_RESOURCE == 0x102A9
    u8 tabCount;
    u8 counts[72];
#endif
    u8 firstRows[72];
    s16 height;
    s32 direction;
    s16 scrollOffset;
    s16 scrollStep;
    void *overlay;
    s32 *cursor;
} LeagueListPage;

extern u32 LEAGUE_LIST_GET_PAGE(void);

#endif
