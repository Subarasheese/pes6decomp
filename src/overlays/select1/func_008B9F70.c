/* compiler: mwcc-3.0.1b151 */

#include "pes6/controller_layout.h"

void func_008B9F70(s32 slot) {
    setStandardLayout(slot);
    D_003E9AC0 = 1;
    func_008B9950();
    func_00245390();
    D_003E9AC0 = 0;
}
