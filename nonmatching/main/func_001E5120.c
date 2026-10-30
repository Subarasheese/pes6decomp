/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DD520(s32);
extern void func_001DCD40(void);
extern void func_001DCCF0(void *);
M2C_UNK func_001E51E0(void *, s32, u8);             /* extern */
extern char D_0052ADF0[];
extern char D_0052ADF4[];
extern char D_0052ADFC[];
extern char D_0052AE0B[];

void func_001E5120(void *arg0) {
    s32 var_s0;
    s32 var_s1;
    void *var_s3;

    var_s1 = M2C_FIELD(arg0, s32 *, 0);
    var_s0 = M2C_FIELD(arg0, s32 *, 0x10);
    func_001DCD40();
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    var_s3 = M2C_FIELD(arg0, void **, 0x18);
loop_1:
    func_001DCCF0(var_s3);
    var_s3 += (*(u8 *)D_0052ADFC);
    if ((*(s32 *)D_0052ADF0) != 0) {
        func_001E51E0(arg0, var_s1, (u8) var_s0);
        goto loop_1;
    }
    if ((*(s32 *)D_0052ADF4) != 0) {
        if ((*(s32 *)D_0052ADF4) == 4) {
            var_s0 = (s32) (*(u8 *)D_0052AE0B);
            var_s1 = func_001DD520(var_s0);
        }
        goto loop_1;
    }
}
