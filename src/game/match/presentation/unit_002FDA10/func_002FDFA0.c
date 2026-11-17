/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void (*)(void));
extern s32 func_00360B00(void);
extern void func_00305E50(void *);
extern char Pes6SceneStack[];
extern void func_002FDEB0(void);

s32 func_002FDFA0(void *arg0) {
    if (((*(s32 *)Pes6SceneStack) == 0xC) && (func_00360B00() == 1)) {
        func_00305E60(arg0, func_002FDEB0);
    }
    if ((*(s32 *)Pes6SceneStack) == 9) {
        func_00305E60(arg0, func_002FDEB0);
    }
    if (((*(s32 *)Pes6SceneStack) != 0xC) && ((*(s32 *)Pes6SceneStack) != 9)) {
        func_00305E50(arg0);
    }
    return 1;
}
