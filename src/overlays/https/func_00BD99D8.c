/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, s32);
s32 func_00BC0A60(s32, s32, M2C_UNK);
void *func_00BD9A70(s32);

void *func_00BD99D8(void *arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_00BD9A70(M2C_FIELD(arg0, s32 *, 0x10));
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00BC0A60(M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC) * 4, 0);
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0) = (s32)M2C_FIELD(arg0, s32 *, 0);
            func_001C4730(temp_v0_2, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0) * 4);
            M2C_FIELD(temp_v0, s32 *, 8) = (s32)M2C_FIELD(arg0, s32 *, 8);
            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32)M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(temp_v0, s32 *, 0x10) = (s32)M2C_FIELD(arg0, s32 *, 0x10);
            return temp_v0;
        }
    }
    return NULL;
}
