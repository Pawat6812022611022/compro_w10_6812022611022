#include <stdio.h>

int main() {
    
    float score[3][3];              //กำหนดตัวแปร score 3 มิติ
    float summath = 0, sumphysics = 0 , sumchem =0;     //กำหนดตัวแปร
    float avgmath= 0, avgphysics = 0, avgchem = 0;      //กำหนดตัวแปร

    

    for (int i = 0; i < 3; i++)   //ใช้ for loop         //ใช้เก็บค่าในตัวแปรใน score โดยการกรอกข้อมูล
    {
        printf("Enter scores for Students %d:\n" ,i+1);

        printf("  Math: ");
        scanf("%f", &score[i][0]);         

        printf("  Physics: ");
        scanf("%f", &score[i][1]);

        printf("  Chemistry: ");
        scanf("%f", &score[i][2]);
    }

    printf("\n");
    printf("Score Table:\n");
    printf("%-8s %7s %8s %8s\n", "student" , "Math" , "Physics" , "Chemistry");  //แสดงค่า ตารางคะแนน กำหนดการเว้นช่องให้ได้ตารางที่สวยงาม

        for(int i = 0; i < 3; i++) {
            printf("%-8d", i+1);
             for(int j = 0; j < 3; j++) {
                 printf("%8.2f",score[i][j]);
        }
            printf("\n");
    }

    printf("\n");
    

    for(int a = 0; a < 3 ; a++) {           //ใช้ for loop เพื่อคำนวนผลรวมคะแนนวิชาคณิตศาสตร์
        summath = summath + score[a][0]; 
    }

    for(int b = 0; b < 3 ; b++) {           //ใช้ for loop เพื่อคำนวนผลรวมคะแนนวิชาฟิสิกส์
        sumphysics = sumphysics + score[b][1];
    }

     for(int c = 0; c < 3 ; c++) {          //ใช้ for loop เพื่อคำนวนผลรวมคะแนนวิชาเคมี
        sumchem = sumchem + score[c][2];
    }

    
    


    printf("Average per subject:\n");
        
    avgmath = summath / 3;          //คำนวนค่าเฉลี่ยวิชาคณิตศาสตร์
    avgphysics = sumphysics / 3;    //คำนวนค่าเฉลี่ยวิชาฟิสิกส์
    avgchem = sumchem / 3;          //คำนวนค่าเฉลี่ยวิชาเคมี

    printf("Math: %.2f\n",avgmath);     //แสดงค่าเฉลี่ยวิชาคณิต
    printf("Physics: %.2f\n",avgphysics);    //แสดงค่าเฉลี่ยวิชาฟิสิกส์
    printf("Chemistry: %.2f\n",avgchem);    //แสดงค่าเฉลี่ยวิชาเคมี

    return 0;
}