/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern int func_003387D0(void *, void (*)(void), char *);
extern int func_00333600(int);
extern void *func_00338AD0(s32, void (*)(void), s32, char *);
extern char D_003E6228[];
extern void func_00349930(void);
extern void func_00349C70(void);

s32 func_00349BB0(void *arg0) {
    u8 *p;
    void *t;

    p = M2C_FIELD(arg0, u8 **, 0x40);
    if (func_00333600(5) == 0) {
        if (p[8] == 0) {
            return 0;
        }
        func_003387D0(arg0, func_00349C70, D_003E6228);
        return 1;
    }
    t = func_00338AD0(0x80000019, func_00349930, M2C_FIELD(arg0, s32 *, 8), D_003E6228);
    M2C_FIELD(t, s32 *, 0x2C) = p[0x78];
    M2C_FIELD(t, s32 *, 0x30) = M2C_FIELD(arg0, s32 *, 0x30);
    func_00338A60(t, arg0);
    func_003387D0(arg0, func_00349C70, D_003E6228);
    return 0;
}
