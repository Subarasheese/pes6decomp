/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern void func_00827C70(s32);
extern s32 func_00828140(void);
extern char D_008AA13C[];

static inline void *get_ctx(void) {
    if (func_0082C2A0() == 0) {
        return NULL;
    }
    return D_008AA13C;
}

static inline void *get_ctx2(void) {
    void *p = get_ctx();
    if (p == NULL) {
        return NULL;
    }
    return p;
}

void func_00831E80(void) {
    void *p = get_ctx2();
    s32 v;

    if (p == NULL) {
        v = 0;
    } else {
        v = M2C_FIELD(p, s32 *, 4);
    }
    func_00827C70(v + func_00828140());
}
