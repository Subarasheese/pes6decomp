/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void Pes6Module_Load(int);
extern void func_002CAA30(void);
M2C_UNK func_002CB600(M2C_UNK);
s32 func_0099BB30(void) {
    func_002CB600(0x12);
    func_002CAA30();
    Pes6Module_Load(0x1A);
    return 1;
}
