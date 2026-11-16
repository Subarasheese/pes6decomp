/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00B29A00();
M2C_UNK func_00B29EB0(char *);
s32 func_00B2A340();
extern char D_00C9A600[];
extern char D_00C9A604[];
extern char D_00C9A608[];
extern char D_00C9A60C[];
extern char D_00C9A610[];
extern char D_00C9A614[];
extern char D_00C9A618[];
extern char D_00C9A61C[];

void func_00B2A1E0(char *arg0, char *arg1, s32 arg2, s32 arg3) {
    void (*tbl[8])(char *, char *, s32, s32);
    s32 v;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_00B29EB0(arg1);
        return;
    }
    v = func_00B2A340();
    if (v != 4) {
        if (v != 3) {
            func_00B29EB0(arg1);
            return;
        }
        M2C_FIELD(arg1, s32 *, 0xB0) = M2C_FIELD(arg1, s32 *, 0xB0) & 0xF0FF0;
        M2C_FIELD(arg1, s32 *, 0xB4) = M2C_FIELD(arg1, s32 *, 0xB4) & 0xFFFF6;
        M2C_FIELD(arg1, s32 *, 0xB0) = M2C_FIELD(arg1, s32 *, 0xB0) & ~0x102;
        M2C_FIELD(arg1, s32 *, 0xB4) = M2C_FIELD(arg1, s32 *, 0xB4) & ~0x102;
    }
    tbl[0] = *(void (**)(char *, char *, s32, s32))D_00C9A600;
    tbl[1] = *(void (**)(char *, char *, s32, s32))D_00C9A604;
    tbl[2] = *(void (**)(char *, char *, s32, s32))D_00C9A608;
    tbl[3] = *(void (**)(char *, char *, s32, s32))D_00C9A60C;
    tbl[4] = *(void (**)(char *, char *, s32, s32))D_00C9A610;
    tbl[5] = *(void (**)(char *, char *, s32, s32))D_00C9A614;
    tbl[6] = *(void (**)(char *, char *, s32, s32))D_00C9A618;
    tbl[7] = *(void (**)(char *, char *, s32, s32))D_00C9A61C;
    if (tbl[func_00B29A00()] != 0) {
        tbl[func_00B29A00()](arg0, arg1, arg2, arg3);
    }
}
