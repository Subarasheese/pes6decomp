/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0051FF88[];
void func_001514D0(s32);

void func_00183050(void) {
    if (D_0051FF88[0] == 0) {
        return;
    }
    func_001514D0(D_0051FF88[0]);
}
