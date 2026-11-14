/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_0023A380(void);
extern void func_00305E60(void *, char *);
extern void func_00305EC0(char *, s32, char *);
extern s32 func_0023A110();
extern void func_002D4C40(s32);
extern char D_005EB120[];
extern char D_005EB150[];
extern char func_002FE5B0[];
extern char func_002FE720[];
extern char func_002FE770[];

s32 func_002FE7C0(void *arg0) {
    if (func_0023A380() == 0) {
        return 0;
    }
    if (func_0023A110() != 0) {
        func_002D4C40(0);
        func_002D4C40(3);
        func_00305E60(arg0, func_002FE770);
        func_00305EC0(func_002FE720, 0x27, D_005EB120);
        func_00305EC0(func_002FE5B0, 0x28, D_005EB150);
        return 1;
    }
    return 0;
}
