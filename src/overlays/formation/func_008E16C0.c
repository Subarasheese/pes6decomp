/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_002DC1D0(void *), func_001D7F10(void *);
void func_008E16C0(FormationLegend *page) {
    func_002DC1D0(page->animation);
    func_001D7F10(page->caption);
    func_008C5D70(&page->group);
    resetFormationLegend(page);
}
