/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s8 D_003E7504;
extern s8 D_003E7505;

void func_0024E090(s8 secondPadActive) {
    s32 i;
    if (secondPadActive == 0) {
        D_003AA1F0[0] = 1;
    } else {
        D_003AA1F0[0] = 1;
        D_003AA1F0[1] = 1;
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        SavedPadSettings *saved = func_00221230(i);
        Pes6PadAssign[i].nameMode = saved->nameMode;
        Pes6PadAssign[i].assignment = saved->assignment;
    }
    for (i = 0; i < MATCH_PAD_COUNT; i++)
        Pes6PadAssign[i].side = 0;
    if (secondPadActive == 0) {
        Pes6PadAssign[0].side = -1;
    } else {
        Pes6PadAssign[0].side = -1;
        Pes6PadAssign[1].side = 1;
    }
    func_002472F0(Pes6PadAssign);
    if (secondPadActive == 0) {
        D_003E7504 = 0;
        D_003E7505 = 0;
    } else {
        D_003E7504 = 0;
        D_003E7505 = 1;
    }
}
