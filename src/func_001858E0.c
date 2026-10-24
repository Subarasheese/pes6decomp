/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_0051FFB8[];
void func_00184A60(void);

void func_001858E0(void) {
    if (D_0051FFB8[0] != NULL) {
        return;
    }
    func_00184A60();
}
