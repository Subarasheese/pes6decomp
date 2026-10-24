/* compiler: ee-gcc-2.96 */
#include "types.h"

/* Adapted from liolu/rac2-gc-decomp, src/boot/04-leaf-field-accessors.cfrag, FUN_00348128.
 * MIT: see LICENSES/RAC2-MIT.txt and config/cross_project_matches.json.
 * Only the field-access behavior is established; the PES6 object type is unknown. */
s32 func_00165B60(u8 *a0) { return *(s32 *)(a0 + 0x50); }
