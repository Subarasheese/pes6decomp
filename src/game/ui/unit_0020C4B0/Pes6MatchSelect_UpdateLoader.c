/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6StagedLoader_Update(M2C_UNK *);                   /* extern */
extern char Pes6MatchSelect_Loader[];

void Pes6MatchSelect_UpdateLoader(void) {
    Pes6StagedLoader_Update(((void *)Pes6MatchSelect_Loader));
}
