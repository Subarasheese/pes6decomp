/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EA710;
extern char D_00591DD6[];

void func_009A69A0(void) {
    s32 temp_s1;
    void *temp_a0;
    void *temp_s0;

    temp_s0 = D_003EA710;
    temp_s1 = M2C_FIELD(temp_s0, s32 *, 0);
    func_00153FA0(M2C_FIELD(temp_s0, void **, 8));
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    if ((temp_s1 == 2) || (temp_s1 == 1)) {
        func_00153FA0(M2C_FIELD(temp_s0, void **, 0x2C));
    }
    M2C_FIELD(temp_s0, void **, 0x2C) = NULL;
    temp_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (temp_a0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0) != 1) {

        } else {
            func_00153FA0(temp_a0);
            M2C_FIELD(temp_s0, void **, 4) = NULL;
        }
    }
    func_00153FA0(temp_s0);
    D_003EA710 = NULL;
    (*(s8 *)D_00591DD6) = 0;
}
