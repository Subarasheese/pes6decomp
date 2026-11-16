/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, s32, s32);
extern char Pes6MatchPlayers[];
extern char D_00CCBE00[];
extern char D_00CCBE04[];
extern char D_00CCBE08[];
extern char D_00CCBE0C[];

s32 func_00C77020(u32 arg0) {
    u8 *ent;
    s32 *v;
    s32 idx;
    s32 val;

    if (arg0 < 0x17U) {
        *(u32 *)D_00CCBE00 = arg0;
        if (arg0 != 0xFF) {
            idx = (s32)arg0 % 23;
        } else {
            idx = 1;
        }
        ent = (u8 *)Pes6MatchPlayers + idx * 0x240;
        *(u8 **)D_00CCBE04 = ent;
        if (ent != NULL) {
            v = M2C_FIELD(ent, s32 **, 4);
        } else {
            v = NULL;
        }
        *(s32 **)D_00CCBE08 = v;
        if (v != NULL) {
            val = *v;
        } else {
            val = 0;
        }
        *(s32 *)D_00CCBE0C = val;
        return 1;
    }
    func_001C48E8(D_00CCBE00, 0, 0x10);
    *(s32 *)D_00CCBE00 = -1;
    *(u8 **)D_00CCBE04 = (u8 *)Pes6MatchPlayers;
    return 0;
}
