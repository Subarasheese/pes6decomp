/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 sceSifBindRpc(void *, u32, s32);
extern s32 func_00146C70(const char *);
extern char D_00C58070[];
extern char D_00CEBD40[];
extern s32 D_00CEBD64[];
void func_00C2A070(void) {
    do {
        if (sceSifBindRpc((void *)D_00CEBD40, 0x90000100, 0) < 0) {
            func_00146C70(D_00C58070);
        }
    } while (D_00CEBD64[0] == 0);
}
