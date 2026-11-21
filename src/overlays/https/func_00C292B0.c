/* compiler: mwcc-3.0.1b210 */
#include "types.h"

struct Cl;
extern int sceSifCallRpc(struct Cl *, int, unsigned int, void *, int, void *, int, void *, void *);
extern char D_00CE9D40[];
extern s16 D_00CE9D58[];
extern s32 D_00CE9D60[];
extern char D_00CEAD40[];
extern s16 D_00CEAD5C[];
extern char D_00CEBD40[];

s16 func_00C292B0(s16 arg0, s32 *arg1) {
    D_00CEAD5C[0] = arg0;
    sceSifCallRpc(((void *)D_00CEBD40), 0x3C, 0, ((void *)D_00CEAD40), 0x30, ((void *)D_00CE9D40),
                  0x30, 0, 0);
    *arg1 = D_00CE9D60[0];
    return D_00CE9D58[0];
}
