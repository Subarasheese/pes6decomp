/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_0027D440(void);
M2C_UNK func_00270630();                            /* extern */
M2C_UNK func_002BD8C0();                            /* extern */
M2C_UNK func_00855940();                            /* extern */
M2C_UNK func_009960C0();                            /* extern */
M2C_UNK func_0099F490();                            /* extern */
M2C_UNK func_009A7240();                            /* extern */
M2C_UNK func_009B13D0();                            /* extern */
s32 func_009B43B0();                                /* extern */
s32 func_009B43D0();                                /* extern */
M2C_UNK func_009B4410(s32);                         /* extern */
s32 func_009B4440();                                /* extern */
M2C_UNK func_009B4450(M2C_UNK);                     /* extern */
M2C_UNK func_009B4D70();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1DC0();                            /* extern */
M2C_UNK func_009E6140();                            /* extern */
M2C_UNK func_00B25BD0();                            /* extern */
M2C_UNK func_00B269E0();                            /* extern */
M2C_UNK func_00B28750();                            /* extern */
M2C_UNK func_00BC5EE0(M2C_UNK);                     /* extern */
M2C_UNK func_00BE9C30();                            /* extern */
M2C_UNK func_00BF9E80();                            /* extern */
M2C_UNK func_00BFE430();                            /* extern */
M2C_UNK func_00BFFA50();                            /* extern */
s32 func_00C35550();                                /* extern */
extern char D_00591C09[];
extern char D_00591DC4[];
extern char D_00591DC8[];
extern M2C_UNK (*D_005922F8)();

void func_00271080(void) {
    s32 temp_v1;
    s32 var_a0;

    if (func_00C35550() == 0) {
        func_00270630();
    }
    (*(s32 *)D_00591DC8) = (*(s32 *)D_00591DC4) & 3;
    if (func_002DCA30() == 0) {
        temp_v1 = func_009E1C90(1) & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 1:
            func_009E1DC0();
            break;
        case 8:
            func_00B28750();
            break;
        case 5:
            func_009E6140();
            break;
        case 14:
            func_00BE9C30();
            break;
        case 10:
            func_00BFFA50();
            break;
        case 11:
            func_00BFE430();
            break;
        case 13:
            func_00BF9E80();
            break;
        case 12:
            D_005922F8();
            break;
        }
    } else {
        func_00855940();
    }
    func_009960C0();
    func_009B13D0();
    func_002BD8C0();
    func_009A7240();
    func_0099F490();
    func_00B269E0();
    func_00B25BD0();
    func_0027D440();
    if ((func_009B4440() != 0) && ((*(u8 *)D_00591C09) != 0xA)) {
        func_00BC5EE0(0);
        func_009B4D70();
    }
    if ((func_009B4440() != 0) && (func_009B43B0() != 0)) {
        func_009B4450(0);
    }
    var_a0 = func_009B43D0() & 0xFF;
    if (var_a0 > 0) {
        if (var_a0 > 0) {
            var_a0 = (var_a0 - 1) & 0xFF;
        }
        func_009B4410(var_a0);
    }
}
