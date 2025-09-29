#include <stdio.h>
#include <string.h>

int main() { 

    char name1[50];  //กำหนดตัวแปร ขอบเขต 100 ตัวอักษร
    char name2[50];    //กำหนดตัวแปร ขอบเขต 100 ตัวอักษร
    

    printf("Enter name of customer 1: ");       //แสดงค่าให้กรอกชื่อคนที่ 1
    scanf("%s", &name1);        //เก็บค่าตัวแปร

    printf("Enter name of customer 2: ");       //แสดงค่าให้กรอกชื่อคนที่ 2
    scanf("%s", &name2);        //เก็บค่าตัวแปร

    int length1 = strlen(name1);        //เก็บจำนวนตัวอักษรของ name1

    int length2 = strlen(name2);        //เก็บจำนวนตัวอักษรของ name2

    if(strcmp(name1, name2) == 0) {          // ถ้า คนที่1 กับ คนที่2 ชื่อเดียวกัน
        printf("Both of your names are the same, which is %s\n", name1);    //แสดงค่าบอกว่าชื่อซ้ำกัน
        printf("The length of the name is %d characters.",length1);
    }else {                                                                     //ถ้าไม่เข้าเงื่อนไขรันโค้ดด้านล่าง
        printf("Customer 1: %s (%d characters)\n",name1,length1);
        printf("Customer 2: %s (%d characters)\n",name2,length2);
    }

    return 0;
}