/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern u8 func_00BF6260(void);
extern u8 func_00B94F50(void);
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
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_a2;
    void *temp_s0;

    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        goto block_1;
    }
    if (func_00BF6280() == 2) {
        if (func_00BF6260() == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = func_00BF6260() % 23;
        }
        var_v1 = var_a0 * 0x240;
    } else {
block_1:
        if ((*(u8 *)D_00CBCDE3) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) (*(u8 *)D_00CBCDE3) % 23;
        }
        var_v1 = var_a0_2 * 0x240;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + var_v1;
    if ((func_009E1C90(1) & 0xFF) == 0xC) {
        if (func_00C01090(0x13) != 0) {
            var_v0 = 1;
        } else {
            goto block_32;
        }
    } else {
        if ((*(u8 *)D_00CBCDE2) == 0xFF) {
            var_a0_3 = 1;
        } else {
            var_a0_3 = (s32) (*(u8 *)D_00CBCDE2) % 23;
        }
        if (func_00B94F50() != 0) {
            goto block_14;
        }
        if ((M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240)), s16 *, 0x14) * func_00BDBB60((*(f32 *)D_00591E58), (*(f32 *)D_00591E60))) < 0) {
            var_v0 = 1;
        } else {
block_32:
block_14:
            var_v0 = 0;
        }
    }
    if (var_v0 & 0xFF) {
        func_009275C0(*arg0);
    } else {
        temp_a2 = *arg0;
        if (*temp_a2 != M2C_FIELD(temp_s0, u8 *, 0)) {
            func_00928A50(temp_a2, M2C_FIELD(temp_s0, u8 *, 0x13), temp_a2);
            func_00984160(*arg0, (*(f32 *)D_00CB531C), (*(f32 *)D_00CB5320));
        } else {
            func_00B35E10(arg0, temp_a2 + 0x6C, temp_a2 + 0x70);
        }
    }
}
