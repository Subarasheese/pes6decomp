/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0026AEE0(s32, s32);
extern void func_008FAB70(s8);
extern char D_003AE9D0[];

void func_008F9980(s64 arg0) {
    func_008FAB70(arg0);
    func_0026AEE0(!arg0, (*(s32 *)D_003AE9D0) + 0xC);
}
