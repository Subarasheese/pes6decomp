/* compiler: mwcc-3.0.1b210 */
extern char SoundUpload_Active[];
int SoundUpload_IsActive() {
    int v2;
    v2 = *( int *)(SoundUpload_Active);
    return v2;
}
