/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayload(s32, s32);
extern s32 func_00338750(s32, s32);
extern s32 Pes6Job_Create(s32, char *, s32, char *);
extern s32 func_00C17200(char *, char *);
extern char D_003E6408[];
extern u8 D_003E9F6C;
extern char D_0061C6F8[];
extern char func_0034FC90[];
extern char func_0034FDC0[];

s32 func_0034FFF0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = Pes6Job_Create(0x30, func_0034FC90, 0xA, D_003E6408);
    Pes6Job_SetPayload(temp_v0, arg0);
    func_00338750(temp_v0, 0x1E);
    if (D_003E9F6C == 0) {
        func_00C17200(D_0061C6F8, func_0034FDC0);
        D_003E9F6C = 1;
    }
    return 1;
}
