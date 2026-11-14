/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(char *, s32, s32);
void func_00C70FE0();
void func_00C88DD0(s32, char *, char *);
void func_00C88EC0(s32, char *, char *);
extern char D_00CCBCD0[];
extern char func_00C706C0[];
extern char func_00C70750[];
extern char func_00C70790[];
extern char func_00C707A0[];

void func_00C707B0(void) {
    func_001C48E8(D_00CCBCD0, 0, 0x54);
    func_00C70FE0();
    func_00C88EC0(0x18, func_00C707A0, func_00C70790);
    func_00C88DD0(0x18, func_00C706C0, func_00C70750);
}
