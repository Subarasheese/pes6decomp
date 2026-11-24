/* compiler: mwcc-3.0.1b210 */
#include "pes6/localized_player_names.h"
#include "pes6/resource_bank_load.h"
extern void *func_001C4730(void *dest, const void *src, u32 bytes);
extern void Pes6Heap_Free(void *block);
void func_0026D420(LoadedResource *resource) {
    func_001C4730(D_0058D810[0], resource->file, func_0017F850(PLAYER_NAME_RESOURCE));
    D_0058D818[0] = (PlayerNameHeader *)D_0058D810[0];
    D_0058D81C[0] = (u16 *)(D_0058D810[0] + sizeof(PlayerNameHeader));
    D_0058D820[0] = (PlayerName *)(D_0058D810[0] + ((PlayerNameHeader *)D_0058D810[0])->count * 2 +
                                   sizeof(PlayerNameHeader));
    D_0058D814[0] = 1;
    Pes6Heap_Free(resource->file);
}
