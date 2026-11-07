/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 D_005E5D60[];
extern u8 *D_003E9D7C;
extern s32 D_003E9D88;
extern u32 *D_003E9D8C;
extern u8 *D_003E9D84;
void func_001EDD90(void);
void func_001D7F10(u32 a);
void func_00153FA0(void *p);
void func_001B4D20(void *p);
void func_002D3BC0(void) {
    s32 n; /* left unset when D_003E9D88 is 0, as in the original code */
    s32 i;
    if ((*(u8 *)D_005E5D60 & 2) != 2) {
        return;
    }
    *(u8 *)D_005E5D60 &= 0xFE;
    *(u8 *)D_005E5D60 &= 0xFD;
    if (D_003E9D7C != 0) {
        func_001EDD90();
        D_003E9D7C = 0;
    }
    if (D_003E9D88 != 0) {
        D_003E9D88 = 0;
        n = 0x11;
    }
    if (D_003E9D8C != 0) {
        for (i = 0; i < n; i++) {
            func_001D7F10(D_003E9D8C[i]);
        }
        func_00153FA0(D_003E9D8C);
        D_003E9D8C = 0;
    }
    if (D_003E9D84 != 0) {
        func_001B4D20(D_003E9D84);
        D_003E9D84 = 0;
    }
}
