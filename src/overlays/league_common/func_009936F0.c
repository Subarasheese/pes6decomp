/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00993770(s32);
extern s32 func_0095ED20(void);

s32 func_009936F0(void) {
    if (func_0095ED20() == 0) {
        return 0;
    }
    func_00993770(1);
    return 0;
}
