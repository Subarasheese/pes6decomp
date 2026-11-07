/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E7448;
extern char D_00507A8C[];
void func_0012AD50(s32);
void func_0012ADE0(s32);
void func_00149DB0(s32);

void func_001453E0(s32 arg) {
    if (D_003E7448 != 0) {
        func_0012AD50(M2C_FIELD(D_00507A8C, s32 *, 0));
    }
    func_00149DB0(arg);
    if (D_003E7448 != 0) {
        func_0012ADE0(M2C_FIELD(D_00507A8C, s32 *, 0));
    }
}
