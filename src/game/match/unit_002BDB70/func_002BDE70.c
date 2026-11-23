/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef s32 (*EventFilter)(u32);
extern s32 func_00C131A0(u32, u32, EventFilter);
extern void *func_00C137F0(void);
extern void *func_00C13840(void);
extern u32 func_00C32B50(u8);
extern u8 func_00C18D80(s32);
extern u8 D_003E9D50, D_003E9D52, D_003E9D53;
extern EventFilter D_003DA3A0[], D_003DA3E8[];
typedef struct {
    u16 value;
    u8 padding[0x346];
} SquadWord;
typedef struct {
    u8 value;
    u8 padding[0x347];
} SquadByte;
extern SquadWord D_005929C4[2][32];
extern SquadByte D_00592A46[2][32], D_00592A47[2][32];
static inline s32 countPlayerEvents(EventFilter *slot, u8 player, u8 start, u8 end) {
    u32 first, last;
    EventFilter filter;
    D_003E9D53 = 255;
    D_003E9D50 = player;
    filter = *slot;
    D_003E9D52 = start;
    first = (u8)start == 0 ? (u32)func_00C13840() : func_00C32B50(start);
    last = (u8)end == 255 ? (u32)func_00C137F0() : func_00C32B50(end);
    return func_00C131A0(first, last, filter);
}
s32 func_002BDE70(u8 team, u8 slot, s32 stat, s32 period, s32 unused) {
    s32 result = 0;
    u8 player = (team << 5) | (slot & 31);
    u8 start, end;
    switch (period) {
    default:
        start = func_00C18D80((u8)period);
        end = func_00C18D80((u8)((u8)period + 1));
        break;
    case 8:
        start = 0;
        end = 45;
        break;
    case 9:
        start = 45;
        end = 90;
        break;
    case 10:
        start = 0;
        end = 120;
        break;
    }
    switch (stat) {
    case 0:
        result = countPlayerEvents(D_003DA3A0, player, start, end);
        break;
    case 1:
        result = countPlayerEvents(D_003DA3A0, player, start, end) + D_005929C4[team][slot].value;
        break;
    case 2:
        result = countPlayerEvents(D_003DA3A0 + 1, player, start, end);
        break;
    case 3:
        result =
            countPlayerEvents(D_003DA3A0 + 1, player, start, end) + D_00592A46[team][slot].value;
        break;
    case 4:
        result = countPlayerEvents(D_003DA3A0 + 2, player, start, end);
        break;
    case 5:
        result =
            countPlayerEvents(D_003DA3A0 + 2, player, start, end) + D_00592A47[team][slot].value;
        break;
    case 6:
        result = countPlayerEvents(D_003DA3E8, player, start, end);
        break;
    case 7:
        result = countPlayerEvents(D_003DA3A0 + 3, player, start, end);
        break;
    }
    return (s16)result;
}
