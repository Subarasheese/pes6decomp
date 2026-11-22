/* compiler: mwcc-3.0.1b151 */
#include "types.h"

void func_002562B0(s32 arg0);
extern char D_0051FFB8[];

void func_00184A10(void) {
    u8 *p = *(u8 **)D_0051FFB8;
    if (p == 0) {
        return;
    }
    if (p[2] == 0) {
        return;
    }
    func_002562B0(8);
    (*(u8 **)D_0051FFB8)[2] = 0;
}
