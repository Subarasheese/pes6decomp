/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00333320(s32);
extern int func_0023A380(void);
extern s32 func_00332FA0(void);
extern int Pes6Job_SetField4(void *, char *, char *);
extern u8 D_003E9F50;
extern char func_00370EE0[];
extern char D_003E7288[];

s32 func_0036FD50(void *arg0) {
    if (func_0023A380() == 0) {
        return 0;
    }
    if ((D_003E9F50 != 0) && (func_00332FA0() != 0)) {
        func_00333320(1);
    }
    Pes6Job_SetField4(arg0, func_00370EE0, D_003E7288);
    return 1;
}
