/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 bytes[0x1c24];
} LobbyResponse;
extern LobbyResponse D_00A53950[];
extern void *func_00D0BAF0(void);
extern void *memset(void *, s32, u32);
extern void func_008662A0(void *, LobbyResponse *);
s32 func_0093DAB0(void) {
    void *session = func_00D0BAF0();
    LobbyResponse *response = D_00A53950;
    if (response)
        memset(response, 0, sizeof(*response));
    func_008662A0(session, response);
    return 1;
}
