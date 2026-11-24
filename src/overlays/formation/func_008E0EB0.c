/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_008D81C0(FormationDiagram *),
    func_008E1760(FormationLegend *, s32, const FormationWindowLayout *, u8),
    func_008E14C0(FormationLegend *, s32), func_008E1420(FormationLegend *, s32);
static inline void resetDiagram(FormationSelection *page) {
    page->active = 0;
    page->mode = 2;
    func_008D80C0(&page->pages.pitch.diagram);
    func_008E1660(&page->pages.pitch.legend);
}
void func_008E0EB0(FormationSelection *page, u8 option, s32 view) {
    FormationWindowLayout layout;
    func_008E1EF0(&page->pages.list);
    func_008E16C0(&page->pages.pitch.legend);
    page->first = 0;
    page->second = 0;
    func_008E1E50(&page->pages.list);
    func_008E1660(&page->pages.pitch.legend);
    func_008E16C0(&page->pages.pitch.legend);
    func_008D81C0(&page->pages.pitch.diagram);
    resetDiagram(page);
    resetDiagram(page);
    func_008C5230(&layout, 4, page->side);
    func_008D8210(&page->pages.pitch.diagram, 1, &layout, page->side, option);
    func_008C5230(&layout, 3, page->side);
    func_008E1760(&page->pages.pitch.legend, 1, &layout, page->side);
    func_008E14C0(&page->pages.pitch.legend, view);
    func_008E1420(&page->pages.pitch.legend, 1);
}
