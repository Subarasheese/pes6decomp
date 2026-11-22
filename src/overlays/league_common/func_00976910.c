/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct { u8 pad[5]; u8 teams; } LeagueRound;

extern u8 *func_00226000(void);
extern const LeagueRound *func_00229380(void);

enum { EVENT_PAGES = 15, EVENTS_PER_PAGE = 6, PAGE_STRIDE = 224, EVENT_OFFSET = 0xDE };

static inline void append_event(u8 event) {
    s32 page = *func_00226000() % EVENT_PAGES;
    s32 slot;
    for (slot = 0; slot < EVENTS_PER_PAGE; slot++) {
        if ((func_00226000() + page * PAGE_STRIDE)[EVENT_OFFSET + slot % EVENTS_PER_PAGE] == 0) {
            (func_00226000() + page * PAGE_STRIDE)[EVENT_OFFSET + slot % EVENTS_PER_PAGE] = event;
            break;
        }
    }
}

void func_00976910(u8 competition, u8 round, u8 result) {
    const LeagueRound *details = func_00229380();
    u8 teams;

    switch (competition) {
    case 12:
    case 14:
    case 17:
    case 19:
    case 21:
    case 23:
    case 25:
    case 27:
        if (!details) return;
        teams = details->teams;
        switch (round) {
        case 1:
            if (teams == 2) {
                if (result == 2)
                    append_event(29);
                else
                    append_event(28);
            } else {
                if (result == 2)
                    append_event(33);
            }
            break;
        case 2:
            if (teams > 2 && teams < 5) {
                if (result == 2)
                    append_event(29);
                else
                    append_event(28);
            } else if (teams > 4 && teams < 9) {
                if (result == 2)
                    append_event(30);
            } else if (teams > 8 && teams < 17) {
                if (result == 2)
                    append_event(31);
            } else if (teams > 16 && teams < 33) {
                if (result == 2)
                    append_event(32);
            }
            break;
        case 3:
            if (teams > 4 && teams < 9) {
                if (result == 2)
                    append_event(29);
                else
                    append_event(28);
            } else if (teams > 8 && teams < 17) {
                if (result == 2)
                    append_event(30);
            } else if (teams > 16 && teams < 33) {
                if (result == 2)
                    append_event(31);
            }
            break;
        case 4:
            if (teams > 8 && teams < 17) {
                if (result == 2)
                    append_event(29);
                else
                    append_event(28);
            } else if (teams > 16 && teams < 33) {
                if (result == 2)
                    append_event(30);
            }
            break;
        case 5:
            if (teams > 16 && teams < 33) {
                if (result == 2)
                    append_event(29);
                else
                    append_event(28);
            }
            break;
        }
        break;
    case 38:
        switch (round) {
        case 1:
            if (result == 2)
                append_event(17);
            break;
        case 2:
            if (result == 2)
                append_event(18);
            break;
        case 3:
            if (result == 2)
                append_event(19);
            else
                append_event(20);
            break;
        }
        break;
    case 39:
        switch (round) {
        case 1:
            if (result == 2)
                append_event(21);
            break;
        case 2:
            if (result == 2)
                append_event(22);
            break;
        case 3:
            if (result == 2)
                append_event(23);
            break;
        case 4:
            if (result == 2)
                append_event(24);
            else
                append_event(25);
            break;
        }
        break;
    case 29:
        switch (round) {
        case 1:
            if (result == 2)
                append_event(10);
            break;
        case 2:
            if (result == 2)
                append_event(9);
            break;
        case 3:
            if (result == 2)
                append_event(8);
            break;
        case 4:
            if (result == 2)
                append_event(7);
            else
                append_event(6);
            break;
        }
        break;
    case 33:
        switch (round) {
        case 1:
            if (result == 2)
                append_event(14);
            break;
        case 2:
            if (result == 2)
                append_event(13);
            break;
        case 3:
            if (result == 2)
                append_event(12);
            else
                append_event(11);
            break;
        }
        break;
    }
}
