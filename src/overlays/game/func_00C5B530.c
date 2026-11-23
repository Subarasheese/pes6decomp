/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "types.h"
typedef struct {
    u16 stamp;
    u8 kind;
    u8 player;
} MatchEvent;
#define NO_EVENT ((MatchEvent *)-1)
extern MatchEvent *func_00C13640(MatchEvent *, const u8 *, s32);
extern u8 func_00C132B0(MatchEvent *);
extern u8 func_00C132C0(MatchEvent *);
extern const u8 D_00CB4A40[], D_00CB3450[];
extern s32 D_00CB3468[];
s32 func_00C5B530(MatchEvent *first, MatchEvent *limit, s32 player) {
    s32 found = 0;
    MatchEvent *candidate = NO_EVENT;
    if (first != NO_EVENT && limit != NO_EVENT) {
        candidate = func_00C13640(first, D_00CB4A40, 3);
        if ((u32)limit < (u32)candidate)
            candidate = NO_EVENT;
    }
    if (candidate != NO_EVENT && (player & 255) == (func_00C132B0(candidate) & 255)) {
        MatchEvent *next = func_00C13640(candidate, D_00CB3450, D_00CB3468[0]);
        if (next != NO_EVENT)
            found = (func_00C132C0(next) & 255) == 10;
    }
    return found;
}
