/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

typedef struct {
    u8 reserved00[0x2c], player[2];
} MatchSidePadIds;

extern char D_0053C9D0[][46];
extern char *strcpy(char *, const char *);
extern void func_00220A30(char *);

void func_0024CE30(MatchPadSlot *slots) {
    s32 i;
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        MatchPadSlot *slot = &slots[i];
        SavedPadSettings *saved = func_00221230(i);
        slot->nameMode = saved->nameMode;
        slot->assignment = saved->assignment;
        slot->option = saved->option;
        slot->setting33 = saved->setting33;
        if (i == 0 && !func_002DCA30())
            func_00220A30(slots[0].name);
        else
            strcpy(slot->name, D_0053C9D0[i]);
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++)
        slots[i].side = Pes6PadAssign[i].side;
}
