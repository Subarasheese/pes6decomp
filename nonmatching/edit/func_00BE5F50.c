/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BC4C80(s32, s32);                        /* extern */
s32 func_00BC6100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BE6F70(M2C_UNK);                     /* extern */
M2C_UNK func_00BE6FA0(M2C_UNK);                     /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
M2C_UNK func_00BF7270(u16);                         /* extern */
M2C_UNK func_00BF7380(M2C_UNK *);                   /* extern */
M2C_UNK func_00BF7460(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00BF77A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00BF7890();                            /* extern */
M2C_UNK func_00BF7A60();                            /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
M2C_UNK func_00C1B4B0(M2C_UNK);                     /* extern */
extern char D_00CE5BEA[];
extern M2C_UNK func_00BE5E30;
extern M2C_UNK func_00BE5E80;

void func_00BE5F50(void *arg0) {
    s32 temp_s2;
    s32 var_s1;
    s32 var_s1_2;
    u16 temp_s1;
    u16 var_a0;

    func_00BF7890();
    func_00BF7A60();
    func_00BF7460(1, 0, 1, 0, 0);
    var_s1 = 0x40;
    do {
        if (func_00BC6100(var_s1, 0) >= 0x20) {
            func_00BF77A0(var_s1, 1);
        }
        var_s1 = (var_s1 + 1) & 0xFFFF;
    } while (var_s1 < 0xCC);
    temp_s2 = func_00BF4480(0) & 0xFFFF;
    var_s1_2 = 0x40;
loop_5:
    if ((func_00BC4C80(temp_s2, var_s1_2) & 0xFF) == 0xFF) {
        var_s1_2 = (var_s1_2 + 1) & 0xFFFF;
        if (var_s1_2 >= 0xCC) {
            var_a0 = 0xFFFF & 0xFFFF;
        } else {
            goto loop_5;
        }
    } else {
        var_a0 = var_s1_2 & 0xFFFF;
    }
    if ((var_a0 & 0xFFFF) != 0xFFFF) {
        M2C_FIELD(arg0, u16 *, 0xA) = var_a0;
    } else {
        M2C_FIELD(arg0, u16 *, 0xA) = 0x40U;
    }
    func_00BF7270(M2C_FIELD(arg0, u16 *, 0xA));
    func_00BF7380(&func_00BE5E30);
    func_00BE6FA0(2);
    func_00B91590(0x1E, 1);
    temp_s1 = M2C_FIELD(arg0, u16 *, 0xA);
    (*(u16 *)D_00CE5BEA) = temp_s1;
    func_00C1B440(0, temp_s1);
    func_00C1B440(1, temp_s1);
    func_00B91590(0x1E, 1);
    func_001B66C0(0xED0015);
    func_00BC3FB0(3);
    func_00BE6F70(0);
    func_00C1B4B0(0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00BE5E80;
}
