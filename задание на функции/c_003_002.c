
int f_003_002(int a, int b, int c, int d)
{
    
    int temp = 0, arr[4] = {};
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    for (int i = 0; i< 4; i++){
        for (int j = 0; j< 4;j++){
            if (arr[j] > arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    return arr[0];
}