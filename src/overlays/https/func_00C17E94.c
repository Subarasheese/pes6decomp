/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
typedef struct {
    s32 id;
    u8 reserved04[0x8c];
} SoapAction;
extern SoapAction D_00CE7DC8[32];
extern const char D_00C55118[], D_00C54B88[], D_00C550D8[];
extern const char *D_00C479D0[];
extern s32 func_00C0FE58(const char *function, const char *file, s32 line, s32 result, s32 category,
                         ...);
extern s32 func_00C13890(const char *format, ...);
s32 func_00C17E94(s32 id, SoapAction **out) {
    int result = 0x1200;
    int i;
    for (i = 0; i < 32; ++i) {
        SoapAction *action = &D_00CE7DC8[i];
        if (action->id == id) {
            if (out)
                *out = action;
            result = func_00C0FE58(D_00C55118, D_00C54B88, 299, 0x1301, 0x1901);
            break;
        }
    }
    if (i == 32)
        result = func_00C0FE58(D_00C55118, D_00C54B88, 305, 0x1308, 0x1901);
    if (result == 0x1200) {
        func_00C13890(D_00C479D0[0], D_00C54B88, 308, D_00C55118);
        func_00C13890(D_00C550D8);
        result = 0x1309;
    }
    return result;
}
