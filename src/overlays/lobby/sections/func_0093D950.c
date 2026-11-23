/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 bytes[0x1774];
} LobbyResponse;
extern LobbyResponse D_00A4DB00[];
extern void *func_00D0BAF0(void);
extern void *memset(void *, s32, u32);
extern void func_00866260(void *, LobbyResponse *);
s32 func_0093D950(void) {
    void *session = func_00D0BAF0();
    LobbyResponse *response = D_00A4DB00;
    if (response)
        memset(response, 0, sizeof(*response));
    func_00866260(session, response);
    return 1;
}
