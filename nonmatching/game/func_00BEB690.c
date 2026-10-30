/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_0027A880(int);
extern int func_002DCA30(void);
extern void func_00BBB960(u32);
extern u8 func_00BF6270(void);
M2C_UNK func_001AAF50(s32, M2C_UNK);                /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_00B25380(void *);                      /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00BEAB30(void *);                      /* extern */
extern char D_008B145C[];
extern char D_00CBD570[];

void func_00BEB690(void) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;
    f32 var_f0_2;
    void **temp_v0;
    void *temp_a0;
    void *temp_a0_2;

    if (func_002DCA30() != 0) {
        func_00BBB960((*(u32 *)D_008B145C));
    }
    temp_v0 = func_00B2A420(func_00BF6270());
    func_001AAF50(*M2C_FIELD(*temp_v0, s32 **, 4), 0);
    func_001AAF40(*M2C_FIELD(*temp_v0, void ***, 4), 1);
    func_00B27010(0);
    func_00B25380(*temp_v0);
    func_0027A880(0);
    temp_a0 = *temp_v0;
    var_f0 = 12185.0f;
    temp_f1 = M2C_FIELD(temp_a0, f32 *, 0xE0);
    if (temp_f1 <= 12185.0f) {
        var_f0 = -12185.0f;
        if (temp_f1 < -12185.0f) {
            goto block_4;
        }
    } else {
block_4:
        M2C_FIELD(temp_a0, f32 *, 0xE0) = var_f0;
    }
    temp_a0_2 = *temp_v0;
    var_f0_2 = 7449.0f;
    temp_f1_2 = M2C_FIELD(temp_a0_2, f32 *, 0xE8);
    if (temp_f1_2 <= 7449.0f) {
        var_f0_2 = -7449.0f;
        if (temp_f1_2 < -7449.0f) {
            goto block_7;
        }
    } else {
block_7:
        M2C_FIELD(temp_a0_2, f32 *, 0xE8) = var_f0_2;
    }
    if ((*(s32 *)D_00CBD570) != 0) {
        func_00BEAB30(temp_a0_2);
    }
    func_009E1CB0(3);
}
