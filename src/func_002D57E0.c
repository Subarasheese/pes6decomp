/* compiler: mwcc-3.0.1b210 */
extern char D_00591BD1[];
extern void func_0020E310(int, int *);
extern void func_001EEE60(void *, int *);
void func_002D57E0(void *object, int key, const int *entries, int count) {
    int output;
    int found = 0;
    int index;
    if (key == 0) {
        key = *(unsigned char *)D_00591BD1;
    }
    index = 0;
    if (count > 0) {
        do {
            if (key == *entries) {
                found = 1;
                break;
            }
            ++index;
            ++entries;
        } while (index < count);
    }
    func_0020E310(found, &output);
    func_001EEE60(object, &output);
}
