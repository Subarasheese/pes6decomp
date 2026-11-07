/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_009B2E60(void *);
extern char Pes6MatchPlayers[];

void func_00310400(s32 index) {
    s32 maskedIndex;
    s32 slot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    func_009B2E60(Pes6MatchPlayers + slot * 0x240);
}
