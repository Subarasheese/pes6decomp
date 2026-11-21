/* compiler: mwcc-3.0.1b210 */
#include "types.h"

struct Cl;
extern int sceSifCallRpc(struct Cl *, int, unsigned int, void *, int, void *, int, void *, void *);
extern char D_00CE9D40[];
extern s16 D_00CE9D58[];
extern char D_00CEAD40[];
extern char D_00CEBD40[];

s16 func_00C29630(void) {
    sceSifCallRpc(((void *)D_00CEBD40), 0x5A, 0, ((void *)D_00CEAD40), 0x20, ((void *)D_00CE9D40),
                  0x20, 0, 0);
    return D_00CE9D58[0];
}
