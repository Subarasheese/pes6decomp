#ifndef PES6_LOBBY_VALUE_FIELDS_H
#define PES6_LOBBY_VALUE_FIELDS_H

#include "types.h"
extern int atoi(const char *);
extern const u8 D_00A00C10[32];
typedef struct {
    u8 reserved00[0x3c];
    s32 groups[5][3];
} LobbyValues;
static inline u8 *nextField(u8 *p) {
    if (p) {
        u8 c;
        do {
            c = *p++;
            if (c == ',') {
                p[-1] = 0;
                return p;
            }
        } while (c);
        p = 0;
    }
    return p;
}
static inline void restoreField(u8 *p) {
    while (*p) {
        u8 c = *p;
        if (c < 32U)
            c = D_00A00C10[c];
        *p++ = c;
    }
}
#endif
