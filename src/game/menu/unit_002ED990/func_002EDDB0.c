/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00223A80(void);
void *func_002EE260(s32, s32);

s32 func_002EDDB0(s32 arg0) {
    void *record;

    func_00223A80();
    record = func_002EE260(arg0, 0);
    if (record == NULL) {
        return 0x1CA;
    }
    return M2C_FIELD(record, s32 *, 4);
}
