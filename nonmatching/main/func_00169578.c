/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001629D8(void *, int);
extern int func_00162880(void *);
extern int func_00162A38(void *);
extern signed char func_00161928(void *);
extern char D_00384CB4[];

void func_00169578(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;
    void ***var_s0;
    void **temp_a0;

    if ((M2C_FIELD(arg0, s8 *, 0x6C) == 0) && (func_00162880(M2C_FIELD(arg0, void **, 4)) >= M2C_FIELD(arg0, s32 *, 0xC4))) {
        func_001629D8(M2C_FIELD(arg0, void **, 4), -1);
    }
    if (func_00161928(M2C_FIELD(arg0, void **, 4)) != 3) {
        return;
    }
    var_s3 = 0;
    var_s0 = arg0 + 0x18;
    temp_v0 = func_00162A38(M2C_FIELD(arg0, void **, 4));
    (*(s32 *)D_00384CB4) = temp_v0;
loop_8:
    if (var_s3 < temp_v0) {
        temp_a0 = *var_s0;
        var_s0 += 4;
        temp_v0_2 = M2C_FIELD(*temp_a0, s32 (**)(void **, M2C_UNK), 0x24)(temp_a0, 1);
        *(s32 *)0x384CB8 = temp_v0_2;
        if (temp_v0_2 < 0x40) {
            var_s3 += 1;
            goto loop_8;
        }
    }
    if (var_s3 == temp_v0) {
        M2C_FIELD(arg0, s8 *, 1) = 4;
    }
}
