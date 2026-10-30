/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00284EA0(u8, u8);                      /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchState_Current[];
extern char D_005926DE[];
extern char D_005926F4[];

void func_00A9D7F0(void *arg0) {
    u8 temp_a1;

    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    temp_a1 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_a1 != 0x10) && (temp_a1 != 0xE) && (temp_a1 != 0xB)) {
        M2C_FIELD(arg0, s16 *, 0x1A) = 0xFF;
    }
    M2C_FIELD(arg0, s8 *, 0x51) = 0;
    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
        M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 0;
        func_00284EA0((*(u8 *)D_005926F4), temp_a1);
        M2C_FIELD(Pes6Ball_Current, u8 *, 0x65) = (u8) (*(u8 *)D_005926DE);
    }
}
