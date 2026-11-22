/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00220240(M2C_UNK, M2C_UNK);
extern void Pes6HeapZone_Open(s32);
extern void Pes6HeapZone_Close(s32);
extern char D_008E78D0[];
extern char D_008E78D4[];
extern char D_008E78D8[];
extern char D_008E78DC[];
extern char D_008E78E0[];

void func_008C9760(void) {
    func_00220240(0, 2);
    func_00220240(0, 6);
    func_00220240(0, 7);
    func_00220240(0, 4);
    func_00220240(0, 5);
    Pes6Heap_Free(*(void **)D_008E78D0);
    (*(s32 *)D_008E78D0) = 0;
    Pes6Heap_Free(*(void **)D_008E78D4);
    (*(s32 *)D_008E78D4) = 0;
    Pes6Heap_Free(*(void **)D_008E78D8);
    (*(s32 *)D_008E78D8) = 0;
    Pes6Heap_Free(*(void **)D_008E78DC);
    (*(s32 *)D_008E78DC) = 0;
    Pes6Heap_Free(*(void **)D_008E78E0);
    (*(s32 *)D_008E78E0) = 0;
    Pes6HeapZone_Close(5);
    Pes6HeapZone_Open(5);
}
