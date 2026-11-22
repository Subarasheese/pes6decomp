/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00844100(void);
void *func_00847280(s16);

s32 func_0085D680(s32 arg0, void *arg1) {
    void *entry;

    entry = func_00847280(M2C_FIELD(arg1, s16 *, 4));
    if (entry == NULL) {
        return -1;
    }
    M2C_FIELD(entry, s8 *, 0x52) = (s8)M2C_FIELD(arg1, u16 *, 2);
    func_00844100();
    return 0;
}
