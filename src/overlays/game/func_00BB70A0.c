/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
typedef struct { f32 v[4]; } __attribute__((aligned(16))) QVec;
extern void func_002871C0(void *);
s32 func_00BB70A0(void) {
    QVec sp10;
    s32 var_v0;
    func_002871C0(&sp10);
    var_v0 = 1;
    if ((sp10.v[0] <= 13465.0f) && !(sp10.v[0] < -13465.0f)) {
        var_v0 = 0;
    }
    return var_v0;
}
