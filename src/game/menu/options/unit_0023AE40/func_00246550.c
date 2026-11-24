/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_features.h"

s32 func_00246550(s32 id) {
    u32 *words = func_002211E0();
    s32 word = id / 32;
    switch (id) {
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
        return 0;
    }
    if (id == 162)
        return 0;
    if (id == 170)
        return 0;
    if (id == 196)
        return 0;
    return (words[word] & optionBitMask(id, word)) != 0;
}
