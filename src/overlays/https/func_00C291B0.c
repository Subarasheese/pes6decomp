/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 sceSifCallRpc(void *, u32, u32, void *, s32, void *, s32, void (*)(void *), void *);
extern void *func_001C4730(void *, const void *, u32);
extern char D_00CE9D40[];
extern s16 D_00CE9D58[];
extern char D_00CE9D5C[];
extern char D_00CEAD40[];
extern char D_00CEBD40[];
s16 func_00C291B0(void *out) {
    char *address;
    s16 result;
    char *payload;
    sceSifCallRpc((void *)D_00CEBD40, 0x59, 0U, (void *)D_00CEAD40, 0x20, (void *)D_00CE9D40, 0x30,
                  0, 0);
    {
        result = D_00CE9D58[0];
        payload = D_00CE9D5C;
        if (result == 0) {
            address = payload;
            func_001C4730(out, (void *)address, 6U);
        }
        return result;
    }
}
