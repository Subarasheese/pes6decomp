/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0011E4A8();                            /* extern */
M2C_UNK func_001200C0();                            /* extern */
M2C_UNK func_00122360(s32, s32);                    /* extern */
M2C_UNK func_00125DA8();                            /* extern */
M2C_UNK func_00129C60();                            /* extern */
M2C_UNK func_00131450();                            /* extern */
s32 func_00134F58(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00135098();                            /* extern */
M2C_UNK func_00135B58(s32, s32);                    /* extern */
M2C_UNK func_00153F68();                            /* extern */
M2C_UNK func_00153F78(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00153FD0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00154178();                            /* extern */
M2C_UNK func_001543F8();                            /* extern */
M2C_UNK func_001584C0();                            /* extern */
M2C_UNK func_0015D4B0(M2C_UNK, s32);                /* extern */
M2C_UNK func_0016B450();                            /* extern */
M2C_UNK func_0018C760(s32, M2C_UNK);                /* extern */
M2C_UNK func_0018CBA8(M2C_UNK);                     /* extern */
s32 func_001972D8(s32 *, void *);                   /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005B3734[];
extern char D_005BB9F8[];
extern char D_005FAF30[];
extern char D_005FAF40[];
extern char D_005FAF60[];
extern char D_005FAF70[];
extern char D_005FAF80[];
extern char D_005FAF90[];
extern char D_005FAFA0[];
extern char D_005FAFB0[];
extern char D_005FAFC0[];
extern char D_011D7460[];
extern char D_011D7468[];

void func_001353F0(void) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    void *temp_a1_3;
    void *temp_s0;

    if (M2C_FIELD(((void *)D_005BB9F8), s32 *, 0x540) == 1) {
        func_0018CBA8(4);
    } else {
        func_0018CBA8(2);
    }
    temp_s0 = ((void *)D_005BB9F8) - 0x4608;
    func_0018C760(func_00134F58(0x10, 0x88000), 0x88000);
    func_0016B450();
    func_00135B58(M2C_FIELD(temp_s0, s32 *, 0x590), M2C_FIELD(((void *)D_011D7468), s32 *, 0) & 8);
    func_0015D4B0(0, M2C_FIELD(temp_s0, s32 *, 0x58C));
    func_00154178();
    func_00125DA8();
    func_001543F8();
    func_0011E4A8();
    func_001200C0();
    func_00153F68();
    temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x5DC);
    if (temp_a1 != 0) {
        func_00153F78(((void *)D_005FAF30), temp_a1);
    }
    temp_a1_2 = M2C_FIELD(temp_s0, s32 *, 0x5E0);
    if (temp_a1_2 != 0) {
        func_00153F78(((void *)D_005FAF40), temp_a1_2);
    }
    func_00153FD0((M2C_UNK *)0x5FAF50, M2C_FIELD(temp_s0, s32 *, 0x5E4));
    var_s1 = 0x3B;
    func_00153FD0(((void *)D_005FAF60), M2C_FIELD(temp_s0, s32 *, 0x5E8));
    func_00153FD0(((void *)D_005FAF70), M2C_FIELD(temp_s0, s32 *, 0x5EC));
    func_00153FD0(((void *)D_005FAF80), M2C_FIELD(temp_s0, s32 *, 0x5F0));
    func_00153FD0(((void *)D_005FAF90), M2C_FIELD(temp_s0, s32 *, 0x5F4));
    func_00153FD0(((void *)D_005FAFA0), M2C_FIELD(temp_s0, s32 *, 0x5F8));
    func_00153FD0(((void *)D_005FAFB0), M2C_FIELD(temp_s0, s32 *, 0x5FC));
    func_00153FD0(((void *)D_005FAFC0), M2C_FIELD(temp_s0, s32 *, 0x600));
    func_00131450();
    func_00135098();
    var_a0 = M2C_FIELD(((void *)D_011D7460), s32 *, 0);
    do {
        var_s1 -= 1;
        func_0019B160(var_a0);
        func_001584C0();
        func_0019B140(*(s32 *)0x011D7464);
        var_a0 = M2C_FIELD(((void *)D_011D7460), s32 *, 0x7460);
    } while (var_s1 >= 0);
    temp_a1_3 = ((void *)D_005BB9F8) - 0x4608;
    temp_s0_2 = M2C_FIELD(temp_a1_3, s32 *, 0x59C);
    (*(s32 *)D_005B3734) = ((s32) M2C_FIELD(((void *)D_011D7468), s32 *, 0x7468) >> 5) & 1;
    if (M2C_FIELD(((void *)D_011D7468), s32 *, 0x7468) & 0x400) {
        var_v0 = func_001972D8(((void *)D_005B3734), temp_a1_3);
    } else {
        var_v0 = M2C_FIELD(temp_a1_3, s32 *, 0x598);
    }
    func_00122360(var_v0, temp_s0_2);
    func_00129C60();
}
