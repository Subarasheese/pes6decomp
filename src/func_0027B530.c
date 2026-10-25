/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x30];
    u16 kit;
} Sub;

typedef struct {
    u8 pad0[4];
    Sub *sub;
    u8 pad8[0x238];
} Team;

extern Team D_0058E5B0[];
void func_00209A00(Sub *, s32, s32);
void func_001A5BE0(s32);
void func_002CB9B0(s32);
void func_001B05D0(s32);

void func_0027B530(void) {
    Team *team;
    s32 i;

    for (team = D_0058E5B0, i = 0; i < 23; i++, team++) {
        if (team->sub->kit >= 0x59A) {
            func_00209A00(team->sub, 0, 0);
        }
    }
    func_001A5BE0(4);
    func_002CB9B0(8);
    func_001B05D0(8);
}
