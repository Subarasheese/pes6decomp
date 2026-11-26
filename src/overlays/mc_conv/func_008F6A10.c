/* compiler: mwcc-3.0.1b210 */
#include "pes6/mc_converter.h"

extern McConverterTask D_008FEA80;
extern McConverterOptions D_0065C340;

void func_008F6A10(s32 selection) {
    mcInitConverterOptions(&D_008FEA80, &D_0065C340, selection);
}
