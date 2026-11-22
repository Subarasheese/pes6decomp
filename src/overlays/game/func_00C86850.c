/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *Pes6Heap_Alloc(s32, s32);
extern s32 func_002D5440(void);

extern void *D_003EA884;
extern char D_00CA8850[];

void func_00C86850(void) {
    void *temp_v0;

    if (D_003EA884 == NULL) {
        func_002D5440();
        temp_v0 = Pes6Heap_Alloc(1, 0x58);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, M2C_UNK **, 0x28) = ((void *)D_00CA8850);
            M2C_FIELD(temp_v0, s32 *, 0x2C) = 6;
        }
        D_003EA884 = temp_v0;
    }
}
