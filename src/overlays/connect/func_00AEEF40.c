/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(M2C_UNK, M2C_UNK);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);
extern s32 D_00B02BB8[];
extern s32 D_00B02BBC[];

void func_00AEEF40(void) {
    s32 temp_v0;

    temp_v0 = Pes6Heap_Alloc(1, 0x200);
    D_00B02BB8[0] = temp_v0;
    D_00B02BBC[0] = 0x40;
    if (temp_v0 != 0) {
        func_001C48E8(temp_v0, 0, 0x200);
    }
}
