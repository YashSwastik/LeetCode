int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    int k = 0;
    int c = 0;
    int x =0;
    while(k <gSize && c< sSize){
        if(s[c] >= g[k]){
            k++;
            c++;
            x++;
        }
        else{
            c++;
        }
    }
    return x;
}