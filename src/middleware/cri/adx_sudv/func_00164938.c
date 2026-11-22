/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern s32 func_00170228(s32, s32, s32, s32);
extern void func_00170248(void *);

void func_00164938(s32 arg0) {
    if (arg0 != 0) {
        func_00170228(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4));
        func_00170248(M2C_FIELD(arg0, void **, 0));
        return;
    }
    func_00170228(arg0, 0, 0, 0);
    func_00170248(NULL);
}
