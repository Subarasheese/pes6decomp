/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

typedef struct {
    u8 reserved00[0x2c], player[2];
} MatchSidePadIds;

extern MatchSidePadIds *D_003E77B0;
extern s32 func_00225940(u8);

void func_0024CF50(MatchPadSlot *slots) {
    s32 i, hasChangedPad = 0;
    if ((u32)(D_00591C09[0] - 1) < 2) {
        MatchPadSlot *src = Pes6PadAssign;
        for (i = 0; i <= 1; i++) {
            s32 side = i % 2;
            if ((u8)func_00225940(D_003E77B0->player[side])) {
                SavedPadSettings *dest =
                    (SavedPadSettings *)func_00225160(D_003E77B0->player[side]);
                dest->assignment = src->assignment;
                dest->nameMode = src->nameMode;
                dest->option = src->option;
                dest->setting33 = src->setting33;
                func_002250C0(D_003E77B0->player[side], dest);
                src++;
            }
        }
    } else {
        for (i = 0; i < MATCH_PAD_COUNT; i++)
            if (D_0053CB60[i] == 1)
                hasChangedPad = 1;
        if (hasChangedPad == 1) {
            for (i = 0; i < MATCH_PAD_COUNT; i++) {
                MatchPadSlot *dest = &D_0053CBB0[i], *src = slots + i;
                dest->assignment = src->assignment;
                dest->option = src->option;
                dest->setting33 = src->setting33;
            }
        } else {
            for (i = 0; i < MATCH_PAD_COUNT; i++) {
                SavedPadSettings *dest = func_00221230(i);
                dest->assignment = slots[i].assignment;
                dest->option = slots[i].option;
                dest->setting33 = slots[i].setting33;
                dest->nameMode = slots[i].nameMode;
            }
        }
    }
}
