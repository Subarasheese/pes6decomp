/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[0x31];
    u8 variant;
} MatchResourceRequest;
typedef struct {
    s32 reserved[3], id, heap;
} MatchLoadOptions;
extern void *D_003E9CC0;
extern s32 *D_003E9CC4;
extern s8 D_003E756C, D_003E7570;
extern void func_0017E180(void *arg);
extern s32 func_0017F9A0(s32 id, void (*complete)(void *), void ***destination, s32 argumentBytes,
                         MatchLoadOptions *options);
void **func_0027B350(MatchResourceRequest *request, s32 index) {
    MatchLoadOptions options;
    void **result;
    options.reserved[0] = 0;
    options.reserved[1] = 0;
    options.reserved[2] = 0;
    options.id = D_003E756C;
    options.heap = D_003E7570;
    switch (index) {
    case 20:
        result = &D_003E9CC0;
        index = 20 + request->variant % 4;
        break;
    default:
        result = &D_003E9CC0;
        break;
    }
    func_0017F9A0(D_003E9CC4[index], func_0017E180, &result, 4, &options);
    return result;
}
