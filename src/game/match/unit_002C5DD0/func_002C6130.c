/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_record.h"
extern s32 func_00C12A80(u8);
extern s32 func_00C12BC0(u8);
extern s32 func_00C12C80(u8);
extern u8 func_00C132B0(u8 *);
extern u8 func_00C132C0(u8 *);
extern u32 func_00C137C0(u32);
extern MatchEvent *func_00C137F0(void);
MatchEvent *func_002C6130(MatchEvent *event) {
    MatchEvent *end, *cursor;
    u8 player;
    u8 kind;
    if (!func_00C12BC0(func_00C132C0((u8 *)event))) {
    failed:
        return NO_EVENT;
    }
    end = func_00C137F0();
    player = func_00C132B0((u8 *)event);
    cursor = (MatchEvent *)func_00C137C0((u32)event);
    if (cursor >= end)
        goto failed;
    do {
        kind = func_00C132C0((u8 *)cursor);
        if (kind == 3 || kind == 5)
            goto found;
        if (func_00C12A80(kind))
            goto failed;
        if (func_00C12C80(kind) && player == func_00C132B0((u8 *)cursor))
            goto failed;
        cursor = (MatchEvent *)func_00C137C0((u32)cursor);
    } while (cursor < end);
    goto failed;
found:
    if (player != func_00C132B0((u8 *)cursor))
        goto failed;
    return cursor;
}
