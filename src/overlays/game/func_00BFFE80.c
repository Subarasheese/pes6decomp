/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00855290(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 Pes6MatchFlow_GetState(M2C_UNK);                         /* extern */
M2C_UNK Pes6MatchFlow_SetState(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C019F0();                            /* extern */
extern char D_00592702[];
extern char D_00CBCC6A[];

void func_00BFFE80(void) {
    func_00C019F0();
    (*(s8 *)D_00592702) = 0;
    (*(s8 *)D_00CBCC6A) = 0;
    Pes6MatchFlow_SetState(1, 0xB);
    if (func_002DCA30() != 0) {
        func_00855290(1, Pes6MatchFlow_GetState(1) & 0xFF, 0);
    }
}
