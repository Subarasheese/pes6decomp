/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
char *Pes6Heap_Alloc(s32, s32);
char *func_00154070(s32);
s32 func_001BB400(char *, char *);

char *Pes6Process_Create(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *var_s1;
    char *var_v0;

    var_s1 = func_00154070(0x28);
    if (arg3 == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = Pes6Heap_Alloc(1, arg3);
    }
    if ((var_s1 != NULL) && ((arg3 == 0) || ((arg3 != 0) && (var_v0 != NULL)))) {
        M2C_FIELD(var_s1, s16 *, 2) = 0;
        M2C_FIELD(var_s1, s16 *, 0) = 0;
        M2C_FIELD(var_s1, s32 *, 4) = arg0;
        M2C_FIELD(var_s1, s32 *, 8) = arg1;
        M2C_FIELD(var_s1, s32 *, 0xC) = arg2;
        M2C_FIELD(var_s1, char **, 0x10) = var_v0;
        M2C_FIELD(var_s1, s32 *, 0x14) = arg4;
        func_001BB400(var_s1 + 0x18, var_s1);
    } else {
        if (var_s1 != NULL) {
            Pes6Heap_Free(var_s1);
        }
        if ((arg3 != 0) && (var_v0 != NULL)) {
            Pes6Heap_Free(var_v0);
        }
        var_s1 = NULL;
    }
    return var_s1;
}
