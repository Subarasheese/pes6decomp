/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00284EA0(u8, u8, M2C_UNK, s32, s32, u8); /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchState_Current[];
extern char D_005926DE[];
extern char D_005926F4[];

void func_00A9D570(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 var_a3;
    s32 var_a4;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a5;

    var_a3 = arg3;
    var_a4 = arg4;
    temp_a5 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_a5) {                              /* irregular */
    default:
        var_a4 = 0xE;
        if (temp_a5 != 0xE) {
            var_a3 = 0xB;
            if ((temp_a5 != 0xB) && (temp_a5 != 0x1B) && (temp_a5 != 0x17) && (temp_a5 != 0x16) && (temp_a5 != 0x43) && (temp_a5 != 0xF)) {
                M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                M2C_FIELD(arg0, u16 *, 0x1A) = 0xFFU;
                M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                temp_a1 = M2C_FIELD(arg0, u8 *, 0x16);
                if ((temp_a1 != 0x10) && (temp_a1 != 0xE) && (temp_a1 != 0xB)) {
                    M2C_FIELD(arg0, u16 *, 0x1A) = 0xFFU;
                }
                M2C_FIELD(arg0, s8 *, 0x51) = 0;
                if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                    M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 0;
                    func_00284EA0((*(u8 *)D_005926F4), temp_a1, 0xFF, 0xB, 0xE, temp_a5);
                    M2C_FIELD(Pes6Ball_Current, u8 *, 0x65) = (u8) (*(u8 *)D_005926DE);
                }
                return;
            }
        }
    case 0x19:
    case 0x13:
    case 0x1:
    case 0x2:
        if (M2C_FIELD(arg0, u16 *, 0x1A) == 0xFF) {
            M2C_FIELD(arg0, s8 *, 0x4D) = 0;
            temp_a1_2 = M2C_FIELD(arg0, u8 *, 0x16);
            if ((temp_a1_2 != 0x10) && (temp_a1_2 != 0xE) && (temp_a1_2 != 0xB)) {
                M2C_FIELD(arg0, u16 *, 0x1A) = 0xFFU;
            }
            M2C_FIELD(arg0, s8 *, 0x51) = 0;
            if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 0;
                func_00284EA0((*(u8 *)D_005926F4), temp_a1_2, 0xFF, var_a3, var_a4, temp_a5);
                M2C_FIELD(Pes6Ball_Current, u8 *, 0x65) = (u8) (*(u8 *)D_005926DE);
                return;
            }
        } else {
            return;
        }
        break;
    case 0x2A:
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        if (!(((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0)) <= 4096.0f)) {
            M2C_FIELD(arg0, u16 *, 0x1A) = 9U;
        } else {
            M2C_FIELD(arg0, u16 *, 0x1A) = 0xAU;
        }
        return;
    case 0x41:
    case 0xA:
    case 0x9:
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        /* fallthrough */
    case 0x4:
    case 0x8:
    case 0x6:
    case 0x5:
        M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u8 *, 0x16);
        return;
    }
}
