/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_002BBD00(s32 *);

s32 func_002BB660(void *arg0) {
    s32 sp18[2];

    sp18[0] = 0;
    sp18[1] = 0;
    sp18[0] = M2C_FIELD(arg0, s32 *, 4);
    func_002BBD00(sp18);
    return 0;
}
