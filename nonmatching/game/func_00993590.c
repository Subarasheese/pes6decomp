/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00AFBAB0(u8);                              /* extern */
extern u8 *Pes6BallOwnerRecord;
extern char D_00591E1A[];
extern char D_00591E80[];

s32 func_00993590(char *arg0) {
    f32 temp_f2;
    f32 temp_f3;
    s16 temp_s1;
    u8 *rec;
    s32 i;
    s32 found;
    u8 temp_s0;
    u8 *e;

    temp_s1 = M2C_FIELD(arg0, s16 *, 0x14);
    temp_s0 = (*(u8 *)D_00591E1A);
    if (temp_s0 != (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF)) {
        return 0;
    }
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xE0);
    if ((temp_f3 * (f32) temp_s1) < -2048.0f) {
        return 0;
    }
    temp_f2 = (f32) M2C_FIELD(arg0, s16 *, 0x14);
    if (!((*(f32 *)(D_00591E80 + ((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 4)) * temp_f2) <= (temp_f3 * temp_f2))) {
        return 0;
    }
    found = 0;
    for (i = 0; i < 10; i++) {
        rec = Pes6BallOwnerRecord;
        temp_s0 = rec[i * 0x40 + 8];
        if (temp_s0 != 0) {
            if (temp_s0 == (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF)) {
                found = 1;
                e = rec + i * 0x40;
                if ((*(s32 *)(e + 4) == 1) && (e[0x25] == 0xF)) {
                    break;
                }
                return 0;
            }
        }
        if (temp_s0 != M2C_FIELD(arg0, u8 *, 0)) {
            return 0;
        }
    }
    return found != 0;
}
