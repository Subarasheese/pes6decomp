/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_0051FF4C[];
void func_00182A10(void);

void func_00182900(void) {
    if (D_0051FF4C[0] == 0) {
        return;
    }
    func_00182A10();
}
