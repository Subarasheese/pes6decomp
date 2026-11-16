/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 func_00351EB0(s32);
extern void func_00295610(void);
s32 Pes6Random_Below(M2C_UNK);                         /* extern */
M2C_UNK func_00295650(u8 *, s8 *);                  /* extern */
extern char Pes6MatchContext_Stadium[];
extern char D_00591BB6[];
extern char D_00591BB8[];

void func_00351FC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[8];
    u8 var_s1;

    var_s1 = (u8)arg2;
    buf[7] = 0;
    if (var_s1 == 0) {
        do {
            var_s1 = Pes6Random_Below(0xFF) & 0xFF;
        } while (var_s1 == 0);
    }
    buf[0] = func_00351EB0((s32) (*(u8 *)Pes6MatchContext_Stadium));
    buf[1] = arg0;
    buf[2] = arg1;
    buf[3] = ((*(u8 *)D_00591BB8) == 0) ? 8 : 2;
    buf[4] = ((*(u8 *)D_00591BB6) != 0) ? 0x15 : 0xD;
    buf[5] = var_s1;
    buf[6] = arg3;
    func_00295650(buf, (s8 *)&buf[7]);
    func_00295610();
}
