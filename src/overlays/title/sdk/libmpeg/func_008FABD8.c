/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern void func_008FAA38(void *);
extern void func_008FAA70(void *, s32);
void func_008FABD8(void *a) {
    s32 n;
    func_008FAA38(a);
    n = -(*(volatile s32 *)0x10002020 & 7) & 7;
    if (n != 0) {
        func_008FAA70(a, n);
    }
}
