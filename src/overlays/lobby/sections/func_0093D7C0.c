/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 bytes[0x7534];
} LobbyResponse;
extern LobbyResponse D_00A43860[];
extern void *func_00D0BAF0(void);
extern void *memset(void *, s32, u32);
extern void func_00866220(void *, LobbyResponse *);
s32 func_0093D7C0(void) {
    void *session = func_00D0BAF0();
    LobbyResponse *response = D_00A43860;
    if (response)
        memset(response, 0, sizeof(*response));
    func_00866220(session, response);
    return 1;
}
