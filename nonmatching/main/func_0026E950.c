/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0024EDD0();                            /* extern */
M2C_UNK func_0024F830();                            /* extern */
M2C_UNK func_00250740();                            /* extern */
M2C_UNK func_00253B80();                            /* extern */
M2C_UNK func_00254C20();                            /* extern */
M2C_UNK func_002FC6C0();                            /* extern */
M2C_UNK func_003063C0();                            /* extern */
extern u32 D_003E9C78;

void func_0026E950(void) {
    u32 temp_v0;

    temp_v0 = D_003E9C78 + 1;
    D_003E9C78 = temp_v0;
    if (temp_v0 >= 0x10000000U) {
        D_003E9C78 = 0;
    }
    func_0024F830();
    func_00254C20();
    func_00250740();
    func_00253B80();
    func_003063C0();
    func_0024EDD0();
    func_002FC6C0();
}
