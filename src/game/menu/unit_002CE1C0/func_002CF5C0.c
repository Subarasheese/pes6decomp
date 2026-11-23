/* compiler: mwcc-3.0.1b210 */
#include "pes6/kit.h"
extern void func_002D07A0(void *model, const Pes6KitDefinition *kit, s32 team, s32 variant);
extern void func_002CF640(void *model, const Pes6KitDefinition *kit, s32 side);
void func_002CF5C0(void *model, s32 team, s32 variant, s32 side) {
    const Pes6KitDefinition *kit = func_002F82B0(team, variant);
    if (kit->type) {
        func_002D07A0(model, kit, team, variant);
        return;
    }
    func_002CF640(model, kit, side);
}
