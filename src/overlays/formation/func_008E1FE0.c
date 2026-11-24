/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern const char *func_001F08B0(s32);
extern void *func_008BA000(const f32 *, f32);
extern void func_008E1AB0(FormationList *), func_008E19B0(FormationList *), func_008B4680(s32);
extern const s32 D_008EC4D0[], D_008EC490[];
void func_008E1FE0(FormationList *page, const void *layout, u8 side) {
    s32 i;
    f32 position[4];
    resetFormationList(page);
    func_008C5DF0(page, 11, side, layout);
    if (!page->name)
        page->name = func_008C1490(0x27, layout);
    func_008C59E0(page, func_001F08B0(0x3c0009));
    position[0] = 0;
    position[1] = 0;
    position[2] = 0;
    position[3] = 0;
    if (!page->layers)
        page->layers = func_008BA000(position, 0.0f);
    func_008E1AB0(page);
    if (page->name) {
        for (i = 0; i < 16; i++)
            page->items[i] = func_008C13D0(page->name, D_008EC490[i], func_001F08B0(D_008EC4D0[i]));
        page->separator = func_008C13D0(page->name, 0x6e, 0);
    }
    func_008E19B0(page);
    func_008B4680(1);
}
