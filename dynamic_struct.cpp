#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
using namespace std;

struct MyData 
{
    uint32_t nLen;
    uint8_t ver;
    uint16_t port;
    uint8_t data[0];
};

int main()
{
        FILE* fpw = NULL;
        if ((fpw = fopen("test.dat", "wb")) == NULL)
        {
                fprintf(stderr, "打开输出文件失败.\n");
                return 0;
        }
        char a[10]="1234567";
        uint32_t len = sizeof(MyData) + strlen(a);
        len = (len%4==0)?len:(len/4+1)*4;
        cout << "len is "<<len<<endl;
        MyData *data = (MyData*)malloc(len);
        data->nLen = 1;
        data->ver = 6;
        data->port = 7;
        memcpy(data->data, a, strlen(a));
        cout << "size of MyData is" << sizeof(MyData) << "size of data is" << sizeof(*data)<<endl;  
        fwrite(data, len, 1, fpw);
        return 0;
}

