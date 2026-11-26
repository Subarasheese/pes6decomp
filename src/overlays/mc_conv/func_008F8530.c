/* compiler: mwcc-3.0.1b210 */
#include "pes6/mc_converter.h"

extern McConverterTask D_008FEAA0;
extern McConverterOptions D_0065C640;

void func_008F8530(s32 selection) {
    mcInitConverterOptions(&D_008FEAA0, &D_0065C640, selection);
}
