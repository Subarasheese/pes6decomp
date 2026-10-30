/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00186220(void);
extern void func_00182B30(int);
extern void func_00270580(int);
extern void func_002727C0(s32);
extern int func_002DCA30(void);
extern void func_0017E120(int);
M2C_UNK func_00287000();                            /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00988E10(M2C_UNK);                     /* extern */
M2C_UNK func_00996060();                            /* extern */
M2C_UNK func_009983C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0099B4F0();                            /* extern */
M2C_UNK func_0099C790();                            /* extern */
M2C_UNK func_0099FE40();                            /* extern */
M2C_UNK func_009B6C00();                            /* extern */
M2C_UNK func_009F1A40();                            /* extern */
M2C_UNK func_00B26F50();                            /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
M2C_UNK func_00BC6930(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_00BC9000(M2C_UNK);                     /* extern */
M2C_UNK func_00C04780();                            /* extern */
M2C_UNK func_00C23C70();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591DCF[];
extern char D_00591E79[];
extern char D_00591EFC[];
extern char D_00591F14[];

void func_009F27C0(void) {
    s32 var_a4;
    s32 var_v1;
    void *temp_v1;

    func_0017E120(1);
    func_009F1A40();
    func_0099FE40();
    func_00287000();
    func_00988E10(2);
    func_00988E10(0xD);
    func_009B6C00();
    func_00BC9000(0);
    (*(s8 *)D_00591EFC) = 0;
    func_00270580(0);
    (*(s8 *)D_00591F14) = 0;
    (*(s8 *)D_00591E79) = 0xFF;
    (*(s8 *)D_00591DCF) = 1;
    func_00186220();
    func_00182B30(1);
    func_0099B4F0();
    func_009983C0(((void *)Pes6MatchPlayers), 3);
    func_0099C790();
    func_002727C0(1);
    func_00B27010(1);
    func_00B26F50();
    var_a4 = 0;
    do {
        if (var_a4 == 0xFF) {
            var_v1 = 1;
        } else {
            var_v1 = var_a4 % 23;
        }
        var_a4 += 1;
        temp_v1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
        M2C_FIELD(temp_v1, s32 *, 0x214) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x21F) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x218) = 0;
    } while (var_a4 < 0x17);
    func_00BC6930(((void *)Pes6MatchPlayers), 1, 0x17, 0xFF, var_a4);
    func_00996060();
    func_00C04780();
    func_00C23C70();
    if (func_002DCA30() != 0) {
        func_00853B50(1, 0xD, 2, 0, *func_008472D0(), 0, 0, 0);
    }
}
