/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x622];
    u8 enabled;
} Cfg;

extern char D_005EB210[];
void func_001C48E8(void *, s32, s32);
Cfg *func_00256140(void);
void func_00305EC0(void (*)(void), s32, void *);
void func_00305A70(void);

s32 func_00305BF0(void) {
    func_001C48E8(D_005EB210, 0, 0x5C);
    if (func_00256140()->enabled != 0) {
        func_00305EC0(func_00305A70, 1, D_005EB210);
    }
    return 1;
}
