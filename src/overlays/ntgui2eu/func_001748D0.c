/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_001748D0(void *arg0, s32 arg1) {
    void (*temp_v0)(void *);

    if (M2C_FIELD(arg0, s32 *, 0x918) != arg1) {
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), void (**)(void *), 0x128);
        if (temp_v0 != NULL) {
            temp_v0(arg0);
        }
    }
}
