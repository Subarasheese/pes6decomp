/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001B77F0(s32);                         /* extern */
M2C_UNK func_001B7A90();                            /* extern */
M2C_UNK func_001B8DC0();                            /* extern */
M2C_UNK func_001B8EA0(M2C_UNK *);                   /* extern */
M2C_UNK func_002E9170(M2C_UNK, M2C_UNK);            /* extern */
s32 func_002E9190(s32);                             /* extern */
s32 func_002E9310();                                /* extern */
M2C_UNK func_00627A70();                            /* extern */
M2C_UNK func_006293C0(M2C_UNK);                     /* extern */
M2C_UNK func_0063A5B0();                            /* extern */
M2C_UNK func_0063A600();                            /* extern */
s32 func_0063A820();                                /* extern */
M2C_UNK func_00654BB0();                            /* extern */
M2C_UNK func_00656CB0();                            /* extern */
M2C_UNK func_00C88F90(s32);                         /* extern */
extern s32 D_003E9DF8;
extern s32 D_003E9E24;
extern u8 D_003E9E30;
extern s32 D_003EA260;
extern s32 D_003EA264;
extern char D_0065C170[];
extern char D_0065D830[];
extern char D_0065D83F[];
extern char D_0065EF50[];
extern char D_0065EF60[];
extern char D_0065EF68[];
extern char D_0065EF70[];
extern char D_0065EF78[];
extern char D_0065EF88[];
extern char D_0065EF90[];

void func_00656310(void) {
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;

    if (D_003E9DF8 == 0x16) {
        func_00C88F90((*(s32 *)D_0065EF60));
    }
    temp_s0 = func_002E9310() != 1;
    if (func_002E9190(temp_s0) != 0) {
        if (func_002E9190(temp_s0) == 1) {
            func_006293C0(0);
        }
    } else if ((*(s8 *)D_0065D83F) == 0) {
        func_006293C0(0);
    } else {
        func_001B8DC0();
        func_001B8EA0(((void *)D_0065D830));
    }
    func_002E9170(0, 0);
    if (D_003EA264 == 1) {
        func_001B77F0(D_003EA260);
    }
    if (D_003E9E30 != 1) {
        func_001B7A90();
    }
    D_003E9E30 = 0;
    func_0063A5B0();
    func_0063A600();
    func_00627A70();
    if ((func_0063A820() == 1) && (D_003E9E24 == 1)) {
        func_00656CB0();
    }
    if ((*(s32 *)D_0065EF68) != 0) {
        if ((*(s32 *)D_0065EF68) != 0) {
            func_00153FA0((*(s32 *)D_0065EF68));
        }
        (*(s32 *)D_0065EF68) = 0;
        (*(s32 *)D_0065EF88) = 0;
        (*(s32 *)D_0065EF70) = 0;
        (*(s32 *)D_0065EF78) = 0;
    }
    if ((*(s32 *)D_0065C170) != 0) {
        func_00153FA0((*(s32 *)D_0065C170));
    }
    if ((*(s32 *)D_0065EF90) != 0) {
        func_00153FA0((*(s32 *)D_0065EF90));
    }
    (*(s32 *)D_0065C170) = 0;
    (*(s32 *)D_0065EF90) = 0;
    if (func_0063A820() == 1) {
        var_s3 = 0;
        var_s1 = ((void *)D_0065EF50);
        do {
            var_s2 = 0;
            var_s0 = var_s1;
loop_28:
            func_00153FA0(*var_s0);
            var_s2 += 1;
            *var_s0 = 0;
            var_s0 += 4;
            if (var_s2 < 2) {
                goto loop_28;
            }
            var_s3 += 1;
            var_s1 += 8;
        } while (var_s3 < 2);
    }
    func_00654BB0();
}
