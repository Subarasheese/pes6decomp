/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0021FBC0(u16);
extern void func_00241320(void);
extern void func_001FC790(s32);
extern s32 func_00266430(void);
M2C_UNK func_002D2E90();                            /* extern */
M2C_UNK func_00361EF0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_008C9760();                            /* extern */
extern char Pes6MatchContext[];
extern char D_00591BB2[];

void func_008C9A60(void) {
    func_002D2E90();
    func_00241320();
    func_008C9760();
    func_00361EF0(0, func_0021FBC0((*(u16 *)Pes6MatchContext)), 2);
    func_00361EF0(1, func_0021FBC0((*(u16 *)D_00591BB2)), 2);
    func_001FC790(6);
    func_00266430();
}
