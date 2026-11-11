/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6Heap_Free(s32 *);                       /* extern */
s32 *Pes6Heap_Alloc(M2C_UNK, s32);                   /* extern */
s32 func_001BB730();                                /* extern */

s32 *func_001BA6F0(s32 arg0) {
    s32 *var_s4;
    s32 *temp_s3;
    s32 *temp_s2;
    s32 var_s1;
    s32 *var_s0;

    var_s4 = Pes6Heap_Alloc(1, 0x10);
    if (var_s4 != NULL) {
        temp_s3 = Pes6Heap_Alloc(1, arg0 * 4);
        temp_s2 = Pes6Heap_Alloc(1, arg0 * 2);
        if ((temp_s3 != NULL) && (temp_s2 != NULL)) {
            var_s1 = 0;
            if (arg0 > 0) {
                var_s0 = temp_s3;
                do {
                    *var_s0 = func_001BB730();
                    var_s1 += 1;
                    var_s0 += 1;
                } while (var_s1 < arg0);
            }
            M2C_FIELD(var_s4, s32 **, 4) = temp_s3;
            M2C_FIELD(var_s4, s32 **, 8) = temp_s2;
            M2C_FIELD(var_s4, s32 *, 0xC) = 0;
            M2C_FIELD(var_s4, s32 *, 0) = arg0;
        } else {
            Pes6Heap_Free(temp_s2);
            Pes6Heap_Free(temp_s3);
            Pes6Heap_Free(var_s4);
            var_s4 = NULL;
        }
    }
    return var_s4;
}
