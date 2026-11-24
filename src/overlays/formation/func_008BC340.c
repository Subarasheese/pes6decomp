/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
void func_008BC340(FormationOptions *team, const FormationTeam *stored) {
    team->originalInstructions = stored->plan.layouts[0].instructions;
}
