/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
extern void func_00B806D0(void);
extern void func_00BF9A50(void);
void func_00B824B0(void) {
    if (!D_00C9A710.update)
        D_00C9A710.update = func_00B806D0;
    D_00C9A710.update();
    func_00BF9A50();
}
