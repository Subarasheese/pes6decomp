/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_008C5CF0(void *, s8), func_001D7D60(void *, s8);
extern void func_001F3D10(void *, s8);
void func_008E8EC0(FormationPage *entry, s8 visible) {
    func_008C5CF0(entry->display, visible);
    func_001D7D60(entry->text, visible);
    func_001F3D10(entry->group, visible);
}
