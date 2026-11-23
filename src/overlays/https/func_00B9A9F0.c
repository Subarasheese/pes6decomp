/* compiler: ee-gcc-2.96-nsa-G0 */
#include "types.h"
extern s32 func_00B99810(void);
extern s32 func_00B99888(void);
extern s32 func_00B9A898(s32, s32, s32);
extern s32 func_00B9A950(s32, s32, s32);
extern s32 D_00C3BCF4[];
extern s32 D_00C3BD08[];
extern s32 D_00C3BD10[];
s32 func_00B9A9F0(s32 request, s32 length) {
    s32 lockResult;
    s32 result;
    lockResult = func_00B99810();
    if (D_00C3BD08[0] != 0) {
        result = func_00B9A898(D_00C3BD10[0], request, length);
    } else {
        result = func_00B9A950(D_00C3BCF4[0], request, length);
    }
    if (lockResult >= 0) {
        func_00B99888();
    }
    return result;
}
