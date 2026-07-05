#include <stdio.h>
int main()
{
  const float Max1=100.0, Max2=100.0, Max3=100.0, Max4=50.0, Max5=50.0;
  float m1, m2, m3, m4, m5, sum, percentage;
  m1 = m2 = m3 = m4 = m5 = sum = 0;

  printf("Please, enter your marks(m1[Max1=%.2f], m2[Max2=%.2f], m3[Max3=%.2f], m4[Max4=%.2f], m5[Max5=%.2f]): \n",Max1, Max2, Max3, Max4, Max5);
  scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
  printf("Your marks is %.2f,%.2f,%.2f,%.2f,%.2f\n", m1, m2, m3, m4, m5);
  
  sum = (m1 + m2 + m3 + m4 + m5);
  printf("Your total marks is %.2f\n", sum);

  percentage = ((m1/Max1 + m2/Max2 + m3/Max3 + m4/Max4 + m5/Max5)/5)*100;
  printf("The total percentage of your marks is %.2f", percentage);
  return 0;
}
