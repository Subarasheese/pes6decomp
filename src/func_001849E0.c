/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_0051FFC0[];
void func_00183F10(void);

void func_001849E0(void) {
    if (D_0051FFC0[0] != NULL) {
        return;
    }
    func_00183F10();
}
