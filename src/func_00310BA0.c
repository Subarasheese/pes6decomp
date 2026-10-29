/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x240];
} Rec240;

extern Rec240 Pes6MatchPlayers[];
void func_00AA3540(Rec240 *);

void func_00310BA0(s32 index) {
    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    func_00AA3540(&Pes6MatchPlayers[index]);
}
