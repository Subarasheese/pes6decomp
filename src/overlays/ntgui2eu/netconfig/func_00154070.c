/* compiler: ee-gcc-2.9 */
#include "types.h"
extern const char *func_00154018(const char *);
extern s32 func_001AD6F8(const char *);
s32 func_00154070(const char *name, s32 fallback) {
    const char *text = func_00154018(name);
    if (text)
        return func_001AD6F8(text);
    return fallback;
}
