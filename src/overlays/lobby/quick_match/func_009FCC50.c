/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_value_fields.h"
typedef struct {
    u8 reserved00[0x2c];
    s32 second;
    s32 values[16];
} LobbyMatchValues;
extern void *memset(void *dst, s32 value, u32 size);
static inline u8 *nextSlashField(u8 *p) {
    if (p) {
        u8 c;
        do {
            c = *p++;
            if (c == '/') {
                p[-1] = 0;
                return p;
            }
        } while (c);
        p = 0;
    }
    return p;
}
s32 func_009FCC50(u8 *text, LobbyMatchValues *out) {
    u8 *fields[2];
    s32 count = 0;
    while (text != 0 && count < 2) {
        u8 *field = text;
        text = nextSlashField(text);
        restoreField(field);
        fields[count++] = field;
    }
    if (count < 2)
        return -1;
    memset(out->values, 0, sizeof(out->values));
    out->values[0] = atoi((const char *)fields[0]);
    out->second = atoi((const char *)fields[1]);
    return 0;
}
