/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_00164EA0(void *, void *);              /* extern */
void func_0016B058(s32, s32);                    /* extern */

void func_00164E30(void *arg0) {
    void (*temp_v0)(void);

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x50) == 0) {
            func_00164E30(M2C_FIELD(arg0, void **, 0));
            temp_v0 = M2C_FIELD(arg0, void (**)(void), 0x48);
            if (temp_v0 != NULL) {
                temp_v0();
            }
            func_00164EA0(arg0, arg0);
            func_0016B058(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x68));
            M2C_FIELD(arg0, s32 *, 0x50) = 1;
        }
    }
}
