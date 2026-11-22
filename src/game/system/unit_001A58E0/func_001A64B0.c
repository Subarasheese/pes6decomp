/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_0017F880(s32);
extern void Pes6Heap_Free(void *);
extern u8 D_003E98A4;
extern u8 *D_003E75FC;
extern void *D_00520640[];

void func_001A64B0(u8 *arg0) {
    void *entry;
    s8 *entry2;
    u8 value;
    s32 i;
    u8 *entry3;

    u8 *entry4;
    u8 *entry5;
    int value2;
    entry5 = arg0;
    if (entry5[1] == 1) {
        entry5 = arg0;
        i = 0;
        func_0017F880(*((s32 *)(D_003E75FC + (8 * arg0[i]))));
        for (i = 0; i < 0x23; i++) {
            entry = D_00520640[i];
            if (entry == entry5) {
                D_00520640[i] = 0;
            }
        }

        arg0[1] = 0;
    }
    value = entry5[3];
    entry3 = arg0;
    if (((1 + 3) - 1) <= ((value + 1) - 1)) {
        void *p = *((void **)(8 + ((s8 *)entry3)));
        entry2 = ((s8 *)entry3) + (value2 = 8);
        ;
        if (p) {
            Pes6Heap_Free(*((void **)entry2));
        }
        *((void **)(((s8 *)(entry4 = entry5)) - -8)) = 0;
        arg0[1] = 0;
    }
    arg0[2] = 0;
    D_003E98A4 = arg0[3];
}
