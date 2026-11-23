/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 p00[0x1c];
    void *label;
    u8 p20[0xc];
    void *crest, *icon;
    u8 p34[0x54];
    void *cursor;
    u8 p8c[0x2c];
    void *empty;
} CupEntryPage;
extern CupEntryPage *func_00B1DE00(void);
extern s32 func_00B1DD50(void);
extern void func_00972040(void *, u8, u8), func_009737C0(void *, s32), func_00956A80(void *, s32),
    func_008CA390(void *, s32, s32), func_001D7D60(void *, s32);
extern void func_009737E0(void *, s32, ...), func_00956A90(void *, s32, s32, s32),
    func_008CA810(void *, s32, s32);
extern const char *func_0095C4A0(s32);
static inline void showCupEntry(s32 visible) {
    CupEntryPage *p = func_00B1DE00();
    if (p) {
        func_009737C0(p->label, visible);
        func_00956A80(p->crest, visible);
        func_008CA390(p->icon, 0, visible);
        func_001D7D60(p->empty, !visible);
    }
}
void func_00B1C960(u8 slot) {
    CupEntryPage *p = func_00B1DE00();
    if (p) {
        s32 selected;
        func_00972040(p->cursor, slot % 8, (u32)slot >> 3);
        selected = func_00B1DD50() & 65535;
        p = func_00B1DE00();
        if (p) {
            u32 team = selected & 65535;
            if (team == 0xffff)
                showCupEntry(0);
            else {
                showCupEntry(1);
                func_009737E0(p->label, 0, func_0095C4A0(selected));
                func_00956A90(p->crest, 4, team, 0);
                func_008CA810(p->icon, selected, 0);
            }
        }
    }
}
