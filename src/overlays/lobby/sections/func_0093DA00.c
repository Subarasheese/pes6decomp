/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 bytes[0x46cc];
} LobbyResponse;
extern LobbyResponse D_00A4F280[];
extern void *func_00D0BAF0(void);
extern void *memset(void *, s32, u32);
extern void func_008662C0(void *, LobbyResponse *);
s32 func_0093DA00(void) {
    void *session = func_00D0BAF0();
    LobbyResponse *response = D_00A4F280;
    if (response)
        memset(response, 0, sizeof(*response));
    func_008662C0(session, response);
    return 1;
}
