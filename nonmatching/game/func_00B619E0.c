/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00BF6280(void);
extern s32 func_00BF6260(void);
extern s32 func_00B94F50(void);
M2C_UNK func_009275C0(u8 *);                        /* extern */
M2C_UNK func_00928A50(u8 *, u8, u8 *);              /* extern */
M2C_UNK func_00984160(u8 *, f32, f32);              /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00B35E10(u8 **, u8 *, u8 *);           /* extern */
s32 func_00BDBB60(f32, f32);                        /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CB531C[];
extern char D_00CB5320[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];

void func_00B619E0(u8 **arg0) {
    s32 idx;
    s32 r;
    s32 var_v0;
    u8 *temp_a2;
    u8 *s0;
    u8 *s2;

    if ((func_009E1C90(1) & 0xFF) == 0xC && func_00BF6280() == 2) {
        r = func_00BF6260();
        if (r == 0xFF) {
            idx = 1;
        } else {
            idx = func_00BF6260() % 23;
        }
    } else {
        idx = *(u8 *)D_00CBCDE3;
        if (idx == 0xFF) {
            idx = 1;
        } else {
            idx = idx % 23;
        }
    }
    s0 = (u8 *)Pes6MatchPlayers + idx * 0x240;
    if ((func_009E1C90(1) & 0xFF) == 0xC) {
        var_v0 = func_00C01090(0x13) != 0;
    } else {
        idx = *(u8 *)D_00CBCDE2;
        if (idx == 0xFF) {
            idx = 1;
        } else {
            idx = idx % 23;
        }
        s2 = (u8 *)Pes6MatchPlayers + idx * 0x240;
        if (func_00B94F50() != 0) {
            var_v0 = 0;
        } else {
            var_v0 = (M2C_FIELD(s2, s16 *, 0x14) * func_00BDBB60(*(f32 *)D_00591E58, *(f32 *)D_00591E60)) < 0;
        }
    }
    if (var_v0 & 0xFF) {
        func_009275C0(*arg0);
    } else {
        temp_a2 = *arg0;
        if (*temp_a2 != s0[0]) {
            func_00928A50(temp_a2, s0[0x13], temp_a2);
            func_00984160(*arg0, *(f32 *)D_00CB531C, *(f32 *)D_00CB5320);
        } else {
            func_00B35E10(arg0, temp_a2 + 0x6C, temp_a2 + 0x70);
        }
    }
}
