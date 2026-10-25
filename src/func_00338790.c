/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct N { u8 p0[0xC]; s32 id; u8 p10[4]; struct N *next; u8 p18[2]; u8 f; } N;
extern N D_005F1D54[];

u8 func_00338790(s32 id) {
    N *n = D_005F1D54;
    while (n) {
        if (n->id == id) return n->f;
        n = n->next;
    }
    return 0;
}
