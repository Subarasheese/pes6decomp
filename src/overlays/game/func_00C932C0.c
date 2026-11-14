/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001867C0(s32);
extern void func_001C48E8(char *, s32, s32);
extern void func_00C88DD0(s32, char *, s32);
extern void func_00C88EC0(s32, char *, char *);
extern char *D_003EA8B0;
extern char D_00CCD8F0[];
extern char func_00C93200[];
extern char func_00C93230[];
extern char func_00C93260[];

void func_00C932C0(void) {
    if (D_003EA8B0 == NULL) {
        func_001C48E8(D_00CCD8F0, 0, 0x18);
        D_003EA8B0 = D_00CCD8F0;
        func_001867C0(0x8000);
        func_00C88EC0(0x15, func_00C93260, func_00C93200);
        func_00C88DD0(0x15, func_00C93230, 0);
    }
}
