/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_0099AF50(s32, M2C_UNK, M2C_UNK);           /* extern */

typedef struct { s32 a; s32 *p; u8 pad[12]; } E;
void func_009EA9E0(void *arg0, s32 arg1) {
    E *temp_s0;

    temp_s0 = M2C_FIELD(arg0, E **, 4);
    *temp_s0[arg1].p = func_0099AF50(temp_s0->a, 2, 1);
}
