/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
typedef struct { s32 a; char *b; } Msg;
typedef struct { s32 pad[3]; s32 c; } Obj;
extern void func_008FBDB0(void *, Msg *);
extern void func_00900388(char *);
void func_00900500(void *a, char *s) {
    void *p = M2C_FIELD(a, void **, 0x868);
    if (p != 0 && a != 0 && ((Obj *)a)->c != 0) {
        Msg m;
        m.b = s;
        m.a = 0;
        func_008FBDB0(p, &m);
    } else {
        func_00900388(s);
    }
}
