#include <stdio.h>

int main()
{
    int N ; // กำหนดตัวแปร

    printf ( "Enter value : " ); //รับค่าจากผู้ใช้
    scanf ( "%d" ,&N ); //เก็บค่าไว้ในN

    if (N % 2 == 1) // เช็คค่าโดยการหาร2 ถ้ามีเศษแสดงว่าเป็นเลขคี่
    {

        printf("Series: %d\n", N); // ปริ้นค่าn
        for (int i = 1; i <=N; i += 2) 
        {
            printf("%d ", i);
        }
    } else {

        printf("Series: %d:\n", N);
        for (int i = N; i >= 0; i -= 2){
            printf("%d ", i);
        }
    }

    
    return 0;
}
