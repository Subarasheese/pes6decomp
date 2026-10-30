/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00278C20(int);
extern void func_001AAF40(void *, signed char);
extern int func_0027B5C0(int);
extern s32 func_00208250(s32);
extern void func_0017E120(int);
extern void func_001A5F50(s32, s32);
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
M2C_UNK func_00278B80(M2C_UNK, u8, M2C_UNK);        /* extern */
M2C_UNK func_0027C230(s32, M2C_UNK);                /* extern */
M2C_UNK func_00915000(M2C_UNK);                     /* extern */
M2C_UNK func_00996060();                            /* extern */
M2C_UNK func_00B25C50(M2C_UNK);                     /* extern */
M2C_UNK func_00BA9280();                            /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
M2C_UNK func_00C36410();                            /* extern */
M2C_UNK func_00C36530();                            /* extern */
M2C_UNK func_00C379F0();                            /* extern */
s32 func_00C390E0();                                /* extern */
s32 func_00C39160(M2C_UNK, u8);                     /* extern */
M2C_UNK func_00C39630();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591DB4[];
extern char D_00591E14[];
extern char D_00CCB650[];
extern char D_00CCB658[];

void func_00C36230(void) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;

    func_00C36530();
    func_00C379F0();
    (*(s32 *)D_00591E14) = 0;
    (*(s8 *)D_00591DB4) = 0;
    func_00B25C50(0);
    func_00BA9280();
    var_s0 = 0;
    do {
        if (var_s0 != 0xFF) {
            var_a0 = var_s0 % 23;
        } else {
            var_a0 = 1;
        }
        func_001AAF40(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void ***, 4), 0);
        var_s0 += 1;
    } while (var_s0 < 0x17);
    func_00996060();
    func_00915000(0x37);
    func_0017E120(1);
    func_00278C20(1);
    func_00278B80(8, (*(u8 *)D_00591BE4), 0x3F19999A);
    func_00C36410();
    func_00C39630();
    if (func_00C01090(0x2A) == 0) {
        var_s1 = 0;
        var_s0_2 = 0;
        switch ((*(u8 *)D_00CCB658)) {                       /* irregular */
        case 1:
        case 0:
            var_s1 = 0xB7;
            break;
        case 4:
        case 3:
        case 2:
            var_s1 = func_00C39160(4, (*(u8 *)D_00CCB658));
            var_s0_2 = func_00C390E0();
            break;
        }
        if (var_s1 != 0) {
            func_001A5F50(5, func_00208250(var_s1));
            func_001A5E00(5);
        }
        if (var_s0_2 != 0) {
            func_0027C230(func_0027B5C0(var_s0_2), 5);
        }
        (*(s32 *)D_00CCB650) = var_s1;
    }
}
