/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 count;
} Tbl;

extern Tbl *D_005202E0[];

void func_0019DF40(u8 n) {
    Tbl *t = D_005202E0[0];

    if (t == NULL) {
        return;
    }
    if (n < 3) {
        t->count = n;
    } else {
        t->count = 2;
    }
}
