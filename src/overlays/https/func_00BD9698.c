/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BBA2D0(s32 *);
s32 func_00BCF2F8(M2C_UNK);

s32 func_00BD9698(s32 *arg0) {
    if (arg0 != NULL) {
        if ((*arg0 != 0x74) || (func_00BCF2F8(2) != 0)) {
            return func_00BBA2D0(arg0);
        }
        return 0;
    }
    return 0;
}
