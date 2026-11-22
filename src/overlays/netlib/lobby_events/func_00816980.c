/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern s32 Pes6File_AllChannelsIdle(void);
extern s32 Pes6Module_GetRegion(s32 module);
extern void Pes6Module_Load(s32 module);
extern void func_001FC780(s32 region);
extern s32 func_001FC7D0(s32 region);
extern u32 func_00309440(s32 scene);
extern void func_00309460(s32 scene, u32 phase);
extern void func_00807790(s32 selection);
extern void func_00AE2180(void);
extern u32 func_00AE2190(void);
extern void func_00AE2740(s32 *result);
extern void func_00AE29A0(void);
extern s32 func_00AE29C0(void);
extern void func_00AE2A30(void);
enum { MODULE_18 = 0x18, MODULE_1A = 0x1a };
static inline void advance_phase(s32 scene) { func_00309460(scene, func_00309440(scene) + 1); }
static inline void load_module(s32 module) {
    func_001FC780(Pes6Module_GetRegion(module));
    Pes6Module_Load(module);
}
static inline void release_if_loaded(s32 module) {
    if (func_001FC7D0(Pes6Module_GetRegion(module)) == module)
        func_001FC780(Pes6Module_GetRegion(module));
}
/* Run the connection screen and hand control back to its parent scene. */
s32 func_00816980(s32 parentScene) {
    s32 childScene;

    u32 response;

    childScene = parentScene + 1;
    switch (func_00309440((u8)childScene)) {
    case 0:
        load_module(MODULE_18);
        load_module(MODULE_1A);
        advance_phase(childScene);
        break;
    case 1:
        if (Pes6File_AllChannelsIdle() != 0) {
            advance_phase(childScene);
        }
        break;
    case 2:
        func_00AE2740(0);
        func_00AE2A30();
        advance_phase(childScene);
        break;
    case 3:
        if (func_00AE29C0() == 1) {
            advance_phase(childScene);
        }
        break;
    case 4:
        response = func_00AE2190();
        switch (response) {
        case 0:
        case 3:
        case 5:
        case 7:
            break;
        case 1:
            func_00807790(0);
            advance_phase(childScene);
            break;
        case 2:
            advance_phase(childScene);
            advance_phase(childScene);
            break;
        case 4:
            func_00807790(1);
            advance_phase(childScene);
            break;
        case 6:
            func_00807790(2);
            advance_phase(childScene);
            break;
        }
        if (response != 0) {
            func_00AE29A0();
            func_00AE2180();
        }
        break;
    case 5:
        func_001FC780(Pes6Module_GetRegion(MODULE_18));
        func_00309460(parentScene, 3);
        break;
    case 6:
        release_if_loaded(MODULE_18);
        release_if_loaded(MODULE_1A);
        func_00309460(parentScene, 0xA);
        break;
    }
    return 0;
}
