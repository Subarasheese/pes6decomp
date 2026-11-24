/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_002DF960(void *), func_001F1EA0(void *), func_001D7F10(void *);
void func_008E91B0(FormationPage *page) {
    func_002DF960(page->animation);
    func_001F1EA0(page->group);
    func_001D7F10(page->text);
    func_008C5D70(page->display);
    resetFormationPage(page);
}
