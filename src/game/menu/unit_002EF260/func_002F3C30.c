/* compiler: mwcc-3.0.1b210 */
#include "types.h"
void func_002EFCB0(void *);
void func_002F3C30(u8 *a0) {
    if (a0 == 0) return;
    func_002EFCB0(a0 + 0xC);
    a0[1] = 0x1;
}
