/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00144450(void);
extern void func_00144460(void);
extern s32 func_00142090(void *);
extern u8 func_00142030(s32, s32);
s32 func_00143550(s32);                             /* extern */
s32 func_001435B0(void *, void *, s32, s32);        /* extern */
s32 func_00144100(M2C_UNK);                         /* extern */
M2C_UNK func_00144200();                            /* extern */
M2C_UNK func_001443D0();                            /* extern */
M2C_UNK func_00144880(s32);                         /* extern */
extern s32 D_003E9810;
extern s32 D_003E9814;
extern s32 D_003E9818;
extern s32 D_003E981C;
extern void *D_003E9820;
extern char D_004FDFBC[];

void func_00143410(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s1;
    s32 var_s4;
    void *var_s0;

    D_003E981C = arg2;
    D_003E9818 = 1;
    var_s1 = M2C_FIELD(arg0, s32 *, 0x20);
    var_s0 = arg0 + M2C_FIELD(arg0, s32 *, 0x24);
    D_003E9810 = -1;
    D_003E9814 = 0;
    D_003E9820 = arg0 + M2C_FIELD(arg0, s32 *, 0x3C);
    func_00144460();
    func_00144450();
    if (D_003E9818 == 0) {
        if ((*(u8 *)D_004FDFBC) != 0) {
            func_001443D0();
        } else {
            func_00144200();
        }
    }
    var_s4 = func_00144100(0x70000000);
    if (var_s1 != 0) {
        do {
            if (func_00142030(arg1, (s32) M2C_FIELD(var_s0, u8 *, 0x43)) != 0) {
                if (func_00142090(var_s0) == 0) {
                    var_s4 = func_001435B0(arg0, var_s0, var_s4, arg1);
                }
            }
            var_s1 -= 1;
            var_s0 += M2C_FIELD(var_s0, s32 *, 0);
        } while (var_s1 != 0);
    }
    func_00144880(func_00143550(var_s4));
}
