/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
extern void func_002A96D0(void);
extern void func_001AC470(void);
extern void func_001ABA60(s32);
extern void func_0027B200(void *, s32, s32);
extern s32 func_00152130(s32, s32);
extern void func_001AC550(void *);
extern void func_001A58E0(void *, s32);
extern s32 Pes6File_AllChannelsIdle(void);
M2C_UNK func_001A7250(void *);
M2C_UNK func_001A9970(void *);
M2C_UNK func_001AB650(void *);
M2C_UNK func_001AB960(void *, s32);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_0027CB60(M2C_UNK);
M2C_UNK func_00284E60(void *, u16, s32, M2C_UNK);
M2C_UNK func_00AD0A20();
M2C_UNK func_00B27010(M2C_UNK);
s32 func_00BA9430(M2C_UNK);
M2C_UNK func_00BF6240(M2C_UNK);
extern void *Pes6Ball_Current;
extern u8 D_003EA75C;
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char Pes6MatchState_Current[];
extern char Pes6MatchSquads[];

void func_00B637B0(void) {
    s32 s1;
    s32 var_a0;
    void *a0;
    void *p4;
    u8 st;

    func_00AD0A20();
    if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x62) == 3) {
        if ((*(u8 *)Pes6MatchState_Current) != 0xFF) {
            var_a0 = (s32) (*(u8 *)Pes6MatchState_Current) % 23;
        } else {
            var_a0 = 1;
        }
        a0 = Pes6MatchPlayers + (var_a0 * 0x240);
        func_00284E60(a0, M2C_FIELD(a0, u16 *, 0x26), M2C_FIELD(a0, s32 *, 0x1C) + 8, 0);
        M2C_FIELD(Pes6Ball_Current, u8 *, 0x62) = 2U;
    }
    Pes6Ball_Update();
    if (func_00152130(1, ((0x3C / (s32) (*(u8 *)D_00591BE4)) * 0x10) & 0xFF) == 0) {
        return;
    }
    st = D_003EA75C;
    if (st == 4) {
        func_001AB650(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0));
        func_001AC550(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0));
        func_001AC470();
        M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), u8 *, 0x2C) = 1;
        func_001A58E0(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0), 1);
        func_00209A00(M2C_FIELD(Pes6MatchPlayers, void **, 4), 0, 0);
        M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), u8 *, 0x50) = 0;
        s1 = 0;
        do {
            if (M2C_FIELD(Pes6MatchSquads + M2C_FIELD(Pes6MatchPlayers, u8 *, 0x11) * 0x348 + M2C_FIELD(Pes6MatchPlayers, u8 *, 0x12) * 0x6900, u8 *, 0xF8) == 0) {
                func_00209A00(M2C_FIELD(Pes6MatchPlayers, void **, 4), 0, 0);
                M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), u8 *, 0x50) = 0;
            }
            s1 += 1;
        } while (s1 < 0x17);
        func_002A96D0();
        func_0027CB60(5);
        func_00B27010(0);
        func_00BF6240(1);
    } else if (st == 3) {
        if (Pes6File_AllChannelsIdle() != 0) {
            D_003EA75C = 4;
        }
    } else if (st == 2) {
        s1 = func_00BA9430(0);
        func_0027B200(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0), 5, 0);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0), void **, 0x10), void **, 0x18), s32 *, 0x38) = 1;
        M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), u8 *, 0x2C) = 0;
        func_001A58E0(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0), 0);
        func_001AB960(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0), s1);
        func_001ABA60((s32) M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0));
        func_001A7250(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0));
        func_001A9970(M2C_FIELD(M2C_FIELD(Pes6MatchPlayers, void **, 4), void **, 0));
        D_003EA75C = 3;
    }
}
