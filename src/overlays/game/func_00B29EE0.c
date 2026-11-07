/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_00B2A330(s32, s32);
s32 func_00B29C80(void);
s32 func_00B29CB0(void);
void func_00B2A1E0(s32, s32);

void func_00B29EE0(s32 arg0, s32 arg1) {
    if (func_00B29CB0() == 0) {
        if (func_00B29C80() != 0) {
            func_00B2A330(arg0 + 0x284, arg1);
        }
    } else {
        func_00B2A1E0(arg0 + 0x124, arg1);
    }
}
