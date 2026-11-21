/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Heap_Free(void *);
extern s32 func_001540B0(s32, s32);
extern void func_00362610(void);
extern s32 func_008187D0(void);

extern void *D_003EA26C;

void func_0080F5A0(void) {
    s8 value;
    value = *((s8 *)(((s8 *)D_003EA26C) + 0x3F));
    if (D_003EA26C != 0) {
        func_008187D0();
        Pes6Heap_Free(D_003EA26C);
        D_003EA26C = 0;
        if (value) {
            func_001540B0(0xC, 0);
            return;
        }
        func_00362610();
    }
}
