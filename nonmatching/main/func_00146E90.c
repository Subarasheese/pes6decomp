/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00376800[];
extern char D_00376808[];
extern char D_00376810[];
extern char D_00376818[];
extern char D_00376820[];
extern char D_00376828[];
extern char D_00376830[];
extern char D_00376838[];
extern char D_00376840[];
extern char D_00376848[];
extern char D_00376850[];
extern char D_00376858[];

void *func_00146E90(void *arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, s64 arg_sp0, s64 arg_sp8) {
    s64 temp_a6;
    s64 var_a4;
    s64 var_a5;
    s64 var_t2;
    void *var_v1;

    var_a4 = arg4;
    var_a5 = arg5;
    M2C_FIELD(arg0, s64 *, 0) = (s64) (*(s64 *)D_00376800);
    M2C_FIELD(arg0, s64 *, 8) = (s64) (*(s64 *)D_00376808);
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (*(s64 *)D_00376810);
    M2C_FIELD(arg0, s64 *, 0x18) = (s64) (*(s64 *)D_00376818);
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (*(s64 *)D_00376820);
    M2C_FIELD(arg0, s64 *, 0x28) = (s64) (*(s64 *)D_00376828);
    var_v1 = arg0 + 0x60;
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) (*(s64 *)D_00376830);
    M2C_FIELD(arg0, s64 *, 0x38) = (s64) (*(s64 *)D_00376838);
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) (*(s64 *)D_00376840);
    M2C_FIELD(arg0, s64 *, 0x48) = (s64) (*(s64 *)D_00376848);
    M2C_FIELD(arg0, s64 *, 0x50) = (s64) (*(s64 *)D_00376850);
    M2C_FIELD(arg0, s64 *, 0x58) = (s64) (*(s64 *)D_00376858);
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) ((arg2 << 0x38) | ((arg1 << 0x20) | (arg3 << 0x30)));
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) ((arg6 << 0x20) | (arg7 << 0x30));
    M2C_FIELD(arg0, s64 *, 0x40) = (s64) (arg_sp0 | (arg_sp8 << 0x20));
loop_1:
    if (var_a5 < 0x8000) {
        var_t2 = (s64) (var_a5 << 0x20) >> 0x20;
    } else {
        var_t2 = 0x4000;
    }
    temp_a6 = (s64) (var_t2 << 0x20) >> 0x20;
    var_a5 -= temp_a6;
    M2C_FIELD(var_v1, s64 *, 0) = (s64) (temp_a6 | (0x08000000 << 0x20));
    M2C_FIELD(var_v1, s64 *, 8) = 0;
    M2C_FIELD(var_v1, s64 *, 0x10) = (s64) (((s64) ((var_t2 | 0x30000000) << 0x20) >> 0x20) | (((s64) (var_a4 << 0x20) >> 0x20) << 0x20));
    M2C_FIELD(var_v1, s64 *, 0x18) = (s64) (((u64) ((var_t2 | 0x50000000) << 0x20) >> 0x20) << 0x20);
    if (var_a5 > 0) {
        M2C_FIELD(var_v1, s64 *, 0x20) = 0x10000001;
        M2C_FIELD(var_v1, s64 *, 0x28) = (s64) (0x50000001 << 0x20);
        var_a4 += var_t2 * 0x10;
        var_v1 += 0x30;
        goto loop_1;
    }
    return var_v1 + 0x20;
}
