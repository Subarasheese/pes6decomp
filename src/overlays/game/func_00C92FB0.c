/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00C89850(s32);                         /* extern */
extern void *D_003EA8AC;

void func_00C92FB0(void) {
    s32 var_s1;
    void *temp_s0;

    temp_s0 = D_003EA8AC;
    if (temp_s0 != NULL) {
        var_s1 = 0x48;
        do {
            func_00C89850(var_s1);
            var_s1 += 1;
        } while (var_s1 <= 0x49);
        Pes6Heap_Free(temp_s0);
        D_003EA8AC = NULL;
    }
}
