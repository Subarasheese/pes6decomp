/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 lo : 2;
    u8 f : 1;
    u8 hi : 5;
} Flags;

extern s32 D_00522938[];
extern s32 D_0052293C[];
extern Flags D_0052294C[];
void Pes6Heap_Free(s32);

void func_001B6670(void) {
    Pes6Heap_Free(D_00522938[0]);
    D_00522938[0] = 0;
    D_0052293C[0] = 0;
    D_0052294C[0].f = 1;
}
