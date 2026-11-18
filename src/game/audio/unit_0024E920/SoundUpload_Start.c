/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char SoundUpload_Bank[];
extern char SoundUpload_Active[];
extern char SoundUpload_Step[];

void SoundUpload_Start(s32 arg0) {
    if ((*(s32 *)SoundUpload_Active) == 0) {
        (*(s32 *)SoundUpload_Bank) = arg0;
        (*(s32 *)SoundUpload_Step) = 0;
        (*(s32 *)SoundUpload_Active) = 1;
    }
}
