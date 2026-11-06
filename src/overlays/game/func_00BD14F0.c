/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00152130(s32, u8);
extern void func_0017E150(int);
extern char D_00591DD5[];

s32 func_00BD14F0(void) {
    func_00152130(1, 0xFF);
    func_0017E150(1);
    (*(s8 *)D_00591DD5) = 1;
    return 0;
}
