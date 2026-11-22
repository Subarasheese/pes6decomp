/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved[16];
    s32 operation;
} NetRequest;
extern NetRequest *func_00C01910(void);
extern void func_00C01970(NetRequest *);
extern void func_00C01A60(s32 error);
s32 func_00C041E0(void) {
    NetRequest *request = func_00C01910();
    if (!request) {
        func_00C01A60(-625);
        return -625;
    }
    request->operation = 5;
    func_00C01970(request);
    return 0;
}
