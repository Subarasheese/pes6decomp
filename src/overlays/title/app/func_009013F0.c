/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
extern void *D_003EA610;
extern char D_009025F0[];
extern char D_009025F4[];

void func_009013F0(void) {
    if (D_003EA610 != NULL) {
        Pes6Heap_Free(D_003EA610);
        D_003EA610 = NULL;
    }
    func_001EDD90((*(s32 *)D_009025F0));
    (*(s32 *)D_009025F0) = 0;
    (*(s32 *)D_009025F4) = 0;
}
