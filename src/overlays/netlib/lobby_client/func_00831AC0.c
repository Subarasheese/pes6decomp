/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
void func_00827C70(s32);
s32 func_00828140(void);
extern char D_008AA13C[];

static inline void *get_base(void) {
    if (func_0082C2A0() == 0) {
        return NULL;
    }
    return D_008AA13C;
}

static inline void *get_obj(void) {
    void *p = get_base();
    if (p == NULL) {
        return NULL;
    }
    return p;
}

void func_00831AC0(void) {
    void *p;
    s32 a;
    s32 b;

    p = get_obj();
    if (p == NULL) {
        a = 0;
    } else {
        a = M2C_FIELD(p, s32 *, 8);
    }
    p = get_obj();
    if (p == NULL) {
        b = 0;
    } else {
        b = M2C_FIELD(p, s32 *, 0x20);
    }
    func_00827C70((a - (b * 0x3C)) + func_00828140());
}
