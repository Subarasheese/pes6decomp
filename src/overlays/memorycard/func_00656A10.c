/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Heap_Free(void *);
extern char D_0065EF68[];
extern s32 D_0065EF70[];
extern s32 D_0065EF78[];
extern s32 D_0065EF88[];

void func_00656A10(void) {
    if ((*(s32 *)D_0065EF68) != 0) {
        if ((*(s32 *)D_0065EF68) != 0) {
            Pes6Heap_Free(*(void **)D_0065EF68);
        }
        (*(s32 *)D_0065EF68) = 0;
        D_0065EF88[0] = 0;
        D_0065EF70[0] = 0;
        D_0065EF78[0] = 0;
    }
}
