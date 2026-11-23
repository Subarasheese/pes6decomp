/* compiler: mwcc-3.0.1b198 */
#include "pes6/saved_roster.h"

typedef struct {
    u8 reserved00[16];
    u16 players[383];
} PlayerIdList;
extern PlayerIdList *func_00229310(void);
extern u8 D_00591C09[];
extern u8 func_00225820(void);
u8 func_00224070(u8 slot, u16 id) {
    u32 i;
    u8 count = 0;
    PlayerIdList *p;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (D_00591C09[0] != 14)
        return 0;
    if (slot != func_00225820())
        return 0;
    if ((u16)id == 0)
        return 0;
    p = func_00229310();
    if (!p)
        return 0;
    for (i = 0; i < 383; ++i)
        if (id == p->players[i])
            ++count;
    return count;
}
