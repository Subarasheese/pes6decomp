/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001DCD60();                            /* extern */
M2C_UNK func_001DDD20();                            /* extern */
M2C_UNK func_001DFAB0();                            /* extern */
M2C_UNK func_001F4640();                            /* extern */
M2C_UNK func_001F4E60();                            /* extern */
extern s32 D_003E9958;

void func_001DE9F0(s32 arg0) {
    func_001C48E8((s32)&D_003E9958, 0, 4);
    D_003E9958 = arg0;
    func_001DCD60();
    func_001F4640();
    func_001DDD20();
    func_001F4E60();
    func_001DFAB0();
}
