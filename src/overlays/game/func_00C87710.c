/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C48E8(char *, s32, s32);
extern void func_00C88DD0(s32, char *, s32);
extern void func_00C88EC0(s32, char *, char *);
extern void func_00C89260(s32, s32);
extern char D_00CCCDC0[];
extern char func_00C87170[];
extern char func_00C87470[];
extern char func_00C875F0[];

void func_00C87710(void) {
    func_001C48E8(D_00CCCDC0, 0, 0x18);
    func_00C89260(2, 0);
    func_00C88EC0(1, func_00C87170, func_00C875F0);
    func_00C88DD0(1, func_00C87470, 0);
}
