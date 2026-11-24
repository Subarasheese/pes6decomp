/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"
extern s32 func_00210DF0(void);
extern u8 func_00229600(s32 player);
extern u8 D_00591C09[];
extern void *func_002228B0(s32 player, s32 field, s32 source, s32 write);
extern void *func_00223C00(void);
s32 func_00221500(s32 player) {
    s32 id = (u16)player;
    void *field;
    if (id == 0)
        return 1;
    if (id < 0x12b0)
        return 0;
    if (id >= 0x8000 && id <= 0x80b7) {
        s32 slot = id - 0x8000;
        Pes6PlayerRecord *players = Pes6OptionData_GetEditedPlayers();
        return players[slot].name[0] == 0;
    }
    if (func_00210DF0() == 2 && (id >= 0x7000 && id <= 0x701f))
        return func_00229600(player) == 0xff;
    if (id >= 0x1770 && id <= 0x6fff)
        return D_00591C09[0] != 14;
    field = func_002228B0(player, 0, 3, 0);
    if (field == func_00223C00())
        return 1;
    return 0;
}
