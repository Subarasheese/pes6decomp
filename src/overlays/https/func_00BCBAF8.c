/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern s32 func_00BCBB90(void *, const void *, const void *, s32, u8 *);
s32 func_00BCBAF8(void *ssl, const void *first, const void *second, const void *data, s32 size,
                  u8 *out) {
    s32 a, b;
    a = func_00BCBB90(ssl, first, data, size, out);
    if (a) {
        b = func_00BCBB90(ssl, second, data, size, out + a);
        if (b)
            return a + b;
    }
    return 0;
}
