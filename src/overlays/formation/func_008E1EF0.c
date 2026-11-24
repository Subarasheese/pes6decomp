/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"
extern void func_002DF960(void *), func_001F1EA0(void *), func_001D7F10(void *), func_008B4680(s32);
void func_008E1EF0(FormationList *list) {
    func_002DF960(list->animation);
    func_001F1EA0(list->layers);
    func_001D7F10(list->name);
    func_001D7F10(list->value);
    func_008C5D70(list->menuGroup);
    resetFormationList(list);
    func_008B4680(0);
}
