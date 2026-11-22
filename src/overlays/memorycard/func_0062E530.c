/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002DB940(s32);
s32 func_002DBC20(s32, s32, s32);
extern char D_0065C88C[];

void func_0062E530(s32 *arg0) {
    func_002DBC20((*(s32 *)D_0065C88C), *arg0, 4);
    *arg0 = func_002DB940((*(s32 *)D_0065C88C));
}
