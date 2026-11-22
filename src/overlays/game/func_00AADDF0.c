/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00930240(char *);

extern char D_00591E67[];
extern char D_00592260[];
extern char D_0059226E[];

void func_00AADDF0(char *arg0) {
    *(((char *)D_00591E67) + M2C_FIELD(arg0, u8 *, 0x12)) = 0;
    M2C_FIELD(arg0, s8 *, 0x66) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*(s32 *)D_00592260);
    func_00930240(arg0);
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) (*(u16 *)D_0059226E);
}
