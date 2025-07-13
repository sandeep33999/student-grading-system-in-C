#include <stdio.h>

double sky=0.0;
double arry[6];
double countA=0.0;
double countB=0.0;
double countC=0.0;
double CountD=0.0;
double countE=0.0;
double countF=0.0;
int numStudents=0;
double arr[0]; 

char LetterGrade2(double avgMOC);
         //show student grade based on their marks.
        //arr[]--- Used for stor Marks Of Student.
       //arry[]-- Used for store Marks which given by proff. to set rang oF Letter Grade.
      //sky used For Sum Of all Marks of Student.
     //avgMoC Used For Average Marks Of Total Student.
                                                
double Re_entery(int numStudent){
    
    arr[0];
    arr[0]=numStudents;
     double TotalA=0.0;
     double TotalB=0.0;
     double TotalC=0.0;
     double TotalD=0.0;
     double TotalE=0.0;
     double TotalF=0.0;
        
        printf("<---------------------------------------->");
        printf("\nThe Average Mark Is: %.2lf\n\n", sky/numStudent);
    
         //------------------------Set Range of Grade---------------------------------
    for(char i=0; i<5; i++){
        printf("Enter Marks From You Wish To Give' %c 'Grade: ", 'A'+i);
        scanf("%lf", &arry[i]);
    }
         //------------Displayed Student Their marks And Grades------------------------ 
        printf("\n<-------------New Grades Are------------->\n");
    for(int i=1; i<=numStudent; i++){
        printf("Marks Of %d Student Was: %.2f\n", i , arr[i] );
        printf("Grade Of %d Student Is: ", i );
        
         //-------compairing Marks Achived by student And Set By proff-----------------
        if (arr[i]>= arry[0]) {
            TotalA++;
         printf(" A");
         printf("\n");
    } else if (arr[i] >= arry[1]) {
            TotalB++;
         printf(" B");
         printf("\n");
    } else if (arr[i] >= arry[2]) {
            TotalC++;
         printf(" C ");
         printf("\n");
    } else if (arr[i] >= arry[3]) {
            TotalD++;
         printf(" D");
         printf("\n");
    }  else if (arr[i] >= arry[4]) {
            TotalE++;
         printf(" E");
         printf("\n");
    } else {
            TotalF++;
         printf(" F ");
         printf("\n");
    }
    printf("\n");
    
    
    }
           printf("\nTotal Number Of Student Those Secore ' A' Grade: %.lf", TotalA);
           printf("\nTotal Number Of Student Those Secore ' B' Grade: %.lf", TotalB);
           printf("\nTotal Number Of Student Those Secore ' C' Grade: %.lf", TotalC);
           printf("\nTotal Number Of Student Those Secore ' D' Grade: %.lf", TotalD);
           printf("\nTotal Number Of Student Those Secore ' E' Grade: %.lf", TotalE);
           printf("\nTotal Number Of Student Those Secore ' F' Grade: %.lf\n", TotalF);
           
}

          //------------ Average class Grades In Letter form------------------------------

char LetterGrade2(double avgMOC) {
    if (avgMOC>= arry[0]) {
         return 'A';
        }else if (avgMOC >= arry[1]) {
         return 'B';
        } else if (avgMOC>= arry[2]) {
         return 'C';
        } else if (avgMOC>= arry[3]) {
         return 'D';
        } else if (avgMOC>= arry[4]) {
         return 'E';
    } else {
        return 'F';
    }
}

 //----------------------------First Fuction Start---------------------------------------

double score(int numStudent){
    
          //Take input Mark of Student , And Calculate Average Marks Of Class

    for(int i=1; i<=numStudent; i++){
          double totalScore = 0.0;
        printf("Enter The Marks Of Student %d: ", i);
        scanf("%lf", &arr[i]);
         totalScore += arr[i];
         sky+=totalScore;
    }
         //--------------printing Aveage Marks Of Student------------------

        printf("The Average Mark Is: %.2lf\n\n", sky/numStudent);
    
         //--------------Set Range of Grade---------------------------------
    for(char i=0; i<5; i++){
        printf("Enter Marks From You Wish To Give' %c 'Grade: ", 'A'+i);
        scanf("%lf", &arry[i]);
    }
         printf("\n");
         /*-------Displayed Student Their marks-----------------------------*/
         /*-------Displayed Student Grades----------------------------------*/
    for(int i=1; i<=numStudent; i++){

        printf("Marks Of %d Student Was: %.2f\n", i , arr[i] );
        printf("Grade Of %d Student Is: ", i );
        
         /*------- compairing Marks Achived by student And Set By proff. Base on it Give Grade-----*/
        if (arr[i]>= arry[0]) {
            double TotalA=0.0;
            TotalA++;
            countA+=TotalA;
            printf(" A");
            printf("\n");
        } else if (arr[i] >= arry[1]) {

            double TotalB=0.0;
            TotalB++;
            countB += TotalB;
            printf(" B");
            printf("\n");
        } else if (arr[i] >= arry[2]) {
            double TotalC=0.0;
            TotalC++;
            countC += TotalC;
            printf(" C ");
            printf("\n");
        } else if (arr[i] >= arry[3]) {
            double TotalD=0.0;
            TotalD++;
            CountD += TotalD;
            printf(" D");
            printf("\n");
        }  else if (arr[i] >= arry[4]) {
            double TotalE=0.0;
            TotalE++;
            countE += TotalE;
            printf(" E");
            printf("\n");
        } 
        else {
            double TotalF=0.0;
            TotalF++;
            countF += TotalF;
            printf(" F ");
        }
        printf("\n");
    
    }
    
         printf("Total Number Of Student Those Secore ' A' Grade: %.lf",countA);
         printf("\nTotal Number Of Student Those Secore ' B' Grade: %.lf",countB);
         printf("\nTotal Number Of Student Those Secore ' C' Grade: %.lf",countC);
         printf("\nTotal Number Of Student Those Secore ' D' Grade: %.lf",CountD);
         printf("\nTotal Number Of Student Those Secore ' E' Grade: %.lf",countE);
         printf("\nTotal Number Of Student Those Secore ' F' Grade: %.lf",countF);
    
}
         //--------------- Average class Grades In Letter form-------------------------
char LetterGrade(double avgMOC) {
    if (avgMOC>= arry[0]) {
         return 'A';
        } else if (avgMOC >= arry[1]) {
         return 'B';
        } else if (avgMOC>= arry[2]) {
         return 'C';
        } else if (avgMOC>= arry[3]) {
         return 'D';
        } else if (avgMOC>= arry[4]) {
         return 'E';
        } 
    else {
         return 'F';
    }
}

int main() {

         //----------------numStudents--------------------
        printf("Enter the number of students: ");
        scanf("%d", &numStudents);
        printf("\n");
    if(numStudents<=0){
         printf("Thanks!! To Test Zero Condition\n");
         printf("Number Of Student Must Be More Then Zero\n");
         return 0;
    }
         double MM= score(numStudents); 
         double avgMOC = sky/numStudents;
         char LG = LetterGrade(avgMOC);

        printf("\nThe Average Marks Of Class Is: %.2lf\n", avgMOC);
        printf("The Average Grade Of Class Is: %c\n\n", LG);
        printf("<------------------------------------------->");
     
         int s;
         printf("\n\nIf You Wish to Change Grade Range Enter 1:");
         printf("\n   If You Wish To No Change Enter 2:        ");
         scanf("%d",&s);
        if(s==1){
         //calling 2nd Fuction;
          Re_entery(numStudents);
         char new = LetterGrade2(avgMOC);
         printf("\nThe Average Marks Of Class Is: %.2lf", avgMOC);
         printf("\nThe Average Grade Og Class Is: %c",new);
         printf("\n<----------------Thank You!----------------->\n");
         
        }
        else{
         printf("<--------------Thank You!-------------->\n");
         return 0;
        }

    return 0;
}
