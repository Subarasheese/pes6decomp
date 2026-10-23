/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001A5A20(s32);
extern void func_002873F0();
extern char D_0058E5B4[];

void func_002873C0(void) {
    func_002873F0();
    func_001A5A20(**(int **)D_0058E5B4);
}
