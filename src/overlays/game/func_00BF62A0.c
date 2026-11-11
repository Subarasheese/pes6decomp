/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 func_00BF6270(void);
void **func_00B2A420(u8);
s32 func_00BF62A0(void) {
    s32 var_s0;
    u16 temp_v1;
    var_s0 = 0;
    temp_v1 = M2C_FIELD(M2C_FIELD(*func_00B2A420(func_00BF6270()), void **, 4), u16 *, 0x30);
    switch (temp_v1) {
    case 0x453:
    case 0x454:
    case 0x45A:
        var_s0 = 1;
        break;
    }
    return var_s0;
}
