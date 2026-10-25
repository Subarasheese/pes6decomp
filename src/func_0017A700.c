/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 value;
    s32 flag;
} Pair;

extern Pair D_00510FD0[];
void func_001C48E8(void *, s32, s32);

void func_0017A700(s32 index, s32 value) {
    D_00510FD0[index].value = value;
    D_00510FD0[index].flag = 0;
    if (index <= 100) {
        func_001C48E8(&D_00510FD0[index + 1], 0, (3 - (index + 1)) * sizeof(Pair));
    }
}
