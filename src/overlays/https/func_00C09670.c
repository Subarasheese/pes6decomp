/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x44];
    s32 readySemaphore;
    s32 doneSemaphore;
    u8 reserved4C[0x28];
    s32 state;
    u8 reserved78[0xd0];
    s32 requestId;
} NetworkRequest;
extern s32 func_00105380(s32);
extern s32 func_00C093C0(void);
void func_00C09670(NetworkRequest *record) {
    s32 id;
    id = func_00C093C0();
    record->state = 0;
    record->requestId = id;
    func_00105380(record->readySemaphore);
    func_00105380(record->doneSemaphore);
}
