/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, char *);
extern char D_003B4E30[];
extern char D_003B4E40[];
extern char func_002FE430[];
extern char func_002FE460[];
extern char func_00303890[];

s32 func_003038E0(void *arg0) {
    void *temp_a4;

    temp_a4 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_a4, s32 *, 0x18) = 0;
    M2C_FIELD(temp_a4, s32 *, 0) = 3;
    M2C_FIELD(temp_a4, char **, 4) = D_003B4E30;
    M2C_FIELD(temp_a4, s32 *, 8) = 2;
    M2C_FIELD(temp_a4, char **, 0xC) = D_003B4E40;
    M2C_FIELD(temp_a4, char **, 0x10) = func_002FE460;
    M2C_FIELD(temp_a4, char **, 0x14) = func_002FE430;
    func_00305E60(arg0, func_00303890);
    return 1;
}
