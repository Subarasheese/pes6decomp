/* compiler: mwcc-3.0.1b210 */
#include "types.h"

struct Cl;
extern int sceSifCallRpc(struct Cl *, int, unsigned int, void *, int, void *, int, void *, void *);
s32 func_001C7F58(s32, s32 *);
extern char D_00CE9D40[];
extern s16 D_00CE9D58[];
extern char D_00CE9D5E[];
extern char D_00CEAD40[];
extern s16 D_00CEAD5C[];
extern char D_00CEBD40[];

s16 func_00C29230(s16 arg0, s32 arg1) {
    D_00CEAD5C[0] = arg0;
    sceSifCallRpc(((void *)D_00CEBD40), 0x3D, 0, ((void *)D_00CEAD40), 0x130, ((void *)D_00CE9D40),
                  0x130, 0, 0);
    func_001C7F58(arg1, ((void *)D_00CE9D5E));
    return D_00CE9D58[0];
}
