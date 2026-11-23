/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 bytes[0x7534];
} LobbyResponse;
extern LobbyResponse D_00A60AD0[];
extern void *func_00D0BAF0(void);
extern void *memset(void *, s32, u32);
extern void func_00866200(void *, LobbyResponse *);
s32 func_0093DC40(void) {
    void *session = func_00D0BAF0();
    LobbyResponse *response = D_00A60AD0;
    if (response)
        memset(response, 0, sizeof(*response));
    func_00866200(session, response);
    return 1;
}
