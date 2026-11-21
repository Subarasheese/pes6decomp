/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void *func_00134FE8(s32);

void *func_0016B360(s32 arg0, void *arg1) {
    void *entry;
    void *entry2;

    entry = M2C_FIELD(arg1, void **, 0xC);
    entry2 = func_00134FE8(0x20);
    if (entry2 == NULL) {
        return NULL;
    }
    M2C_FIELD(entry2, void **, 8) = arg1;
    M2C_FIELD(entry2, void **, 0xC) = entry;
    M2C_FIELD(arg1, void **, 0xC) = entry2;
    M2C_FIELD(entry2, s32 *, 0x10) = arg0;
    M2C_FIELD(entry2, s32 *, 0) = 1;
    M2C_FIELD(entry, void **, 8) = entry2;
    return entry2;
}
