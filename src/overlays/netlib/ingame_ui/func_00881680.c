/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);
M2C_UNK func_002DF960(s32);
extern s32 D_008B2470[];
extern s32 D_008B2474[];
extern s32 D_008B2478[];
extern s32 D_008B247C[];
extern s32 D_008B2480[];
extern s32 D_008B2484[];
extern s32 D_008B2488[];
extern s32 D_008B248C[];
extern s32 D_008B2494[];
extern s32 D_008B24C0[];

s32 func_00881680(void) {
    if (D_008B2470[0] != 0) {
        func_001D7F10(D_008B2474[0]);
        func_001D7F10(D_008B2478[0]);
        func_001D7F10(D_008B247C[0]);
        func_001D7F10(D_008B2494[0]);
        func_001D7F10(D_008B248C[0]);
        func_002DF960(D_008B24C0[0]);
        func_001D7F10(D_008B2480[0]);
        func_001D7F10(D_008B2484[0]);
        func_001D7F10(D_008B2488[0]);
        D_008B2470[0] = 0;
    }
    return 0;
}
