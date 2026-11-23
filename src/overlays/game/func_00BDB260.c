/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 id;
} Player;
typedef struct {
    Player *actor;
} Context;
typedef struct {
    u8 data[20];
} EventRecord;
extern u8 D_00CBD558[], D_00CBCAD1[];
extern EventRecord D_00C9E9F0[];
extern EventRecord D_00C9EA60[];
extern EventRecord D_00C9EAF0[];
extern EventRecord D_00C9EB60[];
extern EventRecord D_00C9EBD0[];
extern EventRecord D_00C9EC40[];
extern EventRecord D_00C9EC80[];
extern EventRecord D_00C9ECF0[];
EventRecord *func_00BDB260(Context *ctx) {
    EventRecord *result = 0;
    int slot = 0;
    do {
        if (ctx->actor->id == D_00CBD558[slot + 4]) {
            switch (*D_00CBCAD1) {
            case 104:
                result = &D_00C9E9F0[slot];
                break;
            case 105:
                result = &D_00C9EA60[slot];
                break;
            case 106:
                result = &D_00C9EAF0[slot];
                break;
            case 107:
                result = &D_00C9EB60[slot];
                break;
            case 108:
                result = &D_00C9EBD0[slot];
                break;
            case 109:
                result = &D_00C9EC40[slot];
                break;
            case 110:
                result = &D_00C9EC80[slot];
                break;
            case 111:
                result = &D_00C9ECF0[slot];
                break;
            default:
                break;
            }
            break;
        }
        slot++;
    } while (slot < 7);
    return result;
}
