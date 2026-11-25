/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u32 values[64];
} CameraEffects;
extern CameraEffects D_005E2524;

void func_002ABDE0(const CameraEffects *effects) { D_005E2524 = *effects; }
