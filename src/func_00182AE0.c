/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_0051FF4E[];
void func_00184A10(void);

void func_00182AE0(s32 value) {
    D_0051FF4E[0] = value;
    if (value == 0) {
        func_00184A10();
    }
}
