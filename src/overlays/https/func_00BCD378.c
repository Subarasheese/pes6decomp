/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_00BB3380(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *func_00BC0A38(M2C_UNK);

void *func_00BCD378(void) {
    void *temp_v0;

    temp_v0 = func_00BC0A38(0x70);
    if (temp_v0 == NULL) {
        func_00BB3380(0x14, 0xA3, 0x21, 0, 0);
        return NULL;
    }
    func_001C48E8(temp_v0, 0, 0x70);
    M2C_FIELD(temp_v0, void **, 4) = (void *)(temp_v0 + 0x40);
    M2C_FIELD(temp_v0, s32 *, 0x6C) = 1;
    return temp_v0;
}
