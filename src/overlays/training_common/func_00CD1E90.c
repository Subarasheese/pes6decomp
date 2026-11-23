/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved[0x1c];
    s32 selection;
    u8 side;
} TrainingPage;
typedef struct {
    u8 reserved[0x28];
    u8 initialized;
} ChallengeMenu;
extern ChallengeMenu *func_00824160(void);
extern void func_008030E0(void), func_00803030(void), func_00CD7F00(void), func_009B5820(void);
extern void func_00825530(ChallengeMenu *, s32, u8), func_00B29E80(s32), func_00B29A40(s32),
    func_00B299B0(s32), func_00B2A370(void *, s32), func_00C90750(s32), func_00C90460(s32),
    func_00264790(TrainingPage *, u8);
extern s32 func_00825A80(void);
extern u8 D_005E3934[];
void func_00CD1E90(TrainingPage *page) {
    ChallengeMenu *menu = func_00824160();
    s32 count;
    func_008030E0();
    func_00803030();
    if (!menu->initialized)
        func_00825530(menu, page->selection, page->side);
    if (!menu->initialized)
        func_00CD7F00();
    func_00B29E80(1);
    func_00B29A40(page->selection);
    func_00B299B0(page->side);
    func_00B2A370(D_005E3934, 0);
    count = func_00825A80();
    if (count > 0) {
        func_00C90750(count);
        func_00C90460(1);
    }
    func_009B5820();
    func_00264790(page, 0x22);
}
