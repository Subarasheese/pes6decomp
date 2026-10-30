/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00166450(int, int, int);
extern int func_00162A38(void *);
void func_00168C78(void *arg0) {
    if (func_00162A38(M2C_FIELD(arg0, void **, 4)) == 1) {
        func_00166450((s32) arg0, 0, (s32) M2C_FIELD(arg0, s16 *, 0x42));
        return;
    }
    func_00166450((s32) arg0, 0, (s32) M2C_FIELD(arg0, s16 *, 0x42));
    func_00166450((s32) arg0, 1, (s32) M2C_FIELD(arg0, s16 *, 0x44));
}
