/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001AF358(M2C_UNK *);                       /* extern */
extern char D_005BF670[];

void func_00163350(void *arg0) {
    s32 temp_hi;
    s32 var_s3;
    void *var_s1;

    var_s3 = 0;
    M2C_FIELD(arg0, s32 *, 0x920) = 1;
    var_s1 = M2C_FIELD(arg0, void **, 0x91C);
    if (M2C_FIELD(arg0, s32 *, 0x928) > 0) {
        do {
            var_s3 += 1;
            M2C_FIELD(var_s1, s16 *, 0) = (s16) (func_001AF358(((void *)D_005BF670)) % (s32) M2C_FIELD(arg0, s32 *, 0x5AC));
            temp_hi = func_001AF358(((void *)D_005BF670)) % (s32) M2C_FIELD(arg0, s32 *, 0x5B0);
            M2C_FIELD(var_s1, s8 *, 0xA) = 0;
            M2C_FIELD(var_s1, s8 *, 9) = 0;
            M2C_FIELD(var_s1, s8 *, 8) = 0;
            M2C_FIELD(var_s1, s16 *, 2) = (s16) temp_hi;
            var_s1 += 0x10;
        } while (var_s3 < M2C_FIELD(arg0, s32 *, 0x928));
    }
    M2C_FIELD(arg0, s32 *, 0x924) = 2;
}
