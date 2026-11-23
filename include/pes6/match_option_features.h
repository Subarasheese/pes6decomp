#ifndef PES6_MATCH_OPTION_FEATURES_H
#define PES6_MATCH_OPTION_FEATURES_H

#include "types.h"

extern u32 *func_002211E0(void);

static inline u32 optionBitMask(s32 id, s32 word) {
    return 1u << (id - word * 32);
}

static inline s32 featureEnabled(s32 id) {
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
    if (words[word] & optionBitMask(id, word))
        return 1;
    return 0;
}

#endif
