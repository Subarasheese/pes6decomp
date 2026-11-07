/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 pad0;
    s32 v4;
} Obj;

extern s32 D_003E74F0;
extern Obj *D_003E9A80;
void func_001D7840(s32, s32);

void func_0023F2F0(void) {
    switch (D_003E74F0) {
    case 8:
        func_001D7840(D_003E9A80->v4, 2);
        break;
    }
}
