/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern MatchPadSlot D_0053CD70[];
extern s32 memcmp(const void *, const void *, u32);

s32 func_0024C810(u8 mode, MatchPadSlot *slots) {
    s32 i;
    switch (mode) {
    case 0:
        for (i = 0; i < MATCH_PAD_COUNT; i++)
            D_0053CD70[i] = slots[i];
        break;
    case 1:
        for (i = 0; i < MATCH_PAD_COUNT; i++) {
            if (slots[i].side != 10 && matchPadSideKind(slots[i].side) != 11) {
                if (D_0053CD70[i].side == 10)
                    slots[i].side = 0;
                else if (D_0053CD70[i].side == 11)
                    slots[i].side = 4;
                else if (D_0053CD70[i].side == -11)
                    slots[i].side = -4;
                else
                    slots[i].side = D_0053CD70[i].side;
            } else {
                slots[i].side = D_0053CD70[i].side;
            }
        }
        break;
    case 2:
        for (i = 0; i < MATCH_PAD_COUNT; i++)
            if (memcmp(&D_0053CD70[i], &slots[i], sizeof(*slots)) != 0)
                return 1;
        break;
    }
    return 0;
}
