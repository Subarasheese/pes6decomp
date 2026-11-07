/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u32 a : 10;
    u32 b : 11;
    u32 c : 11;
    u32 d : 10;
    u32 e : 22;
    u8 pad8[4];
    s8 level;
} Rec;

Rec *func_00223E00(void);

u8 func_002281F0(void) {
    Rec *r = func_00223E00();

    if (r == NULL) {
        return 0;
    }
    return r->level + 1;
}
