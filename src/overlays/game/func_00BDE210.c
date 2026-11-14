/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00207360(int);
extern void func_001AFD70(int);
extern s32 func_00BDC590(void);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(s32 *, s32, M2C_UNK);
void **func_00B2A420(u8);
s32 func_00BB1310(M2C_UNK);

void func_00BDE210(void) {
    s32 var_s1;
    void **temp_v0;

    var_s1 = 0;
    temp_v0 = func_00B2A420(func_00BF6270());
    func_00207360(M2C_FIELD(*temp_v0, s32 *, 4));
    func_001AFD70(*M2C_FIELD(*temp_v0, s32 **, 4));
    switch (func_00BDC590()) {
    case 1:
        var_s1 = func_00BB1310(0x3C0) & 0xFFFF;
        break;
    case 2:
        var_s1 = func_00BB1310(0x3C3) & 0xFFFF;
        break;
    case 3:
        var_s1 = func_00BB1310(0x3C6) & 0xFFFF;
        break;
    }
    func_00209A00(M2C_FIELD(*temp_v0, s32 **, 4), var_s1 & 0xFFFF, 0);
    M2C_FIELD(*temp_v0, s8 *, 0x16) = 0x4E;
    M2C_FIELD(*temp_v0, s16 *, 0x18) = 2;
}
