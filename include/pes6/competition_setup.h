#ifndef PES6_COMPETITION_SETUP_H
#define PES6_COMPETITION_SETUP_H

#include "types.h"
enum { SETUP_ROWS_PER_PAGE = 13, SETUP_ROW_COUNT = 27 };
enum {
    SETUP_BACK = 1,
    SETUP_APPLY = 2,
    SETUP_UP = 3,
    SETUP_DOWN = 4,
    SETUP_LEFT = 5,
    SETUP_RIGHT = 6,
    SETUP_APPLY_TO_TOP = 9,
    SETUP_BACK_TO_TOP = 10
};
typedef struct {
    s16 savedValue, value, savedMinimum, minimum, savedMaximum, maximum;
    s32 locked;
    s8 wrap, selectable;
    u8 reserved12[2];
    s32 disabledValues[100];
    u8 reserved1a4[4];
} SettingsRow;
typedef struct {
    s8 cursor;
    u8 reserved01[3];
    f32 visibleRows;
    s8 page, lastPage;
    u8 reserved0a[2];
    SettingsRow rows[SETUP_ROW_COUNT];
    u8 reserved2cc4[8];
    s32 tournamentPreset;
} SettingsPage;
typedef struct {
    u8 reserved00[9];
    s8 result;
    u8 reserved0a[6];
    s32 flags;
} SetupScene;
extern SettingsPage D_008DF000, D_008E1CE0, D_008E49B0;
extern SetupScene Pes6Scene_Menu_State;
extern s32 Pes6SceneStack[];
extern void func_0023EC10(s32 *, s32);
extern s32 func_008BFB90(SettingsPage *);
extern void func_008C0470(SettingsPage *), func_008C2350(SettingsPage *, s8, s32);
typedef char check_setup_row_size[sizeof(SettingsRow) == 0x1a8 ? 1 : -1];
typedef char check_setup_page_size[sizeof(SettingsPage) == 0x2cd0 ? 1 : -1];

#endif
