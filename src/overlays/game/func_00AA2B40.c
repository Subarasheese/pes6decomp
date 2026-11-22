/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00288670(s32, s32);
s32 func_00BBB8C0(s32);
extern char Pes6MatchSquads[];

s32 func_00AA2B40(void *arg0, s32 arg1) {
    u8 *entry;
    s32 half;
    s32 t;
    s32 a0;

    entry = (u8 *)(((s8 *)arg0) + 0x12);
    t = 0x63 - func_00288670((*((u8 *)(((s8 *)(((*((u8 *)(((s8 *)arg0) + 0x11))) * 0x348) +
                                               (((*entry) * 0x6900) + ((char *)Pes6MatchSquads)))) +
                                       0x80))) &
                                 0x7F,
                             0x28);
    t = t + 0x63;
    half = t / 2;
    a0 = (half * arg1) / 200;
    ;
    return ((a0 * 5) / 10) + func_00BBB8C0(((((t / 2) * arg1) / 200) * 5) / 10);
}
