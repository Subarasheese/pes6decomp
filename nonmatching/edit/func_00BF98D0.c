/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BC9430(f32 *, f32 *, f32 *);         /* extern */
extern char D_00CEB864[];
extern char D_00CEB868[];
extern char D_00CEB86C[];
extern char D_00CEB870[];

void func_00BF98D0(void *arg0, f32 *arg1, f32 *arg2) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 *var_a1;
    f32 *var_a2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    var_a1 = arg1;
    var_a2 = arg2;
    if (arg0 == NULL) {
        sp10 = (*(f32 *)D_00CEB864);
        sp14 = (*(f32 *)D_00CEB868);
        sp18 = (*(f32 *)D_00CEB86C);
        sp1C = (*(f32 *)D_00CEB870);
    } else {
        temp_f3 = M2C_FIELD(arg0, f32 *, 0);
        var_a2 = ((void *)D_00CEB864);
        var_a1 = ((void *)D_00CEB868);
        sp10 = temp_f3;
        temp_f2 = M2C_FIELD(arg0, f32 *, 4);
        sp14 = temp_f2;
        temp_f1 = M2C_FIELD(arg0, f32 *, 8);
        sp18 = temp_f1;
        temp_f0 = M2C_FIELD(arg0, f32 *, 0xC);
        (*(f32 *)D_00CEB864) = temp_f3;
        sp1C = temp_f0;
        (*(f32 *)D_00CEB868) = temp_f2;
        (*(f32 *)D_00CEB86C) = temp_f1;
        (*(f32 *)D_00CEB870) = temp_f0;
    }
    func_00BC9430(&sp10, var_a1, var_a2);
}
