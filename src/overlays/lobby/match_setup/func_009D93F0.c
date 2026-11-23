/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    void *group, *box, *firstControl, *secondControl, *background;
    void *labels[4];
    u32 state;
} LobbyPanel;
extern void *func_001C48E8(void *, s32, u32);
extern void func_001D7F10(void *), func_0099D280(void *), func_0099D530(void *);
extern void *func_0099AF50(void *, s32, s32), *func_0099D2C0(s32, s32, void *, s32, s32),
    *func_0099D570(s32, s32, void *, s32, s32), *func_0099B690(void *, s32, const void *);
extern void func_009D9090(LobbyPanel *, s32);
extern const char D_00A03130[];
void func_009D93F0(void *root, LobbyPanel *p, s32 selection) {
    void *box;
    func_001D7F10(p->group);
    func_001D7F10(p->box);
    func_001D7F10(p->background);
    func_0099D280(p->firstControl);
    func_0099D530(p->secondControl);
    func_001C48E8(p, 0, sizeof(*p));
    p->group = func_0099AF50(root, 14, 1);
    box = func_0099AF50(root, 15, 1);
    p->box = box;
    p->background = func_0099AF50(root, 0, 1);
    p->firstControl = func_0099D2C0(0, 0, box, 0x43, 1);
    p->secondControl = func_0099D570(4, 0, box, 0x44, 1);
    p->labels[0] = func_0099B690(box, 16, D_00A03130);
    p->labels[1] = func_0099B690(box, 17, D_00A03130);
    p->labels[2] = func_0099B690(box, 18, 0);
    p->labels[3] = func_0099B690(box, 19, D_00A03130);
    func_009D9090(p, selection);
}
