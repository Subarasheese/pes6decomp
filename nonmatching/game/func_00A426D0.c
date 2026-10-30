/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_00930240(void *);                      /* extern */
M2C_UNK func_00A9D7F0(void *);                      /* extern */
extern s32 Pes6Ball_Current;
extern char D_005926EC[];
extern char D_005926F4[];
extern char Pes6MatchSquads[];

s32 func_00A426D0(void *arg0) {
    u8 temp_a4;

    if ((M2C_FIELD((((*(u8 *)D_005926EC) * 4) + Pes6Ball_Current), s32 *, 0xFC) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x201U)) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        temp_a4 = M2C_FIELD(arg0, u8 *, 0x12);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s8) (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a4 * 0x6900))), u8 *, 0x68) & 1 & 1);
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x2D4, 0, ((void *)Pes6MatchSquads), temp_a4 * 0x69);
        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
        func_00930240(arg0);
        M2C_FIELD(arg0, s8 *, 0x4E) = 0;
        M2C_FIELD(arg0, s8 *, 0x4A) = 7;
        M2C_FIELD(arg0, s8 *, 0x66) = 0;
        M2C_FIELD(arg0, u8 *, 0x62) = (u8) (*(u8 *)D_005926F4);
        func_00A9D7F0(arg0);
        M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
        M2C_FIELD(arg0, s16 *, 0x18) = 1;
        return 1;
    }
    return 0;
}
