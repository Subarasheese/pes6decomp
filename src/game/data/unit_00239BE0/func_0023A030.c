/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_008FF780(u8);                          /* extern */
extern u8 Pes6EndingScene_Phase;

void func_0023A030(void) {
    if (Pes6EndingScene_Phase == 8) {
        func_008FF780(Pes6EndingScene_Phase);
    }
}
