#include <stdio.h>
int main()
{
  float Max1, Max2, Max3, Max4, Max5;
  float m1, m2, m3, m4, m5;
  float percentage;

  printf("Please, enter the marks of 5 subect: ");
  scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
  printf("Please, emter the maximum marks of all subect: ");
  scanf("%f%f%f%f%f", &Max1, &Max2, &Max3, &Max4, &Max5);

  percentage = ((m1/Max1 + m2/Max2 + m3/Max3 + m4/Max4 + m5/Max5)/5)*100.0;
  printf("The total percentage of your marks is %.2f\n", percentage);

  if(percentage>90){
    printf("You have ge\ot grade A.\n");
  }
  else if(percentage > 80){
    printf("You have got grade B.\n");
  }
  else if(percentage > 70){
    printf("You have got grade C.\n");
  }
  else{
    printf("You have got grade D.\n");
  }
  return 0;
}
