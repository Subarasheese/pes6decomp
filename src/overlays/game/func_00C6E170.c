/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_002D5410(void);
extern void func_001C48E8(char *, s32, s32);
s32 func_00C6E6F0(M2C_UNK);
extern void func_00C6E700(s32);
extern void func_00C88DD0(s32, char *, char *);
extern void func_00C88EC0(s32, char *, char *);
extern char *D_003EA810;
extern s32 D_00CCBBCC[];
extern char D_00CCBBC0[];
extern char func_00C6DE10[];
extern char func_00C6DE70[];
extern char func_00C6E100[];
extern char func_00C6E140[];

void func_00C6E170(void) {
    func_00C6E700(func_002D5410());
    func_001C48E8(D_00CCBBC0, 0, 0x24);
    D_003EA810 = D_00CCBBC0;
    D_00CCBBCC[0] = func_00C6E6F0(0);
    func_00C88EC0(0x1C, func_00C6E140, func_00C6E100);
    func_00C88DD0(0x1C, func_00C6DE10, func_00C6DE70);
}
