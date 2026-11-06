/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001540E0(s32);
extern s32 func_00154080(s32);
extern void func_002CBA60(s32);
extern s32 func_002CBC80(s32);
extern void func_002CBD20(s32, s32, s32);
extern void func_002CB9B0(s32);
extern void func_001A3220(s32);

s32 func_002CB060(void) {
    if (func_001540E0(0xA) != 0) {
        if (func_00154080(0xA) != 0) {
            return 0;
        }
        func_002CBA60(0xA);
        func_002CBD20(0xA, func_002CBC80(0xA), 0x15A000);
        func_002CB9B0(0xC);
        func_001A3220(0);
    }
    return 1;
}
