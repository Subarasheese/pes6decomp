/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct S { u8 pad[0x88]; s32 cnt; u8 pad2[1]; s8 flag; } S;
extern S *func_00AF3B30(void);
M2C_UNK func_0026E840(M2C_UNK);

s32 func_00AF3D10(void) {
    s32 temp_v1;
    S *temp_v0;
    temp_v0 = func_00AF3B30();
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v1 = temp_v0->cnt - 1;
    temp_v0->cnt = temp_v1;
    if (temp_v1 < 0) {
        temp_v0->cnt = 4;
    }
    temp_v0->flag = 1;
    func_0026E840(0x8400F803);
    return 0;
}
