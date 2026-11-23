/* compiler: mwcc-3.0.1b198-O3 */
#include "pes6/lobby_value_fields.h"
s32 func_009FD890(u8 *text, LobbyValues *out) {
    u8 *fields[3];
    s32 n = 0;
    while (text != 0 && n < 3) {
        u8 *field = text;
        text = nextField(text);
        restoreField(field);
        fields[n++] = field;
    }
    if (n < 3)
        return -1;
    out->groups[1][0] = atoi((const char *)fields[0]);
    out->groups[1][1] = atoi((const char *)fields[1]);
    out->groups[1][2] = atoi((const char *)fields[2]);
    return 0;
}
