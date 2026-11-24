/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

typedef struct {
    u8 reserved[0x14];
    u32 sides;
} PadHeader;

extern void *Pes6SaveData_GetHeaderBlock(void);
extern s32 func_0023E090(void);
extern s32 func_002631B0(void);
extern void func_0024D1B0(MatchPadSlot *);
extern void func_0024E770(void);

void func_002472F0(MatchPadSlot *slots) {
    s32 i;
    if (!func_002DCA30())
        func_0024D1B0(slots);
    func_0024CF50(slots);
    if (func_0023E090() || func_002631B0() == 1) {
        PadHeader *record = Pes6SaveData_GetHeaderBlock();
        /* The PAL executable tests this same mode byte against both values. */
        if (D_00591C09[0] == 1 && D_00591C09[0] == 2) {
            if ((u8)func_002259E0() == 1 && record) {
                record->sides = 0;
                for (i = 0; i < MATCH_PAD_COUNT; i++) {
                    record->sides |= (u32)matchPadSideKind(slots[i].side) << (4 * i);
                }
            }
        } else {
            if (record) {
                record->sides = 0;
                for (i = 0; i < MATCH_PAD_COUNT; i++) {
                    record->sides |= (u32)matchPadSideKind(slots[i].side) << (4 * i);
                }
            }
        }
    }
    if (Pes6SceneStack[0] == 4 || Pes6SceneStack[0] == 8)
        func_0024E770();
}
