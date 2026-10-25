/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Ent;

extern Ent *D_00533038[];
extern s32 D_0053303C[];

s32 func_001FCAD0(s32 i) {
    if (D_00533038[0] != NULL && i < D_0053303C[0]) {
        return D_00533038[0][i].a;
    }
    return -1;
}
