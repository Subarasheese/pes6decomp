/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_list.h"
s32 func_00877690(NetlibProfileCounter *counter, NetlibProfileList *list) {
    s32 i;
    u8 count = 0;
    if (list) {
        for (i = 0; i < 30; i++) {
            LobbyProfile *p = &list->profiles[i];
            if (p->field00) {
                switch (p->field7D) {
                case 1:
                case 2:
                case 3:
                    count++;
                    break;
                case 0:
                case 4:
                    break;
                default:
                    break;
                }
            }
        }
        list->count = count;
        if (counter)
            counter->count = count;
        return 1;
    }
    return 0;
}
