/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0096F610(s32);
typedef struct {
    u8 reserved00[0x34];
    u8 details[0x7c - 0x34];
} CupTeam;
extern CupTeam D_00B34380[];

void *func_00AF71D0(int id) {
    int valid;
    void *details;

    valid = func_0096F610(id);
    if (valid == 0) {
        details = 0;
    } else {
        details = D_00B34380[((u16)id) - 6000].details;
    }
    return details;
}
