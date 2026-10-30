/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A9470(u8);
extern void func_002A96D0(void);
extern void func_002A8830(s32);
extern s32 func_002A6B20(void);
extern void func_002A9570(int);
extern u8 func_00BF6270(void);
M2C_UNK func_002A7D00(M2C_UNK, s32);                /* extern */
s32 func_009E1C90(M2C_UNK, M2C_UNK *, s32);         /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00592740[];

void func_00C95770(void) {
    s32 temp_a2;
    s32 var_a0;
    u16 temp_v1;
    void *temp_s0;

    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    temp_a2 = var_a0 * 0x240;
    temp_s0 = ((void *)Pes6MatchPlayers) + temp_a2;
    switch ((*(u8 *)D_00592740)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if ((func_009E1C90(3, ((void *)Pes6MatchPlayers), temp_a2) & 0xFF) >= 3) {
            func_002A96D0();
            func_002A9470(M2C_FIELD(temp_s0, u8 *, 0));
            temp_v1 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30);
            switch (temp_v1) {                      /* switch 2; irregular */
            case 0x59D:                             /* switch 2 */
                func_002A7D00(0xA, (func_00BBB8C0(3) + 0xE) & 0xFF);
                break;
            case 0x59C:                             /* switch 2 */
                func_002A7D00(0xA, (func_00BBB8C0(3) + 0xB) & 0xFF);
                break;
            case 0x59B:                             /* switch 2 */
                func_002A7D00(0xA, (func_00BBB8C0(3) + 8) & 0xFF);
                break;
            case 0x59A:                             /* switch 2 */
                func_002A7D00(0xA, (func_00BBB8C0(3) + 5) & 0xFF);
                break;
            }
            func_002A9570(0);
            func_002A8830(0);
            (*(u8 *)D_00592740) += 1;
        case 1:                                     /* switch 1 */
            func_002A6B20();
        }
        return;
    }
}
