/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct S { u8 pad[0x144]; u8 a; u8 pad2[0xB]; s32 cnt; } S;
extern S *func_00B68690(void);
M2C_UNK SD_call(M2C_UNK);
M2C_UNK func_00B67530(u8);

s32 func_00B67D10(void) {
    s32 temp_v1;
    S *temp_v0;
    temp_v0 = func_00B68690();
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_v1 = temp_v0->cnt - 1;
    temp_v0->cnt = temp_v1;
    if (temp_v1 < 0) {
        temp_v0->cnt = 5;
    }
    func_00B67530(temp_v0->a);
    SD_call(0x8400F803);
    return 0;
}
