/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_substitution.h"
extern u8 D_00C9A91C[];
extern s32 D_00C9A718[], D_00C9A71C[];
typedef void (*SubstitutionCallback)(s32 value);
extern SubstitutionCallback D_00CBCAB8[];
extern s32 D_00CBCABC[];
extern void Pes6World_SetActive(s32), func_00182B30(s32), Pes6Ball_SetVisible(s32),
    func_00BF93A0(s32);
extern void func_00C04570(void), func_00C22D70(void), func_00C22C70(void), func_00B267F0(void),
    func_00B27010(s32), func_002562B0(s32), Pes6Heap_Free(void *), func_009A0A90(void),
    func_00B7FE70(void);
extern s32 func_00B7DEA0(void), func_00BF9A40(void);
extern void *func_001C48E8(void *, s32, u32);
extern u8 D_00591EFA[], D_00591EFB[], D_00591EF8[], D_00591EF9[], *D_003EA768;
void func_00B7FEC0(void) {
    switch (D_00C9A91C[0]) {
    case 0:
        if (func_00B7DEA0()) {
            func_00BF93A0(1);
            func_00C04570();
            func_00C22D70();
            func_00C22C70();
            ++D_00C9A91C[0];
        }
        break;
    case 1:
        if (func_00BF9A40())
            return;
        D_00CBCAB8[0](D_00CBCABC[0]);
        Pes6World_SetActive(1);
        func_00182B30(1);
        func_00B267F0();
        func_00B27010(1);
        Pes6Ball_SetVisible(1);
        func_002562B0(13);
        func_001C48E8(&D_00C9A710, 0, sizeof(D_00C9A710));
        D_00C9A718[0] = 255;
        D_00C9A71C[0] = 255;
        D_00C9A710.update = 0;
        if (D_003EA764) {
            Pes6Heap_Free(D_003EA764);
            D_003EA764 = 0;
        }
        if (D_003EA768) {
            Pes6Heap_Free(D_003EA768);
            D_003EA768 = 0;
        }
        func_009A0A90();
        D_00591EFA[0] = D_00591EF8[0];
        D_00591EFB[0] = D_00591EF9[0];
        D_00C9A91C[0] = 0;
        D_00C9A710.update = func_00B7FE70;
        break;
    }
}
