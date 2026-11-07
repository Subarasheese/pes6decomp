/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { f32 x, y; } V2;
extern void func_009B1510(s32, s64);
extern void func_009B0C40(s32);
M2C_UNK func_001C7F58(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */
s32 func_0093C2E0();                                /* extern */
M2C_UNK func_00976080(M2C_UNK);                     /* extern */
M2C_UNK func_009B0920(s32);                         /* extern */
M2C_UNK func_009B0D70(s32);                         /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK);              /* extern */
extern char D_009FF2A8[];
extern char D_009FF2AC[];
extern char D_00A02AC8[];
extern char D_00A7DC00[];

void func_009B0FD0(s32 arg0) {
    V2 sp38;
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_00A7DC00);
    sp38 = *(V2 *)D_009FF2A8;
    func_00D0C540();
    func_00D0C7B0((f32 *)&sp38, 1);
    if (func_0093C2E0() != 0) {
        func_001C8590(temp_s0 + 0x64, func_0093C2E0(), 0x101);
    } else {
        func_001C7F58(temp_s0 + 0x64, ((void *)D_00A02AC8));
    }
    func_009B0D70(arg0);
    func_009B0C40(arg0);
    func_009B0920(arg0);
    func_009B1510(arg0, 1);
    func_00976080(5);
}
