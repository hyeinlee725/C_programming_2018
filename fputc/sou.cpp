#include <stdio.h>

int main()
{
    FILE* fp = fopen("data.txt", "wt");//파일의 위치를 가리키는 화살표(+노트참고)
    if (fp == NULL)//파일이 정상적으로 오픈이 안되는 경우(fopen 함수가 제대로 작동되지 못할 경우)
    //예외처리 해서 파일 종료 시킴
    {
        puts("파일오픈 실패!\n");
        return -1;//main 함수 종료(-1?->return -1은 함수가 정상적인 루트대로 작동하지 못하고 비정상적으로 종료되는
                 //경우를 의미)
    }
    fputc('A', fp);//FILE로 출력이 됨(하나 출력되면 그 다음 주소를 가리킴)
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);//fopen을 쓰면 fclose도 써야함(프로그램 종료 전에)->FILE*와 그 파일간의 연결 해제
    //fclose를 하지 않는다면...계속 사용하고 있는 걸로 인식...문제 발생(?)??
    return 0;
}