/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern s32 D_00A89AD0[], D_00A89AD4[];
extern u32 D_00A89AE0[], D_00A89C0C[];
extern u8 D_00A89BEC[];
extern const char *D_00A89C08[];
extern u32 func_001C80F0(const char *);
extern s32 func_002DE610(s32, const void *, s32), func_002DE530(s32, const char *, u32, s32),
    func_00862160(s32);
extern void func_002DE2D0(s32);
static inline void finishRequest(void) {
    if (func_00862160(D_00A89AD4[0]) == 1)
        func_002DE2D0(D_00A89AD4[0]);
    D_00A89AD4[0] = -1;
    D_00A89AE0[0] = 0;
    D_00A89AD0[0] = 6;
}
s32 func_009FDFE0(void) {
    u32 length, attempt;
    u32 sent;
    if (!D_00A89C08[0])
        return -3;
    if (func_002DE610(D_00A89AD4[0], D_00A89BEC, 16) == 0) {
        length = func_001C80F0(D_00A89C08[0]);
        if (length >= D_00A89C0C[0]) {
            finishRequest();
            return -2;
        }
        sent = func_002DE530(D_00A89AD4[0], D_00A89C08[0], length, 0);
        if (sent != length) {
            finishRequest();
            return -3;
        }
        D_00A89AE0[0] = 0;
        D_00A89AD0[0] = 3;
        return 1;
    }
    if (++D_00A89AE0[0] > 7500) {
        finishRequest();
        return -1;
    }
    return 0;
}
