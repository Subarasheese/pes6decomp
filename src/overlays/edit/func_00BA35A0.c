/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_001EDD90(s32);
extern s32 D_00CE4188[];
extern char D_00CE418C[];
extern char D_00CE4190[];
extern s32 D_00CE41A0[];

void func_00BA35A0(void) {
    if (D_00CE4188[0] != 0) {
        func_001EDD90(D_00CE4188[0]);
        Pes6Heap_Free(*(void **)D_00CE418C);
        Pes6Heap_Free(*(void **)D_00CE4190);
        D_00CE4188[0] = 0;
        (*(s32 *)D_00CE418C) = 0;
        (*(s32 *)D_00CE4190) = 0;
    }
    if (D_00CE41A0[0] != 0) {
        func_001EDD90(D_00CE41A0[0]);
        D_00CE41A0[0] = 0;
    }
}
