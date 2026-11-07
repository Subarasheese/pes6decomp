/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s16 x, y; } V2S;
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);            /* extern */
void func_0063E040(void *arg0, s8 arg1, s8 arg2, void *arg3) {
    func_001C48E8(arg0, 0, 0x1C);
    *(V2S *)((u8 *)arg0 + 8) = *(V2S *)arg3;
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 9;
    M2C_FIELD(arg0, s8 *, 0x1A) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1B) = arg2;
}
