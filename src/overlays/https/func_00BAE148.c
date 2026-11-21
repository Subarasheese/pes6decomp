/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BB5708(s32 *);

s32 func_00BAE148(void *arg0) {
    s32 *temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 **, 0x1C);
    if (temp_v1 != NULL) {
        if (*temp_v1 != 0) {
            *temp_v1 = 0;
        }
        func_00BB5708(M2C_FIELD(arg0, s32 **, 0x1C));
        M2C_FIELD(arg0, s32 **, 0x1C) = NULL;
    }
    return 0;
}
