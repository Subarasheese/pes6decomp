/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 Pes6Heap_Free(s32);
s32 func_001C4730(s32, s32, u16);
extern char D_00520310[];
extern char D_00520314[];
extern char D_00520318[];
extern char D_0052031E[];

void func_0019ED60(void) {
    s32 *entry;
    int value;
    if (*((s32 *)D_00520318)) {
        func_001C4730(*((s32 *)D_00520314), *((s32 *)D_00520318), value = *((u16 *)D_0052031E));
        Pes6Heap_Free(*((s32 *)D_00520318));
    }
    *((s32 *)D_00520314) = 0;
    *(entry = (s32 *)D_00520310) = (*((s32 *)D_00520318) = 0);
}
