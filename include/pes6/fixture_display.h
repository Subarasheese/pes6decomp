#ifndef PES6_FIXTURE_DISPLAY_H
#define PES6_FIXTURE_DISPLAY_H

#include "types.h"

typedef struct {
    u8 leg, extraTime, penalties;
} FixtureGoals;
typedef struct {
    FixtureGoals goals[8][2];
    u8 firstLeg[8][2], aggregate[8][2], nameIds[8][2];
    u16 teamIds[8][2];
    u8 teamKinds[8][2];
    s32 format[8];
    u8 selected;
    u8 reservedB1[3];
    u8 flags[8];
} CupFixtureGroup;
typedef struct {
    s32 mode;
    CupFixtureGroup groups[10];
    u8 activeGroup;
    u8 groupCount, page, reserved75F;
    void *window;
    u8 reserved764[0x7cc - 0x764];
    void *badges[8][2], *names[8][2], *aggregate[8][2], *separator[8];
    void *firstLeg[8][2], *returnLeg[8][2];
    void *extraTime[8][3], *singleCaption[8][3], *penalties[8][3];
    u8 reservedA4C[0xbcc - 0xa4c];
    void *panel;
    u8 action, reservedBD1[3];
} CupFixturePage;

typedef struct {
    s32 mode;
    FixtureGoals goals[10][2];
    u8 firstLegScores[10][2], aggregateScores[10][2], nameIds[10][2];
    u16 teamIds[10][2];
    u8 teamKinds[10][2];
    s32 format[10];
    u8 round, entries, leg, walkover[10], reservedED[3], roundType;
    u8 reservedF1[0x178 - 0xf1];
    void *simpleBadge[10][2], *badges[10][2], *simpleNames[10][2], *simpleScore[10][2],
        *simpleSeparator[10];
    void *names[10][2], *aggregate[10][2], *separator[10];
    void *firstLeg[10][2], *returnLeg[10][2];
    void *extraTime[10][3], *singleCaption[10][3], *penalties[10][3];
} LeagueFixturePage;

extern CupFixturePage *D_003EAD70;
extern LeagueFixturePage *D_003EA9C0;
extern CupFixturePage *func_00B14800(void);
extern LeagueFixturePage *func_009BC8E0(void);
extern s32 func_009BA940(void);
extern void func_00956A80(s8 *badge, s8 shown);
extern void func_00956A90(void *badge, s32 kind, u16 id, s32 flags);
extern void func_009737C0(void *widget, s8 shown);
extern void func_009737E0(void *widget, s32 part, ...);
extern const char *func_001F08B0(s32 id);
extern const char *func_002253B0(u8 slot);
extern const char *func_00225520(u8 slot);
extern const char *func_0095C4A0(u16 team);

static inline void setFixtureCaption(void **parts, s8 left, s8 right, s32 part, s32 message) {
    func_009737C0(parts[0], left);
    func_009737C0(parts[1], 1);
    func_009737E0(parts[1], part, func_001F08B0(message));
    func_009737C0(parts[2], right);
}

#endif
