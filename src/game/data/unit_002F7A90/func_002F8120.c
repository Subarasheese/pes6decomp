/* compiler: mwcc-3.0.1b210 */
#include "pes6/kit.h"
extern Pes6KitDefinition *func_002F82D0(s32 group, s32 team, s32 variant, s32 original);
const Pes6KitDefinition *func_002F8120(s32 team, s32 variant) {
    return func_002F82D0(0, team, variant, 1);
}
