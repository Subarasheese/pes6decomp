/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern void *Pes6Ball_Current;
extern char D_00591DC4[];
extern char Pes6MatchState_Current[];

void func_00851FE0(void *arg0, s32 arg1, s16 (*arg2)(f32)) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s32 *)D_00591DC4);
    M2C_FIELD(arg0, s16 *, 0xC) = arg2(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10));
    M2C_FIELD(arg0, s16 *, 0xE) = arg2(M2C_FIELD(Pes6Ball_Current, f32 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0x10) = arg2(M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    if ((arg1 == 0) && (M2C_FIELD(Pes6Ball_Current, u8 *, 0x63) == 4)) {
        M2C_FIELD(arg0, u8 *, 0x19) = 0xFFU;
    } else {
        M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x63);
        M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
        M2C_FIELD(arg0, u8 *, 0x1A) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        M2C_FIELD(arg0, u8 *, 0x1B) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x65);
        M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x66);
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x67);
        M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(Pes6Ball_Current, s32 *, 0x74);
        M2C_FIELD(arg0, s8 *, 0x18) = (s8) M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        M2C_FIELD(arg0, u8 *, 0x1E) = (u8) (*(u8 *)Pes6MatchState_Current);
    }
}
