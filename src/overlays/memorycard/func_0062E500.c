/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002DB8A0(s32);
extern s32 func_0063A830(void);
extern s32 D_0065C88C[];

s32 func_0062E500(void) {
    if (func_0063A830() != 0) {
        return func_002DB8A0(D_0065C88C[0]);
    }
    return 0;
}
