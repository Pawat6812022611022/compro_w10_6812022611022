#include <stdio.h>

int main() {

    int NS;         // กำหนดตัวแปร
    printf("Enter number of students: ");   //แสดงค่าให้กรอกชื่อ
    scanf("%d",&NS);    //เก็บค่าตัวแปร 

    int Studentscore[NS];       //กำหนดตัวแปร โดยนำค่า NS มากำหนดจำนวน index
    float sum, average;         //กำหนดตัวแปร

    printf("Enter %d student score (one per line): \n", NS); 

    for( int i = 0; i < NS; i++) {    //ใช้ for loop 

        printf("Score %d: ", i+1);          //แสดงค่า score
        scanf("%d",&Studentscore[i]);       //เก็บค่า โดยวนจำนวน index ตั้งแต่ 0 - จำนวนที่กำหนดไว้
    }
    
    printf("\n");
    printf("Number of students = %d\n",NS);     //ปริ้นลำดับ นักเรียน

    
    
    for( int j = 0; j < NS; j++) {

        sum = sum + Studentscore[j];        //คำนวนค่าผลรวมของคะแนน
        
    }

    average = sum / NS;  //คำนวนค่าเฉลี่ยคะแนน

    printf("Average score = %.2f", average);  //แสดงค่าเฉลี่ยคะแนน

    return 0;
}