/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[12];
    s32 id;
    u8 reserved10[0x48];
} MatchCallbackRecord;
typedef void (*MatchCallback)(void);
extern s32 func_002D5410(void);
extern void func_00C94440(s32);
extern void *memset(void *, s32, u32);
extern s32 func_00C94420(s32);
extern void func_00C88EC0(s32, MatchCallback, MatchCallback),
    func_00C88DD0(s32, MatchCallback, MatchCallback);
extern void func_00C7F050(void), func_00C7F0D0(void), func_00C7F3B0(void), func_00C7F450(void);
extern s32 D_003EA870;
extern MatchCallbackRecord *D_00CCC070[], D_00CCC080[];
void func_00C7F4B0(void) {
    s32 i, value;
    MatchCallbackRecord *row;
    MatchCallbackRecord **slot;
    func_00C94440(func_002D5410());
    i = 0;
    row = D_00CCC080;
    slot = D_00CCC070;
    do {
        D_003EA870 = i;
        memset(row, 0, sizeof(*row));
        *slot = row;
        value = func_00C94420(i);
        ++i;
        ++row;
        ++slot;
        D_00CCC080[D_003EA870].id = value;
    } while (i < 2);
    func_00C88EC0(5, func_00C7F450, func_00C7F3B0);
    func_00C88DD0(5, func_00C7F050, func_00C7F0D0);
}
