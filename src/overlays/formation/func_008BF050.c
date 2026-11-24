/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_0028C300(FormationInstructions *);
void func_008BF050(FormationOptions *opts) {
    func_0028C300(&opts->tactics.plan.layouts[opts->tactics.selectedLayout].instructions);
}
