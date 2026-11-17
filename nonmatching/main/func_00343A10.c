/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern int func_003387D0(void *, void (*)(void), char *);
extern int func_00333600(int);
extern void *func_00338AD0(s32, void (*)(void), s32, char *);
extern char D_003E61A8[];
extern void func_00343880(void);
extern void func_00343C90(void);

s32 func_00343A10(void *arg0) {
    s32 t;

    if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3C), u8 *, 8) != 0) {
        func_003387D0(arg0, func_00343C90, D_003E61A8);
        return 0;
    }
    t = func_00333600(4);
    if ((func_00333600(6) | t) == 0) {
        return 0;
    }
    func_00338A60(func_00338AD0(0x8000001A, func_00343880, M2C_FIELD(arg0, s32 *, 8), D_003E61A8), arg0);
    func_003387D0(arg0, func_00343C90, D_003E61A8);
    return 1;
}
