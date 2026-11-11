/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { f32 x, y; } V2;
extern u32 func_00B15370(void);
M2C_UNK SD_call(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00960FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00B0EDF0();                            /* extern */

s32 func_00B110D0(void) {
    u32 temp_v0;
    void *temp_v0_2;
    temp_v0 = func_00B15370();
    if (temp_v0 == 0) {
        return 0;
    }
    func_00960FA0(1);
    func_00B0EDF0();
    M2C_FIELD(temp_v0, s32 *, 0xC28) = 0;
    temp_v0_2 = M2C_FIELD(temp_v0, void **, 0xC3C);
    *(V2 *)(temp_v0 + 0xC40) = *(V2 *)temp_v0_2;
    func_00958000(0x24);
    SD_call(0x84008401);
    return 0;
}
