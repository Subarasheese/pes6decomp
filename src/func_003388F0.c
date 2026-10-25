/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct N { u8 p0[0xC]; s32 id; u8 p10[4]; struct N *next; u8 p18[2]; u8 f; } N;
extern N D_005F1D54[];

s32 func_003388F0(s32 id) {
    N *n = D_005F1D54;
    while (n) {
        if (n->id == id) {
            n->f = 1;
            return 1;
        }
        n = n->next;
    }
    return 0;
}
