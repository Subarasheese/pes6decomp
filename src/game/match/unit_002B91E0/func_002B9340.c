/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#pragma opt_propagation off
#include "pes6/match_option_slots.h"
extern const u32 D_003DA360[2][8];
extern void *memset(void *, s32, u32);
static inline void resetBindings(MatchOptionBindings *bindings) {
    s32 bank;
    if (!bindings)
        return;
    for (bank = 0; bank < 2; bank++) {
        bindings->bank[bank][0] = D_003DA360[bank][0];
        bindings->bank[bank][1] = D_003DA360[bank][1];
        bindings->bank[bank][2] = D_003DA360[bank][2];
        bindings->bank[bank][3] = D_003DA360[bank][3];
        bindings->bank[bank][4] = D_003DA360[bank][4];
        bindings->bank[bank][5] = D_003DA360[bank][5];
        bindings->bank[bank][6] = D_003DA360[bank][6];
        bindings->bank[bank][7] = D_003DA360[bank][7];
    }
    memset(bindings->extra, 0, sizeof(bindings->extra));
}
void func_002B9340(MatchOptionPreset *preset) {
    preset->fields.mode = 1;
    preset->fields.options[0] = 0;
    preset->fields.options[1] = 0;
    preset->fields.options[2] = 0;
    preset->fields.options[3] = 0;
    preset->fields.options[4] = 0;
    memset(preset->fields.reserved06, 0, sizeof(preset->fields.reserved06));
    resetBindings(&preset->fields.bindings);
}
