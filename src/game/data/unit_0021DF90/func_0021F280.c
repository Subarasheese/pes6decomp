/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern const char *func_001F08B0(s32 message);
extern const char *D_003E0FF0[][2];
extern const char *D_003E0FF4[][2];

const char *func_0021F280(u32 id, s32 kind) {
    if (id == 0xffff)
        id = 0x69;
    if ((s32)id >= 0x73)
        return 0;
    {
        if (!kind) {
            if (id == 0x69)
                return func_001F08B0(0x6c0077);
            return D_003E0FF0[id][0];
        }
        return D_003E0FF4[id][0];
    }
    return 0;
}
