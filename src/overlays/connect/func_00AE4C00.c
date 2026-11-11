/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00AE91C0(s32);                         /* extern */
M2C_UNK func_00AED800(s32);                         /* extern */
M2C_UNK func_00AEDE30(s32);                         /* extern */
M2C_UNK func_00AEE0B0(s32);                         /* extern */

void func_00AE4C00(void *arg0) {
    s32 temp_s0;
    s32 var_s3;
    void *temp_s2;
    void **var_s1;

    if (arg0 != NULL) {
        func_00AEE0B0(M2C_FIELD(arg0, s32 *, 0xC));
        func_00AE91C0(M2C_FIELD(arg0, s32 *, 8));
        temp_s0 = M2C_FIELD(arg0, s32 *, 4);
        var_s1 = M2C_FIELD(arg0, void ***, 0);
        var_s3 = 0;
        if (temp_s0 > 0) {
            do {
                temp_s2 = *var_s1;
                if (temp_s2 != NULL) {
                    func_00AED800(M2C_FIELD(temp_s2, s32 *, 0));
                    func_00AEDE30(M2C_FIELD(temp_s2, s32 *, 4));
                    Pes6Heap_Free(temp_s2);
                }
                var_s3 += 1;
                var_s1 += 1;
            } while (var_s3 < temp_s0);
        }
    }
    Pes6Heap_Free(M2C_FIELD(arg0, void ***, 0));
    Pes6Heap_Free(arg0);
}
