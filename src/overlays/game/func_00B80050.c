/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
extern u8 D_00C9A91C[];
#include "pes6/match_player.h"
extern s32 func_002DCA30(void), func_00BA9430(s32), func_00B7D7B0(void), D_008B145C[], D_00C9A920[];
extern u8 *D_003EA768;
extern f32 func_002A95A0(void), D_00C9A924[];
extern void func_00BBB960(s32), func_009A0A90(void), func_0093FB30(s32, u8, u8),
    func_0093FCB0(const s16 *), func_00B7DB90(void),
    func_00B271C0(s32, const s32 *, const s32 *, const s32 *);
extern void func_00BF93A0(s32), func_00B7DAC0(void), func_002B9750(void), func_00BA9280(void),
    func_00182B30(s32), Pes6World_SetActive(s32), func_00B27430(u32), func_00C044B0(void),
    func_00AD0A20(void);
extern void func_00B27140(void), func_00BF9330(s32, void *), func_00209670(void *, s32),
    func_00B7FEC0(void);
void func_00B80050(void) {
    if (func_002DCA30())
        func_00BBB960(D_008B145C[0]);
    switch (D_00C9A91C[0]) {
    case 0: {
        s32 selectedSides[2], selectedSlots[2], sides[2], outgoing[2], incoming[2];
        s32 index;
        u8 slotCount;
        s32 i;
        u8 count;
        func_009A0A90();
        for (i = 0, count = 0; i < 2; ++i) {
            if (D_00C9A710.change[i].incomingActor != 0xff) {
                selectedSides[count] = D_00C9A710.change[i].side;
                selectedSlots[count] = D_00C9A710.change[i].selectedSlot;
                func_0093FB30(1, selectedSides[count], selectedSlots[count]);
                ++count;
            }
        }
        func_0093FCB0((const s16 *)func_00BA9430(0));
        func_00B7DB90();
        slotCount = 0;
        index = 0;
        for (; index < 2; ++index) {
            if (D_00C9A710.change[index].side != 0xff) {
                sides[slotCount] = D_00C9A710.change[index].side;
                outgoing[slotCount] = D_00C9A710.change[index].outgoingSlot;
                incoming[slotCount] = D_00C9A710.change[index].incomingSlot;
                ++slotCount;
            }
        }
        func_00B271C0(slotCount, sides, outgoing, incoming);
        D_00C9A924[0] = func_002A95A0() / 60.0f;
        func_00BF93A0(2);
        func_00BF93A0(3);
        func_00B7DAC0();
        func_002B9750();
        func_00BA9280();
        func_00182B30(1);
        Pes6World_SetActive(1);
        *D_003EA768 |= 2;
        func_00B27430(0);
        D_00C9A920[0] = 0;
        ++D_00C9A91C[0];
        break;
    }
    case 1:
        func_00C044B0();
        func_00AD0A20();
        if (func_00B7D7B0())
            ++D_00C9A91C[0];
        D_00C9A924[0] = func_002A95A0() / 60.0f;
        break;
    case 2: {
        u8 i;
        func_00B27430(1);
        Pes6World_SetActive(0);
        func_00182B30(0);
        func_00B27140();
        func_00BF9330(2, 0);
        for (i = 0; i < 23; ++i) {
            Pes6MatchPlayer *p = &Pes6MatchPlayers[i];
            if (Pes6MatchSquads[p->team].setupPlayers[p->slot].fieldD4)
                func_00209670(p->info, (s32)p->info->fieldState);
        }
        D_00C9A91C[0] = 0;
        D_00C9A710.update = func_00B7FEC0;
        break;
    }
    }
}
