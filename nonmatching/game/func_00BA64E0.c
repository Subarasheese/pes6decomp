/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_009832C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00BA65E0(M2C_UNK *, M2C_UNK);          /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E5FE[];
extern char D_0058E612[];
extern char D_0059237D[];

void func_00BA64E0(s32 arg0) {
    (*(s8 *)D_0058E5FE) = 0;
    (*(s8 *)D_0058E612) = 0;
    func_009832C0(((void *)Pes6MatchPlayers), 0x37);
    if ((*(u8 *)D_0059237D) == 0) {
        M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), u8 *, 0x2C) = 0U;
        func_00209A00(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), 0x1BF, 0);
    } else {
        M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), u8 *, 0x2C) = 1U;
        func_00BA65E0(((void *)Pes6MatchPlayers), 1);
        if (arg0 != 0) {
            M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0x1C) = 0;
            M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0xE0) = (f32) M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0x6C);
            M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x26) = (u16) M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x2C);
            M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0xE8) = (f32) M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0x70);
            M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0x98) = (s32) M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0x6C);
            M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0x9C) = (s32) M2C_FIELD(((void *)Pes6MatchPlayers), f32 *, 0x70);
            func_00209A00(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), 0x1BF, 0);
            M2C_FIELD(((void *)Pes6MatchPlayers), s8 *, 0x16) = 0xE0;
            M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x18) = 0x32;
        }
    }
    func_001A58E0(M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), void **, 0), (s8) M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), u8 *, 0x2C));
}
