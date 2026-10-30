/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A540(void);
extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002E3A60(s32);                         /* extern */

void func_002E33D0(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    if (arg0 != NULL) {
        var_s2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x20) > 0) {
            var_s1 = 0;
            do {
                func_002E3A60(M2C_FIELD(arg0, void **, 0x24) + var_s1);
                var_s2 += 1;
                var_s1 += 0x14;
            } while (var_s2 < M2C_FIELD(arg0, s32 *, 0x20));
        }
        func_00153FA0(M2C_FIELD(arg0, void **, 0x24));
        func_001EDD90(M2C_FIELD(arg0, s32 *, 0));
        func_0020A540();
        func_00153FA0(arg0);
    }
}
