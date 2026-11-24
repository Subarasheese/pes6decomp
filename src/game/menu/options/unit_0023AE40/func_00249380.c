/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 func_001B9DF0(void);
extern s8 D_003E9AF8;
extern s8 D_0053C9C8[];
extern s32 D_003E9B08;
extern char D_003D8C00[];
extern void func_00247BF0(u8, u8, MatchPadSlot *);
extern void func_00248BE0(s32, s32, MatchPadSlot *);
extern void func_00248A30(s32, s32, MatchPadSlot *);
extern void func_00247880(s32, MatchPadSlot *);
extern s32 func_00247A00(s32, s32, MatchPadSlot *);
extern s32 func_008153B0(void);
extern s32 func_00815100(const void *);
extern s32 func_008156F0(void);

void func_00249380(s32 pad, s32 slot, MatchPadSlot *slots) {
    s32 current = func_0024E650();
    if (slot >= 8)
        slot = 0;
    func_0024E1C0(pad, slots);
    if (pad == current)
        slot = D_003E9AFC;
    if (matchPadConnected(pad)) {
        if (slot < MATCH_PAD_COUNT) {
            switch (slots[slot].state) {
            case 0:
                func_00248EB0(pad, slot, slots);
                break;
            case 1:
                func_00247BF0(pad, slot, slots);
                switch (D_008DC270[pad]) {
                case 1:
                    D_0053CB40[slot] = 0;
                    Pes6PadAssign[slot].state = 0;
                    SD_call(0x84028400);
                    func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
                    break;
                case 2:
                    D_0053CB40[slot] = 0;
                    Pes6PadAssign[slot].state = 0;
                    SD_call(0x84008401);
                    func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
                    break;
                }
                break;
            case 2:
                func_00248BE0(pad, slot, slots);
                break;
            case 3:
                func_00248A30(pad, slot, slots);
                break;
            case 4:
                switch (D_0053C9C8[pad]) {
                case 0:
                    D_0053C9C8[pad]++;
                    break;
                case 1:
                    switch ((s8)func_00247A00(pad, slot, slots)) {
                    case 2:
                    case 1:
                        func_002DCA30();
                        slots[slot].state = 0;
                        func_0023EC10(&D_003E9B10, PAD_REDRAW_SIDES);
                        func_0023EC10(&D_003E9B10, PAD_REDRAW_NAMES);
                        break;
                    }
                    break;
                }
                break;
            }
        }
        func_00247880(pad, slots);
        switch (D_003E9AF8) {
        case 0:
            if (!func_001B9DF0() &&
                (Pes6SaveData_GetUnavailableFlag() != 1 || func_008153B0() != 1 ||
                 func_00815100(D_003D8C00)) &&
                D_008DC270[pad] == 0x10000) {
                D_003E9AF8++;
                D_003E9B08 = pad;
            }
            break;
        case 1:
            if (Pes6SaveData_GetUnavailableFlag() != 1 || func_008156F0()) {
                if (!func_001B9DF0())
                    func_0024BA00((u16)D_003E9B08);
                D_003E9AF8 = 0;
            }
            break;
        }
    }
}
