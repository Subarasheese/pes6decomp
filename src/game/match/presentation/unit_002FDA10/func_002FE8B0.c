/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_presentation.h"
extern s32 func_00BD9770(void);
extern s32 func_002FE950(Presentation *);
s32 func_002FE8B0(Presentation *state) {
    if (func_00BD9770() != 0)
        return 0;
    func_00305E60(state, func_002FE950);
    return 1;
}
