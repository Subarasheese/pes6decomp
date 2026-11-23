/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x64c];
    void *list;
    u8 reserved650[4];
    s32 count;
} LobbyList;
extern LobbyList *D_00A7DBF8[];
extern s32 func_002DB940(void *list);
s32 func_009AFF10(void) {
    LobbyList *view = D_00A7DBF8[0];
    return view->count - 1 - func_002DB940(view->list);
}
