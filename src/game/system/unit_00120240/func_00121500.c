/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 sceDmaSync(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 D_003E9788;

void func_00121500(void) {
    do {

    } while (sceDmaSync(D_003E9788, 1, 4) != 0);
}
