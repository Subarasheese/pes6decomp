/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F5B30(void *);
extern void func_002F3AE0(void *, void *);
extern s32 func_00263130(void);
extern int func_00262340(void);
extern s32 D_003EB340;
extern char D_00CFC8B0[];
extern char D_00CFC900[];
extern char D_00CFE950[];

void func_00CF5640(void *arg0, void *arg1) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_v0;
    s32 temp_v1;
    u32 var_a4;
    u32 var_a5;

    if (func_00263130() != 0) {
        temp_v0 = func_00262340();
        var_a5 = 0;
        var_a3 = ((void *)D_00CFE950);
loop_2:
        if (temp_v0 == *var_a3) {
            var_a4 = 0;
            var_a2 = var_a3;
loop_9:
            if ((var_a4 >= 9U) || (temp_v1 = M2C_FIELD(var_a2, s32 *, 4), (temp_v1 == 9))) {
                goto block_11;
            }
            if (D_003EB340 != temp_v1) {
                var_a2 += 4;
                var_a4 += 1;
                goto loop_9;
            }
            func_002F3AE0(arg0, ((void *)D_00CFC900));
            func_002F5B30(arg1);
            return;
        }
block_11:
        var_a5 += 1;
        var_a3 += 0x28;
        if (var_a5 >= 0xBU) {
            func_002F3AE0(arg0, ((void *)D_00CFC8B0));
            func_002F5B30(arg1);
        } else {
            goto loop_2;
        }
    }
}
