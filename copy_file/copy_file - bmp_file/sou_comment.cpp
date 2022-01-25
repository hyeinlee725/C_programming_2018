#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    FILE* src = fopen("coin.bmp", "rb");
    FILE* des = fopen("dst.bmp", "wb");

    char buf[20];
    int readCnt;
    if (src == NULL || des == NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }
    while (1) {
        readCnt/*(20보다 작은값이 들어가있다==끝에 도달했다)*/
            = fread((void*)buf, 1, sizeof(buf), src);//20byte만큼 원본에서 읽어서 저장
                         //파일에서 읽어와서 저장할 위치 = buf(강제 형변환해서 전달->fread함수가 void*타입이기 때문),
                         //1바이트 단위로, 20번읽어다가 buf에 저장, src포인터가 가리키고 있는 곳에서
        if (readCnt < sizeof(buf))//작으면
        {
            if (feof(src) != 0)//파일끝에 도달했는지 확인
            {
                fwrite((void*)buf, 1, readCnt, des);// , 1byte 단위로,readCnt번 만큼, des가 가리키고 있는 파일에 저장
                puts("파일복사 완료!");
                break;//while문을 빠져나온다
            }
            else
                puts("파일복사 실패!");
            break;
            fwrite((void*)buf, 1, sizeof(buf), des);//정상적으로 출력
        }
    }
    fclose(src);
    fclose(des);
    return 0;
}