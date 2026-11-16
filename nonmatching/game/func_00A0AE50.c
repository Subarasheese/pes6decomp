/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern M2C_UNK func_00A14EC0(void *, void *, u32);
extern M2C_UNK func_00A1DB30(void *);
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E19[];
extern char D_00591E4C[];

void func_00A0AE50(void *arg0, M2C_UNK arg1, u32 arg2) {
    u32 a2 = arg2;
    u16 st;
    u8 id;
    s32 doit;

    st = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    doit = 0;
    if (st == 0xB || st == 0xF) {
        doit = 1;
    } else if (*(u8 *)D_00591E4C != 0) {
        id = *(u8 *)D_00591E19;
        if (id == 0xFF) {
            doit = 1;
        } else if ((a2 = M2C_FIELD(arg0, u8 *, 0x13)) != M2C_FIELD(Pes6MatchPlayers + ((s32) id % 23) * 0x240, u8 *, 0x13)) {
            doit = 1;
        }
    }
    if (doit) {
        func_00A14EC0(arg0, arg0, a2);
        func_00A1DB30(arg0);
    }
}
